/**
* Copyright (C) 2022 | Created by DEXIED || DEXIED GAMES
* All rights reserved!
* My Discord Server: https://discord.gg/mqV52Qf
*/


#include "XFoliage/Public/XFoliageMiningActor.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

AXFoliageMiningActor::AXFoliageMiningActor()
{
	bEnableDefaultXFoliageInteract = false;
	bEnableDefaultXFoliageDamage = true;
}

void AXFoliageMiningActor::BeginPlay()
{
	Super::BeginPlay();
	if (HasAuthority())
	{
		InstancesHealth.Init(MaxInstanceHealth, HISMComponent->GetInstanceCount());
	}
}

void AXFoliageMiningActor::OnShowInstance_Implementation(uint8 InstanceIndex, bool bWithEffects)
{
	Super::OnShowInstance_Implementation(InstanceIndex, bWithEffects);
	if (HasAuthority())
	{
		if (InstancesHealth.IsValidIndex(InstanceIndex))
		{
			InstancesHealth[InstanceIndex] = MaxInstanceHealth;
		}
	}
}

void AXFoliageMiningActor::OnHideInstance_Implementation(uint8 InstanceIndex, bool bWithEffects)
{
	Super::OnHideInstance_Implementation(InstanceIndex, bWithEffects);
	if (HasAuthority())
	{
		if (InstancesHealth.IsValidIndex(InstanceIndex))
		{
			InstancesHealth[InstanceIndex] = 0;
		}
	}
}

void AXFoliageMiningActor::OnShowDeletedInstances_Implementation(const TArray<uint8>& InstancesIndexes, bool bWithEffects)
{
	Super::OnShowDeletedInstances_Implementation(InstancesIndexes, bWithEffects);
	if (HasAuthority())
	{
		for (uint8 InstanceIndex : InstancesIndexes)
		{
			if (InstancesHealth.IsValidIndex(InstanceIndex))
			{
				InstancesHealth[InstanceIndex] = MaxInstanceHealth;
			}
		}
	}
}

int32 AXFoliageMiningActor::XFoliageDamage_Implementation(class AActor* OwnerActor, FHitResult HitResult, int32 Damage)
{
	if (HitResult.GetComponent() == HISMComponent && Damage > 0 && bEnableDefaultXFoliageDamage)
	{
		return ApplyInstanceDamage(HitResult.Item, Damage);
	}
	return Super::XFoliageDamage_Implementation(OwnerActor, HitResult, Damage);
}


int32 AXFoliageMiningActor::GetInstanceHealth_Implementation(uint8 InstanceIndex)
{
	if (InstancesHealth.IsValidIndex(InstanceIndex))
	{
		return InstancesHealth[InstanceIndex];
	}
	return 0;
}

int32 AXFoliageMiningActor::SetInstanceHealth_Implementation(uint8 InstanceIndex, int32 NewHealth)
{
	if (InstancesHealth.IsValidIndex(InstanceIndex))
	{
		InstancesHealth[InstanceIndex] = NewHealth;
		if (NewHealth <= 0) HideInstance(InstanceIndex);
		else ShowInstance(InstanceIndex);
		return NewHealth;
	}
	return 0;
}

int32 AXFoliageMiningActor::ApplyInstanceDamage_Implementation(uint8 InstanceIndex, int32 Damage)
{
	if (InstancesHealth.IsValidIndex(InstanceIndex) && IsInstanceVisible(InstanceIndex))
	{
		int32 NewHealth = InstancesHealth[InstanceIndex] -= Damage;
		if (NewHealth <= 0) HideInstance(InstanceIndex);
		return NewHealth;
	}
	return 0;
}
