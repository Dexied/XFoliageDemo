/**
* Copyright (C) 2022 | Created by DEXIED || DEXIED GAMES
* All rights reserved!
* My Discord Server: https://discord.gg/mqV52Qf
*/

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FXFoliageModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
