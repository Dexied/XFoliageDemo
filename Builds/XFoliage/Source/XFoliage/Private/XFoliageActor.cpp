/**
* Copyright (C) 2022 | Created by DEXIED || DEXIED GAMES
* All rights reserved!
* My Discord Server: https://discord.gg/mqV52Qf
*/


#include "XFoliage/Public/XFoliageActor.h"
#include "Net/UnrealNetwork.h"

#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Landscape.h"

#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"
#include "Sound/SoundBase.h"

#include "Engine/EngineTypes.h"
#include "CollisionShape.h"
#include "CollisionQueryParams.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"


// Sets default values
AXFoliageActor::AXFoliageActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	SetActorTickEnabled(false);
	bReplicates = true;
	SetReplicateMovement(false);
	NetUpdateFrequency = 1.f;

	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
	RootComponent = RootSceneComponent;

	BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
	BillboardComponent->SetupAttachment(RootSceneComponent);

	HISMComponent = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISMComponent"));
	HISMComponent->SetupAttachment(RootSceneComponent);
	
}


void AXFoliageActor::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AXFoliageActor, InstancesDeleted);
}


void AXFoliageActor::RecreateFoliage()
{
	FoliageInstancesTransforms.Empty();

	HISMComponent->ClearInstances();
	HISMComponent->SetStaticMesh(InstanceStaticMesh);
	HISMComponent->InstancingRandomSeed = InitialSeed;
	HISMComponent->InstanceStartCullDistance = StartCullDistance;
	HISMComponent->InstanceEndCullDistance = EndCullDistance;

	for (uint8 i = 0; i < MaxInstanceCount; i++)
	{
		FRandomStream RandomStream = FRandomStream(InitialSeed + i);
		FVector RandomUnitVector = RandomStream.VRand();
		float RandomFloat = UKismetMathLibrary::RandomFloatInRangeFromStream(0.f, MaxSpawnRadius, RandomStream);
		FVector RandomLocation = RandomUnitVector * RandomFloat + GetActorLocation(); //in world space
		RandomLocation.Z = GetActorLocation().Z; //Fix Z Location

		FRotator RandomRotation = UKismetMathLibrary::RandomRotatorFromStream(true, RandomStream);
		float RandomScale = FMath::FRandRange(MinScale, MaxScale);

		
		FHitResult TraceHitResult;
		FCollisionQueryParams TraceCollisionQueryParams;
		TraceCollisionQueryParams.AddIgnoredActor(this);
		TraceCollisionQueryParams.AddIgnoredComponent(HISMComponent);
		
		if (GetWorld()->LineTraceSingleByObjectType(TraceHitResult, RandomLocation + FVector(0.f, 0.f, 5000.f), RandomLocation - FVector(0.f, 0.f, 5000.f), FindPlaceObjectTypes, TraceCollisionQueryParams))
		{
			if (bIgnoreLandscape && Cast<ALandscapeProxy>(TraceHitResult.GetActor())) continue;
			if (bIgnoreStaticMesh && Cast<UStaticMeshComponent>(TraceHitResult.GetComponent())) continue;
			if (bIgnoreSkeletalMesh && Cast<USkeletalMeshComponent>(TraceHitResult.GetComponent())) continue;

			FTransform InstanceTransform;
			InstanceTransform.SetLocation(TraceHitResult.ImpactPoint);
			InstanceTransform.SetRotation(FRotator(bAlignToNormal ? UKismetMathLibrary::MakeRotFromZ(TraceHitResult.ImpactNormal) : FRotator(bRandomPitch ? RandomRotation.Pitch : 0.f, bRandomYaw ? RandomRotation.Yaw : 0.f, bRandomRoll ? RandomRotation.Roll : 0.f)).Quaternion());
			InstanceTransform.SetScale3D(FVector(RandomScale, RandomScale, RandomScale));

			FTransform RelativeInstanceTransform = InstanceTransform.GetRelativeTransform(HISMComponent->GetComponentTransform());
			
			FoliageInstancesTransforms.Add(RelativeInstanceTransform);
		}
	}
	HISMComponent->AddInstances(FoliageInstancesTransforms, false);
}

void AXFoliageActor::FixFoliage()
{
	HISMComponent->SetStaticMesh(InstanceStaticMesh);
	HISMComponent->InstancingRandomSeed = InitialSeed;
	HISMComponent->InstanceStartCullDistance = StartCullDistance;
	HISMComponent->InstanceEndCullDistance = EndCullDistance;

	for (uint8 i = 0; i < FoliageInstancesTransforms.Num(); i++)
	{
		//if (HISMComponent->IsValidInstance(i)) //UE5
		if (i < HISMComponent->GetInstanceCount()) HISMComponent->UpdateInstanceTransform(i, FoliageInstancesTransforms[i], false);
		else HISMComponent->AddInstance(FoliageInstancesTransforms[i]);
	}
	HISMComponent->MarkRenderStateDirty();

	if (HISMComponent->GetInstanceCount() > FoliageInstancesTransforms.Num())
	{
		TArray<int32> InstancesToRemove;
		for (int32 i = HISMComponent->GetInstanceCount(); i > FoliageInstancesTransforms.Num(); i--)
		{
			InstancesToRemove.Add(i - 1);
		}
		HISMComponent->RemoveInstances(InstancesToRemove);
	}
}


#if WITH_EDITOR
void AXFoliageActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if (FoliageInstancesTransforms.Num() > 255) FoliageInstancesTransforms.SetNum(255, true);
	FixFoliage();
}
#endif

// Called when the game starts or when spawned
void AXFoliageActor::BeginPlay()
{
	Super::BeginPlay();
	HideDeletedInstances();
}


// Called every frame
void AXFoliageActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AXFoliageActor::HideDeletedInstances()
{
	for (int32 i = 0; i < InstancesDeleted.Num(); i++)
	{
		if (InstancesDeleted[i] < HISMComponent->GetInstanceCount())
			//if (HISMComponent->IsValidInstance(InstancesDeleted[i])) //UE5
		{
			if (FoliageInstancesTransforms.IsValidIndex(InstancesDeleted[i]))
			{
				FTransform InstanceTransformNoScale = FoliageInstancesTransforms[InstancesDeleted[i]];
				InstanceTransformNoScale.SetScale3D(FVector::ZeroVector);

				HISMComponent->UpdateInstanceTransform(InstancesDeleted[i], InstanceTransformNoScale, false);
			}
			else HISMComponent->UpdateInstanceTransform(InstancesDeleted[i], FTransform(FRotator::ZeroRotator, FVector::ZeroVector, FVector::ZeroVector), false);
		}
	}
	HISMComponent->MarkRenderStateDirty();
}

bool AXFoliageActor::IsRespawnBlock(const TArray<FOverlapResult>& OverlapResults)
{
	for (FOverlapResult OverlapResult : OverlapResults)
	{
		for (TSubclassOf<AActor> BlockActorClass : BlockRespawnActorClasses)
		{
			if (OverlapResult.GetActor()->GetClass()->IsChildOf(BlockActorClass))
			{
				return true;
			}
		}
	}
	return false;
}

TArray<uint8> AXFoliageActor::ShowDeletedInstances(uint8 MaxShowCount)
{
	uint8 ShowCount = 0;
	TArray<uint8> InstancesToShow;


	for (uint8 i = 0; i < InstancesDeleted.Num(); i++)
	{
		if (FoliageInstancesTransforms.IsValidIndex(InstancesDeleted[i]))
		{
			FTransform FoliageWorldTransform = FoliageInstancesTransforms[InstancesDeleted[i]] * HISMComponent->GetComponentTransform();
			TArray<FOverlapResult> OverlapResults;
			FCollisionQueryParams CollisionQueryParams;
			CollisionQueryParams.AddIgnoredActor(this);
			CollisionQueryParams.AddIgnoredComponent(HISMComponent);
			GetWorld()->OverlapMultiByObjectType(OverlapResults, FoliageWorldTransform.GetLocation(), FoliageWorldTransform.GetRotation(), FCollisionObjectQueryParams::AllObjects, FCollisionShape::MakeSphere(BlockDetectRadius), CollisionQueryParams);
			DrawDebugSphere(GetWorld(), FoliageWorldTransform.GetLocation(), BlockDetectRadius, 32, FColor::Red, false, 1.f);
			if (!IsRespawnBlock(OverlapResults))
			{
				InstancesToShow.Add(InstancesDeleted[i]);
				InstancesDeleted.RemoveAt(i, 1, false);
				i--;
				ShowCount++;
				if (MaxShowCount > 0 && ShowCount >= MaxShowCount) break;
			}
		}
	}


	Multicast_OnShowDeletedInstances(InstancesToShow);
	
	InstancesDeleted.Shrink();
	OnRep_InstancesDeleted();

	return InstancesToShow;
}

void AXFoliageActor::OnShowDeletedInstances_Implementation(const TArray<uint8>& InstancesIndexes, bool bWithEffects)
{
	for (uint8 i = 0; i < InstancesIndexes.Num(); i++)
	{
		if (InstancesIndexes[i] < HISMComponent->GetInstanceCount() && FoliageInstancesTransforms.IsValidIndex(InstancesIndexes[i]))
		{
			HISMComponent->UpdateInstanceTransform(InstancesIndexes[i], FoliageInstancesTransforms[InstancesIndexes[i]], false, false);

			if (bWithEffects && GetNetMode() != NM_DedicatedServer)
			{
				FTransform ParticleWorldTransform = FoliageInstancesTransforms[InstancesIndexes[i]] * HISMComponent->GetComponentTransform();
				ParticleWorldTransform.SetScale3D(ParticleWorldTransform.GetScale3D() * FXSystemScaleMultiplier);

				if (UWorld* WorldPtr = GetWorld())
				{
					if (UParticleSystem* ParticleSystem = Cast<UParticleSystem>(ShowFXSystemAsset.LoadSynchronous()))
					{
						UGameplayStatics::SpawnEmitterAtLocation(WorldPtr, ParticleSystem, ParticleWorldTransform, true, EPSCPoolMethod::None);
					}
					if (UNiagaraSystem* NiagaraSystem = Cast<UNiagaraSystem>(ShowFXSystemAsset.LoadSynchronous()))
					{
						UNiagaraFunctionLibrary::SpawnSystemAtLocation(WorldPtr, NiagaraSystem, ParticleWorldTransform.GetLocation(), ParticleWorldTransform.GetRotation().Rotator(), ParticleWorldTransform.GetScale3D());
					}

					if (USoundBase* SoundBase = Cast<USoundBase>(ShowSoundBase.LoadSynchronous()))
					{
						UGameplayStatics::SpawnSoundAtLocation(GetWorld(), SoundBase, ParticleWorldTransform.GetLocation());
					}
				}
			}
		}
	}
	HISMComponent->MarkRenderStateDirty();
}

void AXFoliageActor::Multicast_OnShowDeletedInstances_Implementation(const TArray<uint8>& InstancesIndexes)
{
	OnShowDeletedInstances(InstancesIndexes, bEnableEffects);
}

void AXFoliageActor::OnRep_InstancesDeleted_Implementation()
{
	if (!bInstancesLoaded)
	{
		HideDeletedInstances();
		bInstancesLoaded = true;
	}
}



bool AXFoliageActor::IsValidInstance(uint8 InstanceIndex)
{
	return InstanceIndex < HISMComponent->GetInstanceCount() && FoliageInstancesTransforms.IsValidIndex(InstanceIndex);
}

bool AXFoliageActor::IsInstanceVisible(uint8 InstanceIndex)
{
	return IsValidInstance(InstanceIndex) && !InstancesDeleted.Contains(InstanceIndex);
}



bool AXFoliageActor::ShowInstance(uint8 InstanceIndex)
{
	if (InstanceIndex < HISMComponent->GetInstanceCount() && FoliageInstancesTransforms.IsValidIndex(InstanceIndex) && InstancesDeleted.Contains(InstanceIndex))
	{
		InstancesDeleted.Remove(InstanceIndex);
		OnRep_InstancesDeleted();
		Multicast_OnShowInstance(InstanceIndex);
		return true;
	}
	return false;
}

bool AXFoliageActor::HideInstance(uint8 InstanceIndex)
{
	if (InstanceIndex < HISMComponent->GetInstanceCount() && FoliageInstancesTransforms.IsValidIndex(InstanceIndex) && !InstancesDeleted.Contains(InstanceIndex))
	{
		InstancesDeleted.Add(InstanceIndex);
		OnRep_InstancesDeleted();
		Multicast_OnHideInstance(InstanceIndex);
		return true;
	}
	return false;
}


void AXFoliageActor::OnShowInstance_Implementation(uint8 InstanceIndex, bool bWithEffects)
{
	if (InstanceIndex < HISMComponent->GetInstanceCount() && FoliageInstancesTransforms.IsValidIndex(InstanceIndex))
	{
		HISMComponent->UpdateInstanceTransform(InstanceIndex, FoliageInstancesTransforms[InstanceIndex], false, true);

		if (bWithEffects && GetNetMode() != NM_DedicatedServer)
		{
			FTransform ParticleWorldTransform = FoliageInstancesTransforms[InstanceIndex] * HISMComponent->GetComponentTransform();
			ParticleWorldTransform.SetScale3D(ParticleWorldTransform.GetScale3D() * FXSystemScaleMultiplier);

			if (UWorld* WorldPtr = GetWorld())
			{
				if (UParticleSystem* ParticleSystem = Cast<UParticleSystem>(ShowFXSystemAsset.LoadSynchronous()))
				{
					UGameplayStatics::SpawnEmitterAtLocation(WorldPtr, ParticleSystem, ParticleWorldTransform, true, EPSCPoolMethod::None);
				}
				if (UNiagaraSystem* NiagaraSystem = Cast<UNiagaraSystem>(ShowFXSystemAsset.LoadSynchronous()))
				{
					UNiagaraFunctionLibrary::SpawnSystemAtLocation(WorldPtr, NiagaraSystem, ParticleWorldTransform.GetLocation(), ParticleWorldTransform.GetRotation().Rotator(), ParticleWorldTransform.GetScale3D());
				}

				if (USoundBase* SoundBase = Cast<USoundBase>(ShowSoundBase.LoadSynchronous()))
				{
					UGameplayStatics::SpawnSoundAtLocation(GetWorld(), SoundBase, ParticleWorldTransform.GetLocation());
				}
			}
		}
	}
}

void AXFoliageActor::OnHideInstance_Implementation(uint8 InstanceIndex, bool bWithEffects)
{
	if (InstanceIndex < HISMComponent->GetInstanceCount() && FoliageInstancesTransforms.IsValidIndex(InstanceIndex))
	{
		FTransform InstanceTransformNoScale = FoliageInstancesTransforms[InstanceIndex];
		InstanceTransformNoScale.SetScale3D(FVector::ZeroVector);
		HISMComponent->UpdateInstanceTransform(InstanceIndex, InstanceTransformNoScale, false, true);

		if (bWithEffects && GetNetMode() != NM_DedicatedServer)
		{
			FTransform ParticleWorldTransform = FoliageInstancesTransforms[InstanceIndex] * HISMComponent->GetComponentTransform();
			ParticleWorldTransform.SetScale3D(ParticleWorldTransform.GetScale3D() * FXSystemScaleMultiplier);

			if (UWorld* WorldPtr = GetWorld())
			{
				if (UParticleSystem* ParticleSystem = Cast<UParticleSystem>(HideFXSystemAsset.LoadSynchronous()))
				{
					UGameplayStatics::SpawnEmitterAtLocation(WorldPtr, ParticleSystem, ParticleWorldTransform, true, EPSCPoolMethod::None);
				}
				if (UNiagaraSystem* NiagaraSystem = Cast<UNiagaraSystem>(HideFXSystemAsset.LoadSynchronous()))
				{
					UNiagaraFunctionLibrary::SpawnSystemAtLocation(WorldPtr, NiagaraSystem, ParticleWorldTransform.GetLocation(), ParticleWorldTransform.GetRotation().Rotator(), ParticleWorldTransform.GetScale3D());
				}

				if (USoundBase* SoundBase = Cast<USoundBase>(HideSoundBase.LoadSynchronous()))
				{
					UGameplayStatics::SpawnSoundAtLocation(GetWorld(), SoundBase, ParticleWorldTransform.GetLocation());
				}
			}
		}
	}
}

void AXFoliageActor::Multicast_OnShowInstance_Implementation(uint8 InstanceIndex)
{
	OnShowInstance(InstanceIndex, bEnableEffects);
}

void AXFoliageActor::Multicast_OnHideInstance_Implementation(uint8 InstanceIndex)
{
	OnHideInstance(InstanceIndex, bEnableEffects);
}



void AXFoliageActor::XFoliageInteract_Implementation(class AActor* OwnerActor, FHitResult HitResult)
{
	if (HitResult.GetComponent() == HISMComponent && bEnableDefaultXFoliageInteract)
	{
		if (IsInstanceVisible(HitResult.Item))
		{
			HideInstance(HitResult.Item);
		}
	}
}

int32 AXFoliageActor::XFoliageDamage_Implementation(class AActor* OwnerActor, FHitResult HitResult, int32 Damage)
{
	if (HitResult.GetComponent() == HISMComponent && Damage > 0 && bEnableDefaultXFoliageDamage)
	{
		if (IsInstanceVisible(HitResult.Item))
		{
			HideInstance(HitResult.Item);
		}
	}
	return 0;
}

bool AXFoliageActor::GetXFoliageName_Implementation(FText& OutName)
{
	OutName = DefaultXFoliageName;
	return !DefaultXFoliageName.IsEmpty();
}

int32 AXFoliageActor::GetInstanceHealth_Implementation(uint8 InstanceIndex)
{
	return IsInstanceVisible(InstanceIndex);
}

int32 AXFoliageActor::SetInstanceHealth_Implementation(uint8 InstanceIndex, int32 NewHealth)
{
	if (NewHealth > 0)
	{
		if (!IsInstanceVisible(InstanceIndex))
		{
			ShowInstance(InstanceIndex);
		}
		return 1;
	}
	else
	{
		if (IsInstanceVisible(InstanceIndex))
		{
			HideInstance(InstanceIndex);
		}
		return 0;
	}
}

int32 AXFoliageActor::ApplyInstanceDamage_Implementation(uint8 InstanceIndex, int32 Damage)
{
	if (IsInstanceVisible(InstanceIndex))
	{
		HideInstance(InstanceIndex);
		return 0;
	}
	return 0;
}

