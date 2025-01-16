// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JSON/E3DS_JsonDecoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UE3DSJsonObject;
struct FServerInfo;
#ifdef E3DSFEATURES_E3DS_JsonDecoder_generated_h
#error "E3DS_JsonDecoder.generated.h already included, missing '#pragma once' in E3DS_JsonDecoder.h"
#endif
#define E3DSFEATURES_E3DS_JsonDecoder_generated_h

#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DS_JsonDecoder_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDecodeGetAllServerList); \
	DECLARE_FUNCTION(execDecodeRequestedNewServerInfo);


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DS_JsonDecoder_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUE3DS_JsonDecoder(); \
	friend struct Z_Construct_UClass_UE3DS_JsonDecoder_Statics; \
public: \
	DECLARE_CLASS(UE3DS_JsonDecoder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/E3DSFeatures"), NO_API) \
	DECLARE_SERIALIZER(UE3DS_JsonDecoder)


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DS_JsonDecoder_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UE3DS_JsonDecoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UE3DS_JsonDecoder(UE3DS_JsonDecoder&&); \
	UE3DS_JsonDecoder(const UE3DS_JsonDecoder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UE3DS_JsonDecoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UE3DS_JsonDecoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UE3DS_JsonDecoder) \
	NO_API virtual ~UE3DS_JsonDecoder();


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DS_JsonDecoder_h_13_PROLOG
#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DS_JsonDecoder_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DS_JsonDecoder_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DS_JsonDecoder_h_16_INCLASS_NO_PURE_DECLS \
	FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DS_JsonDecoder_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> E3DSFEATURES_API UClass* StaticClass<class UE3DS_JsonDecoder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DS_JsonDecoder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
