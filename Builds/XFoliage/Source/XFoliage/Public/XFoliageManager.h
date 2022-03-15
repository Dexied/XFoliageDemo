/**
* Copyright (C) 2022 | Created by DEXIED || DEXIED GAMES
* All rights reserved!
* My Discord Server: https://discord.gg/mqV52Qf
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "XFoliageManager.generated.h"

UCLASS()
class XFOLIAGE_API AXFoliageManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AXFoliageManager();

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "XFoliage")
		USceneComponent* RootSceneComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "XFoliage")
		class UBillboardComponent* BillboardComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage", meta=(ClampMin="10"))
		float RespawnInterval = FMath::RandRange(50.f, 200.f);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		TArray<class AXFoliageActor*> FoliageActors;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		uint8 PerFoliageRespawnCount = 5;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "XFoliage")
		uint8 MaxRespawnCount = 20;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY()
		bool bFirstTickSkipped = false;

};
