/**
* Copyright (C) 2022 | Created by DEXIED || DEXIED GAMES
* All rights reserved!
* My Discord Server: https://discord.gg/mqV52Qf
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "XFoliage/Public/XFoliageInterface.h"
#include "XFoliageActor.generated.h"



UCLASS()
class XFOLIAGE_API AXFoliageActor : public AActor, public IXFoliageInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AXFoliageActor();

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "XFoliage")
		USceneComponent* RootSceneComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "XFoliage")
		class UBillboardComponent* BillboardComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "XFoliage")
		class UHierarchicalInstancedStaticMeshComponent* HISMComponent;

	UFUNCTION(CallInEditor, Category = "XFoliage")
		void RecreateFoliage();

	UFUNCTION(CallInEditor, Category = "XFoliage")
		void FixFoliage();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		class UStaticMesh* InstanceStaticMesh = nullptr;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		uint8 MaxInstanceCount = 255;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		float MaxSpawnRadius = 5000.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		int32 InitialSeed = 233;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		float MinScale = 0.5f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		float MaxScale = 1.5f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		bool bAlignToNormal = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		bool bRandomPitch = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		bool bRandomYaw = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		bool bRandomRoll = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Rules")
		TArray<TEnumAsByte<EObjectTypeQuery>> FindPlaceObjectTypes{ TEnumAsByte<EObjectTypeQuery>(ECC_WorldStatic), TEnumAsByte<EObjectTypeQuery>(ECC_WorldDynamic) };

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Rules")
		bool bIgnoreLandscape = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Rules")
		bool bIgnoreStaticMesh = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Rules")
		bool bIgnoreSkeletalMesh = true;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		float StartCullDistance = 5000.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		float EndCullDistance = 10000.f;
	
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Respawn")
		float BlockDetectRadius = 500.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Respawn")
		TArray<TSubclassOf<AActor>> BlockRespawnActorClasses{ APawn::StaticClass() };


	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Effects")
		bool bEnableEffects = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Effects")
		float FXSystemScaleMultiplier = 1.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Effects")
		TSoftObjectPtr<class UFXSystemAsset> ShowFXSystemAsset = nullptr;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Effects")
		TSoftObjectPtr<class USoundBase> ShowSoundBase = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Effects")
		TSoftObjectPtr<class UFXSystemAsset> HideFXSystemAsset = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Effects")
		TSoftObjectPtr<class USoundBase> HideSoundBase = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Interface")
		bool bEnableDefaultXFoliageInteract = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Interface")
		bool bEnableDefaultXFoliageDamage = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Interface")
		FText DefaultXFoliageName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Instances", meta = (MakeEditWidget))
		TArray<FTransform> FoliageInstancesTransforms;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void XFoliageInteract_Implementation(class AActor* OwnerActor, FHitResult HitResult) override;
	virtual int32 XFoliageDamage_Implementation(class AActor* OwnerActor, FHitResult HitResult, int32 Damage) override;
	virtual bool GetXFoliageName_Implementation(FText& OutName) override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	
	UPROPERTY(ReplicatedUsing = OnRep_InstancesDeleted, BlueprintReadWrite, Category = "XFoliage")
		TArray<uint8> InstancesDeleted;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "XFoliage")
		void OnRep_InstancesDeleted();
	virtual void OnRep_InstancesDeleted_Implementation();

	UPROPERTY()
		bool bInstancesLoaded = false;

	UFUNCTION()
		void HideDeletedInstances();

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "XFoliage")
		int32 GetInstanceHealth(uint8 InstanceIndex);
	virtual int32 GetInstanceHealth_Implementation(uint8 InstanceIndex);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "XFoliage")
		int32 SetInstanceHealth(uint8 InstanceIndex, int32 NewHealth);
	virtual int32 SetInstanceHealth_Implementation(uint8 InstanceIndex, int32 NewHealth);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "XFoliage")
		int32 ApplyInstanceDamage(uint8 InstanceIndex, int32 Damage);
	virtual int32 ApplyInstanceDamage_Implementation(uint8 InstanceIndex, int32 Damage);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "XFoliage")
		bool IsValidInstance(uint8 InstanceIndex);

	UFUNCTION(BlueprintCallable, Category = "XFoliage")
		bool IsInstanceVisible(uint8 InstanceIndex);

	UFUNCTION(BlueprintCallable, Category = "XFoliage")
		bool ShowInstance(uint8 InstanceIndex);

	UFUNCTION(BlueprintCallable, Category = "XFoliage")
		bool HideInstance(uint8 InstanceIndex);

	UFUNCTION()
		bool IsRespawnBlock(const TArray<FOverlapResult>& OverlapResults);

	UFUNCTION(BlueprintCallable, Category = "XFoliage")
		TArray<uint8> ShowDeletedInstances(uint8 MaxShowCount);


public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "XFoliage")
		void OnShowInstance(uint8 InstanceIndex, bool bWithEffects);
	virtual void OnShowInstance_Implementation(uint8 InstanceIndex, bool bWithEffects);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "XFoliage")
		void OnHideInstance(uint8 InstanceIndex, bool bWithEffects);
	virtual void OnHideInstance_Implementation(uint8 InstanceIndex, bool bWithEffects);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "XFoliage")
		void OnShowDeletedInstances(const TArray<uint8>& InstancesIndexes, bool bWithEffects);
	virtual void OnShowDeletedInstances_Implementation(const TArray<uint8>& InstancesIndexes, bool bWithEffects);

private:

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, Category = "XFoliage")
		void Multicast_OnShowInstance(uint8 InstanceIndex);
	void Multicast_OnShowInstance_Implementation(uint8 InstanceIndex);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, Category = "XFoliage")
		void Multicast_OnHideInstance(uint8 InstanceIndex);
	void Multicast_OnHideInstance_Implementation(uint8 InstanceIndex);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, Category = "XFoliage")
		void Multicast_OnShowDeletedInstances(const TArray<uint8>& InstancesIndexes);
	void Multicast_OnShowDeletedInstances_Implementation(const TArray<uint8>& InstancesIndexes);
	
};
