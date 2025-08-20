// Copyright Eagle 3D Streaming, All Rights Reserved.

#include "E3DSFeatures.h"

#define LOCTEXT_NAMESPACE "FE3DSFeaturesModule"

void FE3DSFeaturesModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FE3DSFeaturesModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FE3DSFeaturesModule, E3DSFeatures)