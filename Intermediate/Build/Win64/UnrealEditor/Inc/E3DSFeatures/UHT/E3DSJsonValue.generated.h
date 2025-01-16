// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JSON/E3DSJsonValue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UE3DSJsonObject;
class UE3DSJsonValue;
class UObject;
#ifdef E3DSFEATURES_E3DSJsonValue_generated_h
#error "E3DSJsonValue.generated.h already included, missing '#pragma once' in E3DSJsonValue.h"
#endif
#define E3DSFEATURES_E3DSJsonValue_generated_h

#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h_36_RPC_WRAPPERS \
	DECLARE_FUNCTION(execAsObject); \
	DECLARE_FUNCTION(execAsArray); \
	DECLARE_FUNCTION(execAsBool); \
	DECLARE_FUNCTION(execAsString); \
	DECLARE_FUNCTION(execAsNumber); \
	DECLARE_FUNCTION(execIsNull); \
	DECLARE_FUNCTION(execGetTypeString); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execConstructJsonValueObject); \
	DECLARE_FUNCTION(execConstructJsonValueArray); \
	DECLARE_FUNCTION(execConstructJsonValueBool); \
	DECLARE_FUNCTION(execConstructJsonValueString); \
	DECLARE_FUNCTION(execConstructJsonValueNumber);


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUE3DSJsonValue(); \
	friend struct Z_Construct_UClass_UE3DSJsonValue_Statics; \
public: \
	DECLARE_CLASS(UE3DSJsonValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/E3DSFeatures"), NO_API) \
	DECLARE_SERIALIZER(UE3DSJsonValue)


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UE3DSJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UE3DSJsonValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UE3DSJsonValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UE3DSJsonValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UE3DSJsonValue(UE3DSJsonValue&&); \
	UE3DSJsonValue(const UE3DSJsonValue&); \
public: \
	NO_API virtual ~UE3DSJsonValue();


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h_33_PROLOG
#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h_36_RPC_WRAPPERS \
	FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h_36_INCLASS \
	FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> E3DSFEATURES_API UClass* StaticClass<class UE3DSJsonValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h


#define FOREACH_ENUM_EPFJSON(op) \
	op(EPFJson::None) \
	op(EPFJson::Null) \
	op(EPFJson::String) \
	op(EPFJson::Number) \
	op(EPFJson::Boolean) \
	op(EPFJson::Array) \
	op(EPFJson::Object) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
