// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "E3DSFeatures/Public/JSON/E3DSJsonValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE3DSJsonValue() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DSJsonObject_NoRegister();
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DSJsonValue();
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DSJsonValue_NoRegister();
E3DSFEATURES_API UEnum* Z_Construct_UEnum_E3DSFeatures_EPFJson();
UPackage* Z_Construct_UPackage__Script_E3DSFeatures();
// End Cross Module References

// Begin Enum EPFJson
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPFJson;
static UEnum* EPFJson_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPFJson.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPFJson.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_E3DSFeatures_EPFJson, (UObject*)Z_Construct_UPackage__Script_E3DSFeatures(), TEXT("EPFJson"));
	}
	return Z_Registration_Info_UEnum_EPFJson.OuterSingleton;
}
template<> E3DSFEATURES_API UEnum* StaticEnum<EPFJson::Type>()
{
	return EPFJson_StaticEnum();
}
struct Z_Construct_UEnum_E3DSFeatures_EPFJson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Array.Name", "EPFJson::Array" },
		{ "BlueprintType", "true" },
		{ "Boolean.Name", "EPFJson::Boolean" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents all the types a Json Value can be.\n */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
		{ "None.Name", "EPFJson::None" },
		{ "Null.Name", "EPFJson::Null" },
		{ "Number.Name", "EPFJson::Number" },
		{ "Object.Name", "EPFJson::Object" },
		{ "String.Name", "EPFJson::String" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents all the types a Json Value can be." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPFJson::None", (int64)EPFJson::None },
		{ "EPFJson::Null", (int64)EPFJson::Null },
		{ "EPFJson::String", (int64)EPFJson::String },
		{ "EPFJson::Number", (int64)EPFJson::Number },
		{ "EPFJson::Boolean", (int64)EPFJson::Boolean },
		{ "EPFJson::Array", (int64)EPFJson::Array },
		{ "EPFJson::Object", (int64)EPFJson::Object },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_E3DSFeatures_EPFJson_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_E3DSFeatures,
	nullptr,
	"EPFJson",
	"EPFJson::Type",
	Z_Construct_UEnum_E3DSFeatures_EPFJson_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_E3DSFeatures_EPFJson_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_E3DSFeatures_EPFJson_Statics::Enum_MetaDataParams), Z_Construct_UEnum_E3DSFeatures_EPFJson_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_E3DSFeatures_EPFJson()
{
	if (!Z_Registration_Info_UEnum_EPFJson.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPFJson.InnerSingleton, Z_Construct_UEnum_E3DSFeatures_EPFJson_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPFJson.InnerSingleton;
}
// End Enum EPFJson

// Begin Class UE3DSJsonValue Function AsArray
struct Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics
{
	struct E3DSJsonValue_eventAsArray_Parms
	{
		TArray<UE3DSJsonValue*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as an array, throwing an error if this is not an Json Array */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as an array, throwing an error if this is not an Json Array" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UE3DSJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonValue, nullptr, "AsArray", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics::E3DSJsonValue_eventAsArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics::E3DSJsonValue_eventAsArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonValue_AsArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonValue_AsArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonValue::execAsArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UE3DSJsonValue*>*)Z_Param__Result=P_THIS->AsArray();
	P_NATIVE_END;
}
// End Class UE3DSJsonValue Function AsArray

// Begin Class UE3DSJsonValue Function AsBool
struct Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics
{
	struct E3DSJsonValue_eventAsBool_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as a boolean, throwing an error if this is not an Json Bool */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as a boolean, throwing an error if this is not an Json Bool" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((E3DSJsonValue_eventAsBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(E3DSJsonValue_eventAsBool_Parms), &Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonValue, nullptr, "AsBool", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics::E3DSJsonValue_eventAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics::E3DSJsonValue_eventAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonValue_AsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonValue_AsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonValue::execAsBool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AsBool();
	P_NATIVE_END;
}
// End Class UE3DSJsonValue Function AsBool

// Begin Class UE3DSJsonValue Function AsNumber
struct Z_Construct_UFunction_UE3DSJsonValue_AsNumber_Statics
{
	struct E3DSJsonValue_eventAsNumber_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as a double, throwing an error if this is not an Json Number\n     * Attn.!! float used instead of double to make the function blueprintable! */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as a double, throwing an error if this is not an Json Number\nAttn.!! float used instead of double to make the function blueprintable!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UE3DSJsonValue_AsNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventAsNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonValue_AsNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_AsNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonValue_AsNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonValue, nullptr, "AsNumber", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonValue_AsNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonValue_AsNumber_Statics::E3DSJsonValue_eventAsNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonValue_AsNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonValue_AsNumber_Statics::E3DSJsonValue_eventAsNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonValue_AsNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonValue_AsNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonValue::execAsNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->AsNumber();
	P_NATIVE_END;
}
// End Class UE3DSJsonValue Function AsNumber

// Begin Class UE3DSJsonValue Function AsObject
struct Z_Construct_UFunction_UE3DSJsonValue_AsObject_Statics
{
	struct E3DSJsonValue_eventAsObject_Parms
	{
		UE3DSJsonObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as an object, throwing an error if this is not an Json Object */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as an object, throwing an error if this is not an Json Object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonValue_AsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventAsObject_Parms, ReturnValue), Z_Construct_UClass_UE3DSJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonValue_AsObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_AsObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonValue_AsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonValue, nullptr, "AsObject", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonValue_AsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonValue_AsObject_Statics::E3DSJsonValue_eventAsObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonValue_AsObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonValue_AsObject_Statics::E3DSJsonValue_eventAsObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonValue_AsObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonValue_AsObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonValue::execAsObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UE3DSJsonObject**)Z_Param__Result=P_THIS->AsObject();
	P_NATIVE_END;
}
// End Class UE3DSJsonValue Function AsObject

// Begin Class UE3DSJsonValue Function AsString
struct Z_Construct_UFunction_UE3DSJsonValue_AsString_Statics
{
	struct E3DSJsonValue_eventAsString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns this value as a number, throwing an error if this is not an Json String */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this value as a number, throwing an error if this is not an Json String" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonValue_AsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonValue_AsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_AsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonValue_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonValue, nullptr, "AsString", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonValue_AsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonValue_AsString_Statics::E3DSJsonValue_eventAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_AsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonValue_AsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonValue_AsString_Statics::E3DSJsonValue_eventAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonValue_AsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonValue_AsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonValue::execAsString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->AsString();
	P_NATIVE_END;
}
// End Class UE3DSJsonValue Function AsString

// Begin Class UE3DSJsonValue Function ConstructJsonValueArray
struct Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics
{
	struct E3DSJsonValue_eventConstructJsonValueArray_Parms
	{
		UObject* WorldContextObject;
		TArray<UE3DSJsonValue*> InArray;
		UE3DSJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Array value */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Array Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Array value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventConstructJsonValueArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UE3DSJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventConstructJsonValueArray_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InArray_MetaData), NewProp_InArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventConstructJsonValueArray_Parms, ReturnValue), Z_Construct_UClass_UE3DSJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::NewProp_InArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonValue, nullptr, "ConstructJsonValueArray", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::E3DSJsonValue_eventConstructJsonValueArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::E3DSJsonValue_eventConstructJsonValueArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonValue::execConstructJsonValueArray)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(UE3DSJsonValue*,Z_Param_Out_InArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UE3DSJsonValue**)Z_Param__Result=UE3DSJsonValue::ConstructJsonValueArray(Z_Param_WorldContextObject,Z_Param_Out_InArray);
	P_NATIVE_END;
}
// End Class UE3DSJsonValue Function ConstructJsonValueArray

// Begin Class UE3DSJsonValue Function ConstructJsonValueBool
struct Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics
{
	struct E3DSJsonValue_eventConstructJsonValueBool_Parms
	{
		UObject* WorldContextObject;
		bool InValue;
		UE3DSJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Bool value */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Bool Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Bool value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventConstructJsonValueBool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((E3DSJsonValue_eventConstructJsonValueBool_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(E3DSJsonValue_eventConstructJsonValueBool_Parms), &Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventConstructJsonValueBool_Parms, ReturnValue), Z_Construct_UClass_UE3DSJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonValue, nullptr, "ConstructJsonValueBool", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::E3DSJsonValue_eventConstructJsonValueBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::E3DSJsonValue_eventConstructJsonValueBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonValue::execConstructJsonValueBool)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UE3DSJsonValue**)Z_Param__Result=UE3DSJsonValue::ConstructJsonValueBool(Z_Param_WorldContextObject,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UE3DSJsonValue Function ConstructJsonValueBool

// Begin Class UE3DSJsonValue Function ConstructJsonValueNumber
struct Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics
{
	struct E3DSJsonValue_eventConstructJsonValueNumber_Parms
	{
		UObject* WorldContextObject;
		float Number;
		UE3DSJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Number value\n    * float used instead of double to make the function Blueprintable! */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Number Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Number value\nfloat used instead of double to make the function Blueprintable!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Number;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventConstructJsonValueNumber_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventConstructJsonValueNumber_Parms, Number), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventConstructJsonValueNumber_Parms, ReturnValue), Z_Construct_UClass_UE3DSJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::NewProp_Number,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonValue, nullptr, "ConstructJsonValueNumber", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::E3DSJsonValue_eventConstructJsonValueNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::E3DSJsonValue_eventConstructJsonValueNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonValue::execConstructJsonValueNumber)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UE3DSJsonValue**)Z_Param__Result=UE3DSJsonValue::ConstructJsonValueNumber(Z_Param_WorldContextObject,Z_Param_Number);
	P_NATIVE_END;
}
// End Class UE3DSJsonValue Function ConstructJsonValueNumber

// Begin Class UE3DSJsonValue Function ConstructJsonValueObject
struct Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics
{
	struct E3DSJsonValue_eventConstructJsonValueObject_Parms
	{
		UObject* WorldContextObject;
		UE3DSJsonObject* JsonObject;
		UE3DSJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json Object value */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json Object Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json Object value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventConstructJsonValueObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventConstructJsonValueObject_Parms, JsonObject), Z_Construct_UClass_UE3DSJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventConstructJsonValueObject_Parms, ReturnValue), Z_Construct_UClass_UE3DSJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::NewProp_JsonObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonValue, nullptr, "ConstructJsonValueObject", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::E3DSJsonValue_eventConstructJsonValueObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::E3DSJsonValue_eventConstructJsonValueObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonValue::execConstructJsonValueObject)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UE3DSJsonObject,Z_Param_JsonObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UE3DSJsonValue**)Z_Param__Result=UE3DSJsonValue::ConstructJsonValueObject(Z_Param_WorldContextObject,Z_Param_JsonObject);
	P_NATIVE_END;
}
// End Class UE3DSJsonValue Function ConstructJsonValueObject

// Begin Class UE3DSJsonValue Function ConstructJsonValueString
struct Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics
{
	struct E3DSJsonValue_eventConstructJsonValueString_Parms
	{
		UObject* WorldContextObject;
		FString StringValue;
		UE3DSJsonValue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create new Json String value */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Construct Json String Value" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create new Json String value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventConstructJsonValueString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventConstructJsonValueString_Parms, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventConstructJsonValueString_Parms, ReturnValue), Z_Construct_UClass_UE3DSJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::NewProp_StringValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonValue, nullptr, "ConstructJsonValueString", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::E3DSJsonValue_eventConstructJsonValueString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::E3DSJsonValue_eventConstructJsonValueString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonValue::execConstructJsonValueString)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UE3DSJsonValue**)Z_Param__Result=UE3DSJsonValue::ConstructJsonValueString(Z_Param_WorldContextObject,Z_Param_StringValue);
	P_NATIVE_END;
}
// End Class UE3DSJsonValue Function ConstructJsonValueString

// Begin Class UE3DSJsonValue Function GetType
struct Z_Construct_UFunction_UE3DSJsonValue_GetType_Statics
{
	struct E3DSJsonValue_eventGetType_Parms
	{
		TEnumAsByte<EPFJson::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get type of Json value (Enum) */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get type of Json value (Enum)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UE3DSJsonValue_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_E3DSFeatures_EPFJson, METADATA_PARAMS(0, nullptr) }; // 3298735255
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonValue_GetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_GetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_GetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonValue_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonValue, nullptr, "GetType", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonValue_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_GetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonValue_GetType_Statics::E3DSJsonValue_eventGetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonValue_GetType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonValue_GetType_Statics::E3DSJsonValue_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonValue_GetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonValue_GetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonValue::execGetType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EPFJson::Type>*)Z_Param__Result=P_THIS->GetType();
	P_NATIVE_END;
}
// End Class UE3DSJsonValue Function GetType

// Begin Class UE3DSJsonValue Function GetTypeString
struct Z_Construct_UFunction_UE3DSJsonValue_GetTypeString_Statics
{
	struct E3DSJsonValue_eventGetTypeString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get type of Json value (String) */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get type of Json value (String)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DSJsonValue_GetTypeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DSJsonValue_eventGetTypeString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonValue_GetTypeString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_GetTypeString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_GetTypeString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonValue_GetTypeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonValue, nullptr, "GetTypeString", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonValue_GetTypeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_GetTypeString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonValue_GetTypeString_Statics::E3DSJsonValue_eventGetTypeString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_GetTypeString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonValue_GetTypeString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonValue_GetTypeString_Statics::E3DSJsonValue_eventGetTypeString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonValue_GetTypeString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonValue_GetTypeString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonValue::execGetTypeString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetTypeString();
	P_NATIVE_END;
}
// End Class UE3DSJsonValue Function GetTypeString

// Begin Class UE3DSJsonValue Function IsNull
struct Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics
{
	struct E3DSJsonValue_eventIsNull_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayFab | Json" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if this value is a 'null' */" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this value is a 'null'" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((E3DSJsonValue_eventIsNull_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(E3DSJsonValue_eventIsNull_Parms), &Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DSJsonValue, nullptr, "IsNull", nullptr, nullptr, Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics::E3DSJsonValue_eventIsNull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics::E3DSJsonValue_eventIsNull_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DSJsonValue_IsNull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DSJsonValue_IsNull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DSJsonValue::execIsNull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsNull();
	P_NATIVE_END;
}
// End Class UE3DSJsonValue Function IsNull

// Begin Class UE3DSJsonValue
void UE3DSJsonValue::StaticRegisterNativesUE3DSJsonValue()
{
	UClass* Class = UE3DSJsonValue::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsArray", &UE3DSJsonValue::execAsArray },
		{ "AsBool", &UE3DSJsonValue::execAsBool },
		{ "AsNumber", &UE3DSJsonValue::execAsNumber },
		{ "AsObject", &UE3DSJsonValue::execAsObject },
		{ "AsString", &UE3DSJsonValue::execAsString },
		{ "ConstructJsonValueArray", &UE3DSJsonValue::execConstructJsonValueArray },
		{ "ConstructJsonValueBool", &UE3DSJsonValue::execConstructJsonValueBool },
		{ "ConstructJsonValueNumber", &UE3DSJsonValue::execConstructJsonValueNumber },
		{ "ConstructJsonValueObject", &UE3DSJsonValue::execConstructJsonValueObject },
		{ "ConstructJsonValueString", &UE3DSJsonValue::execConstructJsonValueString },
		{ "GetType", &UE3DSJsonValue::execGetType },
		{ "GetTypeString", &UE3DSJsonValue::execGetTypeString },
		{ "IsNull", &UE3DSJsonValue::execIsNull },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UE3DSJsonValue);
UClass* Z_Construct_UClass_UE3DSJsonValue_NoRegister()
{
	return UE3DSJsonValue::StaticClass();
}
struct Z_Construct_UClass_UE3DSJsonValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprintable FJsonValue wrapper\n */" },
#endif
		{ "IncludePath", "JSON/E3DSJsonValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/JSON/E3DSJsonValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprintable FJsonValue wrapper" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UE3DSJsonValue_AsArray, "AsArray" }, // 4218534219
		{ &Z_Construct_UFunction_UE3DSJsonValue_AsBool, "AsBool" }, // 2110458582
		{ &Z_Construct_UFunction_UE3DSJsonValue_AsNumber, "AsNumber" }, // 1185782137
		{ &Z_Construct_UFunction_UE3DSJsonValue_AsObject, "AsObject" }, // 1442932435
		{ &Z_Construct_UFunction_UE3DSJsonValue_AsString, "AsString" }, // 2919296654
		{ &Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueArray, "ConstructJsonValueArray" }, // 2479919774
		{ &Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueBool, "ConstructJsonValueBool" }, // 2937463794
		{ &Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueNumber, "ConstructJsonValueNumber" }, // 1200845802
		{ &Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueObject, "ConstructJsonValueObject" }, // 616820682
		{ &Z_Construct_UFunction_UE3DSJsonValue_ConstructJsonValueString, "ConstructJsonValueString" }, // 3889703414
		{ &Z_Construct_UFunction_UE3DSJsonValue_GetType, "GetType" }, // 1131817978
		{ &Z_Construct_UFunction_UE3DSJsonValue_GetTypeString, "GetTypeString" }, // 355023107
		{ &Z_Construct_UFunction_UE3DSJsonValue_IsNull, "IsNull" }, // 1121127787
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UE3DSJsonValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UE3DSJsonValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_E3DSFeatures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UE3DSJsonValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UE3DSJsonValue_Statics::ClassParams = {
	&UE3DSJsonValue::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3DSJsonValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UE3DSJsonValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UE3DSJsonValue()
{
	if (!Z_Registration_Info_UClass_UE3DSJsonValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UE3DSJsonValue.OuterSingleton, Z_Construct_UClass_UE3DSJsonValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UE3DSJsonValue.OuterSingleton;
}
template<> E3DSFEATURES_API UClass* StaticClass<UE3DSJsonValue>()
{
	return UE3DSJsonValue::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UE3DSJsonValue);
UE3DSJsonValue::~UE3DSJsonValue() {}
// End Class UE3DSJsonValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPFJson_StaticEnum, TEXT("EPFJson"), &Z_Registration_Info_UEnum_EPFJson, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3298735255U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UE3DSJsonValue, UE3DSJsonValue::StaticClass, TEXT("UE3DSJsonValue"), &Z_Registration_Info_UClass_UE3DSJsonValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UE3DSJsonValue), 1023118891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h_348745184(TEXT("/Script/E3DSFeatures"),
	Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DSJsonValue_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
