/**
* Copyright (C) 2022 | Created by DEXIED || DEXIED GAMES
* All rights reserved!
* My Discord Server: https://discord.gg/mqV52Qf
*/

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "XFoliageInterface.generated.h"


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UXFoliageInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class XFOLIAGE_API IXFoliageInterface
{
	GENERATED_BODY()


public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "XFoliage")
		void XFoliageInteract(class AActor* OwnerActor, FHitResult HitResult);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "XFoliage")
		int32 XFoliageDamage(class AActor* OwnerActor, FHitResult HitResult, int32 Damage);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "XFoliage")
		bool GetXFoliageName(FText& OutName);

	
};
