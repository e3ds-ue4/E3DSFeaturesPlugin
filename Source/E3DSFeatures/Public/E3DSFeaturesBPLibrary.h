// Copyright Eagle 3D Streaming, All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "E3DSFeaturesBPLibrary.generated.h"

UCLASS()
class E3DSFEATURES_API UE3DSFeaturesBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "E3DSFeatures sample test testing"), Category = "E3DSFeaturesTesting")
	static float E3DSFeaturesSampleFunction(float Param);
};
