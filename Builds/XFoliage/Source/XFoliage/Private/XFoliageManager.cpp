/**
* Copyright (C) 2022 | Created by DEXIED || DEXIED GAMES
* All rights reserved!
* My Discord Server: https://discord.gg/mqV52Qf
*/


#include "XFoliage/Public/XFoliageManager.h"
#include "XFoliage/Public/XFoliageActor.h"
#include "Components/BillboardComponent.h"


// Sets default values
AXFoliageManager::AXFoliageManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 100.f;
	SetActorTickEnabled(true);
	
	bReplicates = false;
	SetReplicateMovement(false);


	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
	RootComponent = RootSceneComponent;

	BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
	BillboardComponent->SetupAttachment(RootSceneComponent);

}

#if WITH_EDITOR
void AXFoliageManager::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	PrimaryActorTick.TickInterval = RespawnInterval;
}
#endif

// Called when the game starts or when spawned
void AXFoliageManager::BeginPlay()
{
	Super::BeginPlay();
	PrimaryActorTick.TickInterval = RespawnInterval;
}

// Called every frame
void AXFoliageManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (HasAuthority())
	{
		if (!bFirstTickSkipped)
		{
			bFirstTickSkipped = true;
			return;
		}

		int32 CurrentRespawnCount = 0;
		for (int32 i = 0; i < FoliageActors.Num(); i++)
		{
			if (IsValid(FoliageActors[i]))
			{
				int32 FoliageRespawnCount = FoliageActors[i]->ShowDeletedInstances(PerFoliageRespawnCount).Num();
				CurrentRespawnCount += FoliageRespawnCount;

				if (CurrentRespawnCount >= MaxRespawnCount)
				{
					break;
				}
			}
		}

	}
}

