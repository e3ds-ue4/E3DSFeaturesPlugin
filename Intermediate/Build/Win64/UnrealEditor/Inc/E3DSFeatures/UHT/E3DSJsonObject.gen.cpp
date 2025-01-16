// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "E3DSFeatures/Public/JSON/E3DSJsonObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE3DSJsonObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DSJsonObject();
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DSJsonObject_NoRegister();
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DSJsonValue_NoRegister();
UPackage* Z_Construct_UPackage__Script_E3DSFeatures();
// End Cross Module References

// Begin Class UE3DSJsonObject Function ConstructJsonObject
struct Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics
{
	struct E3DSJsonObject_eventConstructJsonObject_Parms
	{
		UObject* WorldContextObject;
		UE3DSJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json object */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Object" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventConstructJsonObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventConstructJsonObject_Parms, ReturnValue), Z_Construct_UClass_UE3DSJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "ConstructJsonObject", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics::E3DSJsonObject_eventConstructJsonObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics::E3DSJsonObject_eventConstructJsonObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execConstructJsonObject)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UE3DSJsonObject**)Z_Param__Result=UE3DSJsonObject::ConstructJsonObject(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function ConstructJsonObject

// Begin Class UE3DSJsonObject Function DecodeJson
struct Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics
{
	struct E3DSJsonObject_eventDecodeJson_Parms
	{
		FString JsonString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Construct Json object from string */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Construct Json object from string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventDecodeJson_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
void Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((E3DSJsonObject_eventDecodeJson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(E3DSJsonObject_eventDecodeJson_Parms), &Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "DecodeJson", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::E3DSJsonObject_eventDecodeJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::E3DSJsonObject_eventDecodeJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_DecodeJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_DecodeJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execDecodeJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DecodeJson(Z_Param_JsonString);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function DecodeJson

// Begin Class UE3DSJsonObject Function EncodeJson
struct Z_Construct_UFunction_UE3DSJsonObject_EncodeJson_Statics
{
	struct E3DSJsonObject_eventEncodeJson_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Serialize Json to string */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serialize Json to string" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_EncodeJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventEncodeJson_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_EncodeJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_EncodeJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_EncodeJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_EncodeJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "EncodeJson", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_EncodeJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_EncodeJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_EncodeJson_Statics::E3DSJsonObject_eventEncodeJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_EncodeJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_EncodeJson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_EncodeJson_Statics::E3DSJsonObject_eventEncodeJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_EncodeJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_EncodeJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execEncodeJson)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->EncodeJson();
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function EncodeJson

// Begin Class UE3DSJsonObject Function GetArrayField
struct Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics
{
	struct E3DSJsonObject_eventGetArrayField_Parms
	{
		FString FieldName;
		TArray<UE3DSJsonValue*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a Json Array */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a Json Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UE3DSJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "GetArrayField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::E3DSJsonObject_eventGetArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::E3DSJsonObject_eventGetArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_GetArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_GetArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execGetArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UE3DSJsonValue*>*)Z_Param__Result=P_THIS->GetArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function GetArrayField

// Begin Class UE3DSJsonObject Function GetBoolArrayField
struct Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics
{
	struct E3DSJsonObject_eventGetBoolArrayField_Parms
	{
		FString FieldName;
		TArray<bool> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a Bool Array. Use it only if you're sure that array is uniform! */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a Bool Array. Use it only if you're sure that array is uniform!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetBoolArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetBoolArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "GetBoolArrayField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::E3DSJsonObject_eventGetBoolArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::E3DSJsonObject_eventGetBoolArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execGetBoolArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<bool>*)Z_Param__Result=P_THIS->GetBoolArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function GetBoolArrayField

// Begin Class UE3DSJsonObject Function GetBoolField
struct Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics
{
	struct E3DSJsonObject_eventGetBoolField_Parms
	{
		FString FieldName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a boolean. */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a boolean." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetBoolField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
void Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((E3DSJsonObject_eventGetBoolField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(E3DSJsonObject_eventGetBoolField_Parms), &Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "GetBoolField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::E3DSJsonObject_eventGetBoolField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::E3DSJsonObject_eventGetBoolField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_GetBoolField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_GetBoolField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execGetBoolField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function GetBoolField

// Begin Class UE3DSJsonObject Function GetField
struct Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics
{
	struct E3DSJsonObject_eventGetField_Parms
	{
		FString FieldName;
		UE3DSJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a JsonValue */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a JsonValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetField_Parms, ReturnValue), Z_Construct_UClass_UE3DSJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "GetField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics::E3DSJsonObject_eventGetField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics::E3DSJsonObject_eventGetField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_GetField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_GetField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execGetField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UE3DSJsonValue**)Z_Param__Result=P_THIS->GetField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function GetField

// Begin Class UE3DSJsonObject Function GetFieldNames
struct Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics
{
	struct E3DSJsonObject_eventGetFieldNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns a list of field names that exist in the object */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a list of field names that exist in the object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetFieldNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "GetFieldNames", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics::E3DSJsonObject_eventGetFieldNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics::E3DSJsonObject_eventGetFieldNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execGetFieldNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetFieldNames();
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function GetFieldNames

// Begin Class UE3DSJsonObject Function GetIntegerField
struct Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics
{
	struct E3DSJsonObject_eventGetIntegerField_Parms
	{
		FString FieldName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as an Integer. Ensures that the field is present and is of type Json number. */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as an Integer. Ensures that the field is present and is of type Json number." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetIntegerField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetIntegerField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "GetIntegerField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics::E3DSJsonObject_eventGetIntegerField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics::E3DSJsonObject_eventGetIntegerField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execGetIntegerField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIntegerField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function GetIntegerField

// Begin Class UE3DSJsonObject Function GetNumberArrayField
struct Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics
{
	struct E3DSJsonObject_eventGetNumberArrayField_Parms
	{
		FString FieldName;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a Number Array. Use it only if you're sure that array is uniform!\n     * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a Number Array. Use it only if you're sure that array is uniform!\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetNumberArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetNumberArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "GetNumberArrayField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::E3DSJsonObject_eventGetNumberArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::E3DSJsonObject_eventGetNumberArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execGetNumberArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetNumberArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function GetNumberArrayField

// Begin Class UE3DSJsonObject Function GetNumberField
struct Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics
{
	struct E3DSJsonObject_eventGetNumberField_Parms
	{
		FString FieldName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a number. Ensures that the field is present and is of type Json number.\n     * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a number. Ensures that the field is present and is of type Json number.\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetNumberField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetNumberField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "GetNumberField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics::E3DSJsonObject_eventGetNumberField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics::E3DSJsonObject_eventGetNumberField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_GetNumberField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_GetNumberField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execGetNumberField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetNumberField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function GetNumberField

// Begin Class UE3DSJsonObject Function GetObjectArrayField
struct Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics
{
	struct E3DSJsonObject_eventGetObjectArrayField_Parms
	{
		FString FieldName;
		TArray<UE3DSJsonObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as an Object Array. Use it only if you're sure that array is uniform! */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as an Object Array. Use it only if you're sure that array is uniform!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetObjectArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UE3DSJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetObjectArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "GetObjectArrayField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::E3DSJsonObject_eventGetObjectArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::E3DSJsonObject_eventGetObjectArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execGetObjectArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UE3DSJsonObject*>*)Z_Param__Result=P_THIS->GetObjectArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function GetObjectArrayField

// Begin Class UE3DSJsonObject Function GetObjectField
struct Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics
{
	struct E3DSJsonObject_eventGetObjectField_Parms
	{
		FString FieldName;
		UE3DSJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a Json object. */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a Json object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetObjectField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetObjectField_Parms, ReturnValue), Z_Construct_UClass_UE3DSJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "GetObjectField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics::E3DSJsonObject_eventGetObjectField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics::E3DSJsonObject_eventGetObjectField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_GetObjectField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_GetObjectField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execGetObjectField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UE3DSJsonObject**)Z_Param__Result=P_THIS->GetObjectField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function GetObjectField

// Begin Class UE3DSJsonObject Function GetStringArrayField
struct Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics
{
	struct E3DSJsonObject_eventGetStringArrayField_Parms
	{
		FString FieldName;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a String Array. Use it only if you're sure that array is uniform! */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a String Array. Use it only if you're sure that array is uniform!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetStringArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetStringArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "GetStringArrayField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::E3DSJsonObject_eventGetStringArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::E3DSJsonObject_eventGetStringArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execGetStringArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringArrayField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function GetStringArrayField

// Begin Class UE3DSJsonObject Function GetStringField
struct Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics
{
	struct E3DSJsonObject_eventGetStringField_Parms
	{
		FString FieldName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the field named FieldName as a string. */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the field named FieldName as a string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetStringField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventGetStringField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "GetStringField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics::E3DSJsonObject_eventGetStringField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics::E3DSJsonObject_eventGetStringField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_GetStringField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_GetStringField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execGetStringField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function GetStringField

// Begin Class UE3DSJsonObject Function HasField
struct Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics
{
	struct E3DSJsonObject_eventHasField_Parms
	{
		FString FieldName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks to see if the FieldName exists in the object */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks to see if the FieldName exists in the object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventHasField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
void Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((E3DSJsonObject_eventHasField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(E3DSJsonObject_eventHasField_Parms), &Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "HasField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::E3DSJsonObject_eventHasField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::E3DSJsonObject_eventHasField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_HasField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_HasField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execHasField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function HasField

// Begin Class UE3DSJsonObject Function MergeJsonObject
struct Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics
{
	struct E3DSJsonObject_eventMergeJsonObject_Parms
	{
		UE3DSJsonObject* InJsonObject;
		bool Overwrite;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds all of the fields from one json object to this one */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds all of the fields from one json object to this one" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InJsonObject;
	static void NewProp_Overwrite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Overwrite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::NewProp_InJsonObject = { "InJsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventMergeJsonObject_Parms, InJsonObject), Z_Construct_UClass_UE3DSJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::NewProp_Overwrite_SetBit(void* Obj)
{
	((E3DSJsonObject_eventMergeJsonObject_Parms*)Obj)->Overwrite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::NewProp_Overwrite = { "Overwrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(E3DSJsonObject_eventMergeJsonObject_Parms), &Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::NewProp_Overwrite_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::NewProp_InJsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::NewProp_Overwrite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "MergeJsonObject", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::E3DSJsonObject_eventMergeJsonObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::E3DSJsonObject_eventMergeJsonObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execMergeJsonObject)
{
	P_GET_OBJECT(UE3DSJsonObject,Z_Param_InJsonObject);
	P_GET_UBOOL(Z_Param_Overwrite);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MergeJsonObject(Z_Param_InJsonObject,Z_Param_Overwrite);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function MergeJsonObject

// Begin Class UE3DSJsonObject Function RemoveField
struct Z_Construct_UFunction_UE3DSJsonObject_RemoveField_Statics
{
	struct E3DSJsonObject_eventRemoveField_Parms
	{
		FString FieldName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove field named FieldName */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove field named FieldName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_RemoveField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventRemoveField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_RemoveField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_RemoveField_Statics::NewProp_FieldName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_RemoveField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_RemoveField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "RemoveField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_RemoveField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_RemoveField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_RemoveField_Statics::E3DSJsonObject_eventRemoveField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_RemoveField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_RemoveField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_RemoveField_Statics::E3DSJsonObject_eventRemoveField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_RemoveField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_RemoveField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execRemoveField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveField(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function RemoveField

// Begin Class UE3DSJsonObject Function Reset
struct Z_Construct_UFunction_UE3DSJsonObject_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset all internal data */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset all internal data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_Reset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UE3DSJsonObject_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function Reset

// Begin Class UE3DSJsonObject Function SetArrayField
struct Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics
{
	struct E3DSJsonObject_eventSetArrayField_Parms
	{
		FString FieldName;
		TArray<UE3DSJsonValue*> InArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of Json Array */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of Json Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UE3DSJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetArrayField_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArray_MetaData), NewProp_InArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::NewProp_InArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::NewProp_InArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "SetArrayField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::E3DSJsonObject_eventSetArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::E3DSJsonObject_eventSetArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_SetArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_SetArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execSetArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(UE3DSJsonValue*,Z_Param_Out_InArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetArrayField(Z_Param_FieldName,Z_Param_Out_InArray);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function SetArrayField

// Begin Class UE3DSJsonObject Function SetBoolArrayField
struct Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics
{
	struct E3DSJsonObject_eventSetBoolArrayField_Parms
	{
		FString FieldName;
		TArray<bool> BoolArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of Bool Array */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of Bool Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetBoolArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_Inner = { "BoolArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray = { "BoolArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetBoolArrayField_Parms, BoolArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolArray_MetaData), NewProp_BoolArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::NewProp_BoolArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "SetBoolArrayField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::E3DSJsonObject_eventSetBoolArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::E3DSJsonObject_eventSetBoolArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execSetBoolArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(bool,Z_Param_Out_BoolArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoolArrayField(Z_Param_FieldName,Z_Param_Out_BoolArray);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function SetBoolArrayField

// Begin Class UE3DSJsonObject Function SetBoolField
struct Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics
{
	struct E3DSJsonObject_eventSetBoolField_Parms
	{
		FString FieldName;
		bool InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set a boolean field named FieldName and value of InValue */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a boolean field named FieldName and value of InValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetBoolField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
void Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((E3DSJsonObject_eventSetBoolField_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(E3DSJsonObject_eventSetBoolField_Parms), &Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "SetBoolField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::E3DSJsonObject_eventSetBoolField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::E3DSJsonObject_eventSetBoolField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_SetBoolField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_SetBoolField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execSetBoolField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoolField(Z_Param_FieldName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function SetBoolField

// Begin Class UE3DSJsonObject Function SetField
struct Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics
{
	struct E3DSJsonObject_eventSetField_Parms
	{
		FString FieldName;
		UE3DSJsonValue* JsonValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a field named FieldName with a Value */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a field named FieldName with a Value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetField_Parms, JsonValue), Z_Construct_UClass_UE3DSJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics::NewProp_JsonValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "SetField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics::E3DSJsonObject_eventSetField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics::E3DSJsonObject_eventSetField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_SetField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_SetField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execSetField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_OBJECT(UE3DSJsonValue,Z_Param_JsonValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetField(Z_Param_FieldName,Z_Param_JsonValue);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function SetField

// Begin Class UE3DSJsonObject Function SetFieldNull
struct Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull_Statics
{
	struct E3DSJsonObject_eventSetFieldNull_Parms
	{
		FString FieldName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a field named FieldName with a null value */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a field named FieldName with a null value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetFieldNull_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull_Statics::NewProp_FieldName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "SetFieldNull", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull_Statics::E3DSJsonObject_eventSetFieldNull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull_Statics::E3DSJsonObject_eventSetFieldNull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execSetFieldNull)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFieldNull(Z_Param_FieldName);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function SetFieldNull

// Begin Class UE3DSJsonObject Function SetNumberArrayField
struct Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics
{
	struct E3DSJsonObject_eventSetNumberArrayField_Parms
	{
		FString FieldName;
		TArray<float> NumberArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of Number Array\n     * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of Number Array\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumberArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NumberArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetNumberArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_Inner = { "NumberArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray = { "NumberArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetNumberArrayField_Parms, NumberArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberArray_MetaData), NewProp_NumberArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::NewProp_NumberArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "SetNumberArrayField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::E3DSJsonObject_eventSetNumberArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::E3DSJsonObject_eventSetNumberArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execSetNumberArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(float,Z_Param_Out_NumberArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumberArrayField(Z_Param_FieldName,Z_Param_Out_NumberArray);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function SetNumberArrayField

// Begin Class UE3DSJsonObject Function SetNumberField
struct Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics
{
	struct E3DSJsonObject_eventSetNumberField_Parms
	{
		FString FieldName;
		float Number;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a field named FieldName with Number as value\n     * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a field named FieldName with Number as value\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Number;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetNumberField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetNumberField_Parms, Number), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics::NewProp_Number,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "SetNumberField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics::E3DSJsonObject_eventSetNumberField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics::E3DSJsonObject_eventSetNumberField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_SetNumberField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_SetNumberField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execSetNumberField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumberField(Z_Param_FieldName,Z_Param_Number);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function SetNumberField

// Begin Class UE3DSJsonObject Function SetObjectArrayField
struct Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics
{
	struct E3DSJsonObject_eventSetObjectArrayField_Parms
	{
		FString FieldName;
		TArray<UE3DSJsonObject*> ObjectArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of Ob Array */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of Ob Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetObjectArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_Inner = { "ObjectArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UE3DSJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray = { "ObjectArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetObjectArrayField_Parms, ObjectArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectArray_MetaData), NewProp_ObjectArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::NewProp_ObjectArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "SetObjectArrayField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::E3DSJsonObject_eventSetObjectArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::E3DSJsonObject_eventSetObjectArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execSetObjectArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(UE3DSJsonObject*,Z_Param_Out_ObjectArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetObjectArrayField(Z_Param_FieldName,Z_Param_Out_ObjectArray);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function SetObjectArrayField

// Begin Class UE3DSJsonObject Function SetObjectField
struct Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics
{
	struct E3DSJsonObject_eventSetObjectField_Parms
	{
		FString FieldName;
		UE3DSJsonObject* JsonObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of JsonObject */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of JsonObject" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetObjectField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetObjectField_Parms, JsonObject), Z_Construct_UClass_UE3DSJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics::NewProp_JsonObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "SetObjectField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics::E3DSJsonObject_eventSetObjectField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics::E3DSJsonObject_eventSetObjectField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_SetObjectField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_SetObjectField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execSetObjectField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_OBJECT(UE3DSJsonObject,Z_Param_JsonObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetObjectField(Z_Param_FieldName,Z_Param_JsonObject);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function SetObjectField

// Begin Class UE3DSJsonObject Function SetStringArrayField
struct Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics
{
	struct E3DSJsonObject_eventSetStringArrayField_Parms
	{
		FString FieldName;
		TArray<FString> StringArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an ObjectField named FieldName and value of String Array */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an ObjectField named FieldName and value of String Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetStringArrayField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetStringArrayField_Parms, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringArray_MetaData), NewProp_StringArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::NewProp_StringArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::NewProp_StringArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "SetStringArrayField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::E3DSJsonObject_eventSetStringArrayField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::E3DSJsonObject_eventSetStringArrayField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execSetStringArrayField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStringArrayField(Z_Param_FieldName,Z_Param_Out_StringArray);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function SetStringArrayField

// Begin Class UE3DSJsonObject Function SetStringField
struct Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics
{
	struct E3DSJsonObject_eventSetStringField_Parms
	{
		FString FieldName;
		FString StringValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a field named FieldName with value of StringValue */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a field named FieldName with value of StringValue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetStringField_Parms, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldName_MetaData), NewProp_FieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonObject_eventSetStringField_Parms, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics::NewProp_FieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics::NewProp_StringValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonObject, nullptr, "SetStringField", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics::E3DSJsonObject_eventSetStringField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics::E3DSJsonObject_eventSetStringField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonObject_SetStringField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonObject_SetStringField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonObject::execSetStringField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
	P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStringField(Z_Param_FieldName,Z_Param_StringValue);
	P_NATIVE_END;
}
// End Class UE3DSJsonObject Function SetStringField

// Begin Class UE3DSJsonObject
void UE3DSJsonObject::StaticRegisterNativesUE3DSJsonObject()
{
	UClass* Class = UE3DSJsonObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConstructJsonObject", &UE3DSJsonObject::execConstructJsonObject },
		{ "DecodeJson", &UE3DSJsonObject::execDecodeJson },
		{ "EncodeJson", &UE3DSJsonObject::execEncodeJson },
		{ "GetArrayField", &UE3DSJsonObject::execGetArrayField },
		{ "GetBoolArrayField", &UE3DSJsonObject::execGetBoolArrayField },
		{ "GetBoolField", &UE3DSJsonObject::execGetBoolField },
		{ "GetField", &UE3DSJsonObject::execGetField },
		{ "GetFieldNames", &UE3DSJsonObject::execGetFieldNames },
		{ "GetIntegerField", &UE3DSJsonObject::execGetIntegerField },
		{ "GetNumberArrayField", &UE3DSJsonObject::execGetNumberArrayField },
		{ "GetNumberField", &UE3DSJsonObject::execGetNumberField },
		{ "GetObjectArrayField", &UE3DSJsonObject::execGetObjectArrayField },
		{ "GetObjectField", &UE3DSJsonObject::execGetObjectField },
		{ "GetStringArrayField", &UE3DSJsonObject::execGetStringArrayField },
		{ "GetStringField", &UE3DSJsonObject::execGetStringField },
		{ "HasField", &UE3DSJsonObject::execHasField },
		{ "MergeJsonObject", &UE3DSJsonObject::execMergeJsonObject },
		{ "RemoveField", &UE3DSJsonObject::execRemoveField },
		{ "Reset", &UE3DSJsonObject::execReset },
		{ "SetArrayField", &UE3DSJsonObject::execSetArrayField },
		{ "SetBoolArrayField", &UE3DSJsonObject::execSetBoolArrayField },
		{ "SetBoolField", &UE3DSJsonObject::execSetBoolField },
		{ "SetField", &UE3DSJsonObject::execSetField },
		{ "SetFieldNull", &UE3DSJsonObject::execSetFieldNull },
		{ "SetNumberArrayField", &UE3DSJsonObject::execSetNumberArrayField },
		{ "SetNumberField", &UE3DSJsonObject::execSetNumberField },
		{ "SetObjectArrayField", &UE3DSJsonObject::execSetObjectArrayField },
		{ "SetObjectField", &UE3DSJsonObject::execSetObjectField },
		{ "SetStringArrayField", &UE3DSJsonObject::execSetStringArrayField },
		{ "SetStringField", &UE3DSJsonObject::execSetStringField },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UE3DSJsonObject);
UClass* Z_Construct_UClass_UE3DSJsonObject_NoRegister()
{
	return UE3DSJsonObject::StaticClass();
}
struct Z_Construct_UClass_UE3DSJsonObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "JSON/E3DSJsonObject.h" },
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UE3DSJsonObject_ConstructJsonObject, "ConstructJsonObject" }, // 3998296550
		{ &Z_Construct_UFunction_UE3DSJsonObject_DecodeJson, "DecodeJson" }, // 327534874
		{ &Z_Construct_UFunction_UE3DSJsonObject_EncodeJson, "EncodeJson" }, // 4073540489
		{ &Z_Construct_UFunction_UE3DSJsonObject_GetArrayField, "GetArrayField" }, // 4271559062
		{ &Z_Construct_UFunction_UE3DSJsonObject_GetBoolArrayField, "GetBoolArrayField" }, // 3861243008
		{ &Z_Construct_UFunction_UE3DSJsonObject_GetBoolField, "GetBoolField" }, // 2374309256
		{ &Z_Construct_UFunction_UE3DSJsonObject_GetField, "GetField" }, // 3113621102
		{ &Z_Construct_UFunction_UE3DSJsonObject_GetFieldNames, "GetFieldNames" }, // 3834244081
		{ &Z_Construct_UFunction_UE3DSJsonObject_GetIntegerField, "GetIntegerField" }, // 2543475167
		{ &Z_Construct_UFunction_UE3DSJsonObject_GetNumberArrayField, "GetNumberArrayField" }, // 4098367350
		{ &Z_Construct_UFunction_UE3DSJsonObject_GetNumberField, "GetNumberField" }, // 2689859825
		{ &Z_Construct_UFunction_UE3DSJsonObject_GetObjectArrayField, "GetObjectArrayField" }, // 4002359705
		{ &Z_Construct_UFunction_UE3DSJsonObject_GetObjectField, "GetObjectField" }, // 4209773292
		{ &Z_Construct_UFunction_UE3DSJsonObject_GetStringArrayField, "GetStringArrayField" }, // 479141484
		{ &Z_Construct_UFunction_UE3DSJsonObject_GetStringField, "GetStringField" }, // 1046837197
		{ &Z_Construct_UFunction_UE3DSJsonObject_HasField, "HasField" }, // 2584787609
		{ &Z_Construct_UFunction_UE3DSJsonObject_MergeJsonObject, "MergeJsonObject" }, // 513950963
		{ &Z_Construct_UFunction_UE3DSJsonObject_RemoveField, "RemoveField" }, // 2689089322
		{ &Z_Construct_UFunction_UE3DSJsonObject_Reset, "Reset" }, // 468433903
		{ &Z_Construct_UFunction_UE3DSJsonObject_SetArrayField, "SetArrayField" }, // 2980284376
		{ &Z_Construct_UFunction_UE3DSJsonObject_SetBoolArrayField, "SetBoolArrayField" }, // 3804005602
		{ &Z_Construct_UFunction_UE3DSJsonObject_SetBoolField, "SetBoolField" }, // 2241343336
		{ &Z_Construct_UFunction_UE3DSJsonObject_SetField, "SetField" }, // 3603369459
		{ &Z_Construct_UFunction_UE3DSJsonObject_SetFieldNull, "SetFieldNull" }, // 2189594360
		{ &Z_Construct_UFunction_UE3DSJsonObject_SetNumberArrayField, "SetNumberArrayField" }, // 3846605644
		{ &Z_Construct_UFunction_UE3DSJsonObject_SetNumberField, "SetNumberField" }, // 2299774659
		{ &Z_Construct_UFunction_UE3DSJsonObject_SetObjectArrayField, "SetObjectArrayField" }, // 1092370927
		{ &Z_Construct_UFunction_UE3DSJsonObject_SetObjectField, "SetObjectField" }, // 2214349848
		{ &Z_Construct_UFunction_UE3DSJsonObject_SetStringArrayField, "SetStringArrayField" }, // 1531681379
		{ &Z_Construct_UFunction_UE3DSJsonObject_SetStringField, "SetStringField" }, // 1831389430
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UE3DSJsonObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UE3DSJsonObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_E3DSFeatures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UE3DSJsonObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UE3DSJsonObject_Statics::ClassParams = {
	&UE3DSJsonObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3DSJsonObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UE3DSJsonObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UE3DSJsonObject()
{
	if (!Z_Registration_Info_UClass_UE3DSJsonObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UE3DSJsonObject.OuterSingleton, Z_Construct_UClass_UE3DSJsonObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UE3DSJsonObject.OuterSingleton;
}
template<> E3DSFEATURES_API UClass* StaticClass<UE3DSJsonObject>()
{
	return UE3DSJsonObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UE3DSJsonObject);
UE3DSJsonObject::~UE3DSJsonObject() {}
// End Class UE3DSJsonObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UE3DSJsonObject, UE3DSJsonObject::StaticClass, TEXT("UE3DSJsonObject"), &Z_Registration_Info_UClass_UE3DSJsonObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UE3DSJsonObject), 563283539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonObject_h_542293257(TEXT("/Script/E3DSFeatures"),
	Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
