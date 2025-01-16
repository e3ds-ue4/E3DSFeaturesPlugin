// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "E3DSFeatures/Public/JSON/E3DS_JsonDecoder.h"
#include "E3DSFeatures/Public/Library/E3DS_Features_Library.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE3DS_JsonDecoder() {}

// Begin Cross Module References
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DS_JsonDecoder();
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DS_JsonDecoder_NoRegister();
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DSJsonObject_NoRegister();
E3DSFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FServerInfo();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_E3DSFeatures();
// End Cross Module References

// Begin Class UE3DS_JsonDecoder Function DecodeGetAllServerList
struct Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics
{
	struct E3DS_JsonDecoder_eventDecodeGetAllServerList_Parms
	{
		UE3DSJsonObject* response;
		TArray<FServerInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | OnlineMultiplayer | Server Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the Requested Server Result response object*/" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DS_JsonDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the Requested Server Result response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_JsonDecoder_eventDecodeGetAllServerList_Parms, response), Z_Construct_UClass_UE3DSJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FServerInfo, METADATA_PARAMS(0, nullptr) }; // 151566770
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_JsonDecoder_eventDecodeGetAllServerList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 151566770
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DS_JsonDecoder, nullptr, "DecodeGetAllServerList", nullptr, nullptr, Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::E3DS_JsonDecoder_eventDecodeGetAllServerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::E3DS_JsonDecoder_eventDecodeGetAllServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DS_JsonDecoder::execDecodeGetAllServerList)
{
	P_GET_OBJECT(UE3DSJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FServerInfo>*)Z_Param__Result=UE3DS_JsonDecoder::DecodeGetAllServerList(Z_Param_response);
	P_NATIVE_END;
}
// End Class UE3DS_JsonDecoder Function DecodeGetAllServerList

// Begin Class UE3DS_JsonDecoder Function DecodeRequestedNewServerInfo
struct Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics
{
	struct E3DS_JsonDecoder_eventDecodeRequestedNewServerInfo_Parms
	{
		UE3DSJsonObject* response;
		FServerInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS | OnlineMultiplayer | Server Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Decode the Requested Server Result response object*/" },
#endif
		{ "ModuleRelativePath", "Public/JSON/E3DS_JsonDecoder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decode the Requested Server Result response object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_response;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_JsonDecoder_eventDecodeRequestedNewServerInfo_Parms, response), Z_Construct_UClass_UE3DSJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_JsonDecoder_eventDecodeRequestedNewServerInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FServerInfo, METADATA_PARAMS(0, nullptr) }; // 151566770
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics::NewProp_response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DS_JsonDecoder, nullptr, "DecodeRequestedNewServerInfo", nullptr, nullptr, Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics::E3DS_JsonDecoder_eventDecodeRequestedNewServerInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics::E3DS_JsonDecoder_eventDecodeRequestedNewServerInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DS_JsonDecoder::execDecodeRequestedNewServerInfo)
{
	P_GET_OBJECT(UE3DSJsonObject,Z_Param_response);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FServerInfo*)Z_Param__Result=UE3DS_JsonDecoder::DecodeRequestedNewServerInfo(Z_Param_response);
	P_NATIVE_END;
}
// End Class UE3DS_JsonDecoder Function DecodeRequestedNewServerInfo

// Begin Class UE3DS_JsonDecoder
void UE3DS_JsonDecoder::StaticRegisterNativesUE3DS_JsonDecoder()
{
	UClass* Class = UE3DS_JsonDecoder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecodeGetAllServerList", &UE3DS_JsonDecoder::execDecodeGetAllServerList },
		{ "DecodeRequestedNewServerInfo", &UE3DS_JsonDecoder::execDecodeRequestedNewServerInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UE3DS_JsonDecoder);
UClass* Z_Construct_UClass_UE3DS_JsonDecoder_NoRegister()
{
	return UE3DS_JsonDecoder::StaticClass();
}
struct Z_Construct_UClass_UE3DS_JsonDecoder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "JSON/E3DS_JsonDecoder.h" },
		{ "ModuleRelativePath", "Public/JSON/E3DS_JsonDecoder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeGetAllServerList, "DecodeGetAllServerList" }, // 2583041291
		{ &Z_Construct_UFunction_UE3DS_JsonDecoder_DecodeRequestedNewServerInfo, "DecodeRequestedNewServerInfo" }, // 222004160
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UE3DS_JsonDecoder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UE3DS_JsonDecoder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_E3DSFeatures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UE3DS_JsonDecoder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UE3DS_JsonDecoder_Statics::ClassParams = {
	&UE3DS_JsonDecoder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3DS_JsonDecoder_Statics::Class_MetaDataParams), Z_Construct_UClass_UE3DS_JsonDecoder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UE3DS_JsonDecoder()
{
	if (!Z_Registration_Info_UClass_UE3DS_JsonDecoder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UE3DS_JsonDecoder.OuterSingleton, Z_Construct_UClass_UE3DS_JsonDecoder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UE3DS_JsonDecoder.OuterSingleton;
}
template<> E3DSFEATURES_API UClass* StaticClass<UE3DS_JsonDecoder>()
{
	return UE3DS_JsonDecoder::StaticClass();
}
UE3DS_JsonDecoder::UE3DS_JsonDecoder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UE3DS_JsonDecoder);
UE3DS_JsonDecoder::~UE3DS_JsonDecoder() {}
// End Class UE3DS_JsonDecoder

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DS_JsonDecoder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UE3DS_JsonDecoder, UE3DS_JsonDecoder::StaticClass, TEXT("UE3DS_JsonDecoder"), &Z_Registration_Info_UClass_UE3DS_JsonDecoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UE3DS_JsonDecoder), 2208726671U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DS_JsonDecoder_h_3089970515(TEXT("/Script/E3DSFeatures"),
	Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DS_JsonDecoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_JSON_E3DS_JsonDecoder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
