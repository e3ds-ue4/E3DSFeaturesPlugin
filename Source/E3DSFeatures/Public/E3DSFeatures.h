// Copyright Eagle 3D Streaming, All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class E3DSFEATURES_API FE3DSFeaturesModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
