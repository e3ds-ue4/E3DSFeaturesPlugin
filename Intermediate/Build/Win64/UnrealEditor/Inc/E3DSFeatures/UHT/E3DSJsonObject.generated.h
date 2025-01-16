// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JSON/E3DSJsonObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UE3DSJsonObject;
class UE3DSJsonValue;
class UObject;
#ifdef E3DSFEATURES_E3DSJsonObject_generated_h
#error "E3DSJsonObject.generated.h already included, missing '#pragma once' in E3DSJsonObject.h"
#endif
#define E3DSFEATURES_E3DSJsonObject_generated_h

#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonObject_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetObjectArrayField); \
	DECLARE_FUNCTION(execGetObjectArrayField); \
	DECLARE_FUNCTION(execSetBoolArrayField); \
	DECLARE_FUNCTION(execGetBoolArrayField); \
	DECLARE_FUNCTION(execSetStringArrayField); \
	DECLARE_FUNCTION(execGetStringArrayField); \
	DECLARE_FUNCTION(execSetNumberArrayField); \
	DECLARE_FUNCTION(execGetNumberArrayField); \
	DECLARE_FUNCTION(execSetObjectField); \
	DECLARE_FUNCTION(execGetObjectField); \
	DECLARE_FUNCTION(execSetBoolField); \
	DECLARE_FUNCTION(execGetBoolField); \
	DECLARE_FUNCTION(execSetStringField); \
	DECLARE_FUNCTION(execGetStringField); \
	DECLARE_FUNCTION(execGetIntegerField); \
	DECLARE_FUNCTION(execSetNumberField); \
	DECLARE_FUNCTION(execGetNumberField); \
	DECLARE_FUNCTION(execMergeJsonObject); \
	DECLARE_FUNCTION(execSetArrayField); \
	DECLARE_FUNCTION(execGetArrayField); \
	DECLARE_FUNCTION(execSetFieldNull); \
	DECLARE_FUNCTION(execSetField); \
	DECLARE_FUNCTION(execGetField); \
	DECLARE_FUNCTION(execRemoveField); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execGetFieldNames); \
	DECLARE_FUNCTION(execDecodeJson); \
	DECLARE_FUNCTION(execEncodeJson); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execConstructJsonObject);


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonObject_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUE3DSJsonObject(); \
	friend struct Z_Construct_UClass_UE3DSJsonObject_Statics; \
public: \
	DECLARE_CLASS(UE3DSJsonObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/E3DSFeatures"), NO_API) \
	DECLARE_SERIALIZER(UE3DSJsonObject)


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonObject_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UE3DSJsonObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UE3DSJsonObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UE3DSJsonObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UE3DSJsonObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UE3DSJsonObject(UE3DSJsonObject&&); \
	UE3DSJsonObject(const UE3DSJsonObject&); \
public: \
	NO_API virtual ~UE3DSJsonObject();


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonObject_h_13_PROLOG
#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonObject_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonObject_h_16_RPC_WRAPPERS \
	FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonObject_h_16_INCLASS \
	FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonObject_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> E3DSFEATURES_API UClass* StaticClass<class UE3DSJsonObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
