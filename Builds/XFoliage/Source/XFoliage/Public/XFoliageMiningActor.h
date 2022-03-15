/**
* Copyright (C) 2022 | Created by DEXIED || DEXIED GAMES
* All rights reserved!
* My Discord Server: https://discord.gg/mqV52Qf
*/

#pragma once

#include "CoreMinimal.h"
#include "XFoliage/Public/XFoliageActor.h"
#include "XFoliageMiningActor.generated.h"

/**
 * 
 */
UCLASS()
class XFOLIAGE_API AXFoliageMiningActor : public AXFoliageActor
{
	GENERATED_BODY()

public:

	AXFoliageMiningActor();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage|Mining")
		int32 MaxInstanceHealth = 200;

	UPROPERTY(BlueprintReadWrite, Category="XFoliage|Mining")
		TArray<int32> InstancesHealth;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnShowInstance_Implementation(uint8 InstanceIndex, bool bWithEffects) override;
	virtual void OnHideInstance_Implementation(uint8 InstanceIndex, bool bWithEffects) override;
	virtual void OnShowDeletedInstances_Implementation(const TArray<uint8>& InstancesIndexes, bool bWithEffects) override;


	virtual int32 XFoliageDamage_Implementation(class AActor* OwnerActor, FHitResult HitResult, int32 Damage) override;

	virtual int32 GetInstanceHealth_Implementation(uint8 InstanceIndex) override;
	virtual int32 SetInstanceHealth_Implementation(uint8 InstanceIndex, int32 NewHealth) override;
	virtual int32 ApplyInstanceDamage_Implementation(uint8 InstanceIndex, int32 Damage) override;

public:
	
};
