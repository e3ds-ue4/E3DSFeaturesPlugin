// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "E3DSFeatures/Public/E3DS_ClientAPI.h"
#include "E3DSFeatures/Public/Library/E3DS_Features_Library.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE3DS_ClientAPI() {}

// Begin Cross Module References
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DS_ClientAPI();
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DS_ClientAPI_NoRegister();
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DSJsonObject_NoRegister();
E3DSFEATURES_API UFunction* Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature();
E3DSFEATURES_API UFunction* Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature();
E3DSFEATURES_API UFunction* Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature();
E3DSFEATURES_API UFunction* Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature();
E3DSFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FE3DSErrorHandle();
E3DSFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FE3DSResponse();
E3DSFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FRequestForServer();
E3DSFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FRequestForServerList();
E3DSFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FServerInfo();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
UPackage* Z_Construct_UPackage__Script_E3DSFeatures();
// End Cross Module References

// Begin Delegate FOnE3DS_ClientRequestCompleted
struct Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics
{
	struct _Script_E3DSFeatures_eventOnE3DS_ClientRequestCompleted_Parms
	{
		FE3DSResponse Response;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/E3DS_ClientAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_E3DSFeatures_eventOnE3DS_ClientRequestCompleted_Parms, Response), Z_Construct_UScriptStruct_FE3DSResponse, METADATA_PARAMS(0, nullptr) }; // 294362697
void Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit(void* Obj)
{
	((_Script_E3DSFeatures_eventOnE3DS_ClientRequestCompleted_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_E3DSFeatures_eventOnE3DS_ClientRequestCompleted_Parms), &Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_E3DSFeatures, nullptr, "OnE3DS_ClientRequestCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::_Script_E3DSFeatures_eventOnE3DS_ClientRequestCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::_Script_E3DSFeatures_eventOnE3DS_ClientRequestCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnE3DS_ClientRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnE3DS_ClientRequestCompleted, FE3DSResponse Response, bool successful)
{
	struct _Script_E3DSFeatures_eventOnE3DS_ClientRequestCompleted_Parms
	{
		FE3DSResponse Response;
		bool successful;
	};
	_Script_E3DSFeatures_eventOnE3DS_ClientRequestCompleted_Parms Parms;
	Parms.Response=Response;
	Parms.successful=successful ? true : false;
	OnE3DS_ClientRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnE3DS_ClientRequestCompleted

// Begin Delegate FDelegateOnFailureE3DSError
struct Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics
{
	struct E3DS_ClientAPI_eventDelegateOnFailureE3DSError_Parms
	{
		FE3DSErrorHandle Error;
		bool HasError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/E3DS_ClientAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
	static void NewProp_HasError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventDelegateOnFailureE3DSError_Parms, Error), Z_Construct_UScriptStruct_FE3DSErrorHandle, METADATA_PARAMS(0, nullptr) }; // 179384264
void Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::NewProp_HasError_SetBit(void* Obj)
{
	((E3DS_ClientAPI_eventDelegateOnFailureE3DSError_Parms*)Obj)->HasError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::NewProp_HasError = { "HasError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(E3DS_ClientAPI_eventDelegateOnFailureE3DSError_Parms), &Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::NewProp_HasError_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::NewProp_HasError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DS_ClientAPI, nullptr, "DelegateOnFailureE3DSError__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::E3DS_ClientAPI_eventDelegateOnFailureE3DSError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::E3DS_ClientAPI_eventDelegateOnFailureE3DSError_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UE3DS_ClientAPI::FDelegateOnFailureE3DSError_DelegateWrapper(const FScriptDelegate& DelegateOnFailureE3DSError, FE3DSErrorHandle Error, bool HasError)
{
	struct E3DS_ClientAPI_eventDelegateOnFailureE3DSError_Parms
	{
		FE3DSErrorHandle Error;
		bool HasError;
	};
	E3DS_ClientAPI_eventDelegateOnFailureE3DSError_Parms Parms;
	Parms.Error=Error;
	Parms.HasError=HasError ? true : false;
	DelegateOnFailureE3DSError.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnFailureE3DSError

// Begin Delegate FDelegateOnSuccessRequestNewServer
struct Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics
{
	struct E3DS_ClientAPI_eventDelegateOnSuccessRequestNewServer_Parms
	{
		FServerInfo NewServerInfo;
		bool IsSuccessfull;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/E3DS_ClientAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewServerInfo;
	static void NewProp_IsSuccessfull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccessfull;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::NewProp_NewServerInfo = { "NewServerInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventDelegateOnSuccessRequestNewServer_Parms, NewServerInfo), Z_Construct_UScriptStruct_FServerInfo, METADATA_PARAMS(0, nullptr) }; // 151566770
void Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::NewProp_IsSuccessfull_SetBit(void* Obj)
{
	((E3DS_ClientAPI_eventDelegateOnSuccessRequestNewServer_Parms*)Obj)->IsSuccessfull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::NewProp_IsSuccessfull = { "IsSuccessfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(E3DS_ClientAPI_eventDelegateOnSuccessRequestNewServer_Parms), &Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::NewProp_IsSuccessfull_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::NewProp_NewServerInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::NewProp_IsSuccessfull,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DS_ClientAPI, nullptr, "DelegateOnSuccessRequestNewServer__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::E3DS_ClientAPI_eventDelegateOnSuccessRequestNewServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::E3DS_ClientAPI_eventDelegateOnSuccessRequestNewServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UE3DS_ClientAPI::FDelegateOnSuccessRequestNewServer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRequestNewServer, FServerInfo NewServerInfo, bool IsSuccessfull)
{
	struct E3DS_ClientAPI_eventDelegateOnSuccessRequestNewServer_Parms
	{
		FServerInfo NewServerInfo;
		bool IsSuccessfull;
	};
	E3DS_ClientAPI_eventDelegateOnSuccessRequestNewServer_Parms Parms;
	Parms.NewServerInfo=NewServerInfo;
	Parms.IsSuccessfull=IsSuccessfull ? true : false;
	DelegateOnSuccessRequestNewServer.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessRequestNewServer

// Begin Delegate FDelegateOnSuccessGetAllSeverList
struct Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics
{
	struct E3DS_ClientAPI_eventDelegateOnSuccessGetAllSeverList_Parms
	{
		TArray<FServerInfo> ServerList;
		bool IsSuccessfull;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/E3DS_ClientAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ServerList;
	static void NewProp_IsSuccessfull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccessfull;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::NewProp_ServerList_Inner = { "ServerList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FServerInfo, METADATA_PARAMS(0, nullptr) }; // 151566770
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::NewProp_ServerList = { "ServerList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventDelegateOnSuccessGetAllSeverList_Parms, ServerList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerList_MetaData), NewProp_ServerList_MetaData) }; // 151566770
void Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::NewProp_IsSuccessfull_SetBit(void* Obj)
{
	((E3DS_ClientAPI_eventDelegateOnSuccessGetAllSeverList_Parms*)Obj)->IsSuccessfull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::NewProp_IsSuccessfull = { "IsSuccessfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(E3DS_ClientAPI_eventDelegateOnSuccessGetAllSeverList_Parms), &Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::NewProp_IsSuccessfull_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::NewProp_ServerList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::NewProp_ServerList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::NewProp_IsSuccessfull,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DS_ClientAPI, nullptr, "DelegateOnSuccessGetAllSeverList__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::E3DS_ClientAPI_eventDelegateOnSuccessGetAllSeverList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::E3DS_ClientAPI_eventDelegateOnSuccessGetAllSeverList_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UE3DS_ClientAPI::FDelegateOnSuccessGetAllSeverList_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetAllSeverList, TArray<FServerInfo> const& ServerList, bool IsSuccessfull)
{
	struct E3DS_ClientAPI_eventDelegateOnSuccessGetAllSeverList_Parms
	{
		TArray<FServerInfo> ServerList;
		bool IsSuccessfull;
	};
	E3DS_ClientAPI_eventDelegateOnSuccessGetAllSeverList_Parms Parms;
	Parms.ServerList=ServerList;
	Parms.IsSuccessfull=IsSuccessfull ? true : false;
	DelegateOnSuccessGetAllSeverList.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDelegateOnSuccessGetAllSeverList

// Begin Class UE3DS_ClientAPI Function GetAllLatestVerisonServerList
struct Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics
{
	struct E3DS_ClientAPI_eventGetAllLatestVerisonServerList_Parms
	{
		FRequestForServerList Request;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnFailure;
		UE3DS_ClientAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "E3DS | OnlineMultiplayer | Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Getting All Server List\n" },
#endif
		{ "DisplayName", "Get All Latest Verison Server List" },
		{ "ModuleRelativePath", "Public/E3DS_ClientAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getting All Server List" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventGetAllLatestVerisonServerList_Parms, Request), Z_Construct_UScriptStruct_FRequestForServerList, METADATA_PARAMS(0, nullptr) }; // 1393131754
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventGetAllLatestVerisonServerList_Parms, OnSuccess), Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3120642437
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventGetAllLatestVerisonServerList_Parms, OnFailure), Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3351938692
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventGetAllLatestVerisonServerList_Parms, ReturnValue), Z_Construct_UClass_UE3DS_ClientAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::NewProp_OnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DS_ClientAPI, nullptr, "GetAllLatestVerisonServerList", nullptr, nullptr, Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::E3DS_ClientAPI_eventGetAllLatestVerisonServerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::E3DS_ClientAPI_eventGetAllLatestVerisonServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DS_ClientAPI::execGetAllLatestVerisonServerList)
{
	P_GET_STRUCT(FRequestForServerList,Z_Param_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailure);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UE3DS_ClientAPI**)Z_Param__Result=UE3DS_ClientAPI::GetAllLatestVerisonServerList(Z_Param_Request,FDelegateOnSuccessGetAllSeverList(Z_Param_OnSuccess),FDelegateOnFailureE3DSError(Z_Param_OnFailure));
	P_NATIVE_END;
}
// End Class UE3DS_ClientAPI Function GetAllLatestVerisonServerList

// Begin Class UE3DS_ClientAPI Function GetAllServerList
struct Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics
{
	struct E3DS_ClientAPI_eventGetAllServerList_Parms
	{
		FRequestForServerList Request;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnFailure;
		UE3DS_ClientAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "E3DS | OnlineMultiplayer | Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Getting All Server List\n" },
#endif
		{ "DisplayName", "Get All Server List" },
		{ "ModuleRelativePath", "Public/E3DS_ClientAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getting All Server List" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventGetAllServerList_Parms, Request), Z_Construct_UScriptStruct_FRequestForServerList, METADATA_PARAMS(0, nullptr) }; // 1393131754
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventGetAllServerList_Parms, OnSuccess), Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3120642437
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventGetAllServerList_Parms, OnFailure), Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3351938692
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventGetAllServerList_Parms, ReturnValue), Z_Construct_UClass_UE3DS_ClientAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::NewProp_OnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DS_ClientAPI, nullptr, "GetAllServerList", nullptr, nullptr, Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::E3DS_ClientAPI_eventGetAllServerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::E3DS_ClientAPI_eventGetAllServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DS_ClientAPI::execGetAllServerList)
{
	P_GET_STRUCT(FRequestForServerList,Z_Param_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailure);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UE3DS_ClientAPI**)Z_Param__Result=UE3DS_ClientAPI::GetAllServerList(Z_Param_Request,FDelegateOnSuccessGetAllSeverList(Z_Param_OnSuccess),FDelegateOnFailureE3DSError(Z_Param_OnFailure));
	P_NATIVE_END;
}
// End Class UE3DS_ClientAPI Function GetAllServerList

// Begin Class UE3DS_ClientAPI Function HelperGetAllServerList
struct Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics
{
	struct E3DS_ClientAPI_eventHelperGetAllServerList_Parms
	{
		FE3DSResponse Response;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "E3DS | OnlineMultiplayer | Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FE3DSClientRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Public/E3DS_ClientAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FE3DSClientRequestCompleted" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventHelperGetAllServerList_Parms, Response), Z_Construct_UScriptStruct_FE3DSResponse, METADATA_PARAMS(0, nullptr) }; // 294362697
void Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::NewProp_successful_SetBit(void* Obj)
{
	((E3DS_ClientAPI_eventHelperGetAllServerList_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(E3DS_ClientAPI_eventHelperGetAllServerList_Parms), &Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DS_ClientAPI, nullptr, "HelperGetAllServerList", nullptr, nullptr, Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::E3DS_ClientAPI_eventHelperGetAllServerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::E3DS_ClientAPI_eventHelperGetAllServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DS_ClientAPI::execHelperGetAllServerList)
{
	P_GET_STRUCT(FE3DSResponse,Z_Param_Response);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperGetAllServerList(Z_Param_Response,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UE3DS_ClientAPI Function HelperGetAllServerList

// Begin Class UE3DS_ClientAPI Function HelperRequestNewServer
struct Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics
{
	struct E3DS_ClientAPI_eventHelperRequestNewServer_Parms
	{
		FE3DSResponse Response;
		bool successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "E3DS | OnlineMultiplayer | Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implements FE3DSClientRequestCompleted\n" },
#endif
		{ "ModuleRelativePath", "Public/E3DS_ClientAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements FE3DSClientRequestCompleted" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static void NewProp_successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventHelperRequestNewServer_Parms, Response), Z_Construct_UScriptStruct_FE3DSResponse, METADATA_PARAMS(0, nullptr) }; // 294362697
void Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::NewProp_successful_SetBit(void* Obj)
{
	((E3DS_ClientAPI_eventHelperRequestNewServer_Parms*)Obj)->successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(E3DS_ClientAPI_eventHelperRequestNewServer_Parms), &Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::NewProp_successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DS_ClientAPI, nullptr, "HelperRequestNewServer", nullptr, nullptr, Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::E3DS_ClientAPI_eventHelperRequestNewServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::E3DS_ClientAPI_eventHelperRequestNewServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DS_ClientAPI::execHelperRequestNewServer)
{
	P_GET_STRUCT(FE3DSResponse,Z_Param_Response);
	P_GET_UBOOL(Z_Param_successful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HelperRequestNewServer(Z_Param_Response,Z_Param_successful);
	P_NATIVE_END;
}
// End Class UE3DS_ClientAPI Function HelperRequestNewServer

// Begin Class UE3DS_ClientAPI Function RequestNewServer
struct Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics
{
	struct E3DS_ClientAPI_eventRequestNewServer_Parms
	{
		FRequestForServer Request;
		FScriptDelegate OnSuccess;
		FScriptDelegate OnFailure;
		UE3DS_ClientAPI* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "E3DS | OnlineMultiplayer | Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Request For Create A New Server\n" },
#endif
		{ "DisplayName", "Request For A New Server" },
		{ "ModuleRelativePath", "Public/E3DS_ClientAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request For Create A New Server" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventRequestNewServer_Parms, Request), Z_Construct_UScriptStruct_FRequestForServer, METADATA_PARAMS(0, nullptr) }; // 2461627905
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventRequestNewServer_Parms, OnSuccess), Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1652441754
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventRequestNewServer_Parms, OnFailure), Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3351938692
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventRequestNewServer_Parms, ReturnValue), Z_Construct_UClass_UE3DS_ClientAPI_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::NewProp_OnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DS_ClientAPI, nullptr, "RequestNewServer", nullptr, nullptr, Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::E3DS_ClientAPI_eventRequestNewServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::E3DS_ClientAPI_eventRequestNewServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DS_ClientAPI::execRequestNewServer)
{
	P_GET_STRUCT(FRequestForServer,Z_Param_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailure);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UE3DS_ClientAPI**)Z_Param__Result=UE3DS_ClientAPI::RequestNewServer(Z_Param_Request,FDelegateOnSuccessRequestNewServer(Z_Param_OnSuccess),FDelegateOnFailureE3DSError(Z_Param_OnFailure));
	P_NATIVE_END;
}
// End Class UE3DS_ClientAPI Function RequestNewServer

// Begin Class UE3DS_ClientAPI Function SetHeader
struct Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics
{
	struct E3DS_ClientAPI_eventSetHeader_Parms
	{
		FString HeaderName;
		FString HeaderValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "E3DS|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets optional header info */" },
#endif
		{ "ModuleRelativePath", "Public/E3DS_ClientAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets optional header info" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventSetHeader_Parms, HeaderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderName_MetaData), NewProp_HeaderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics::NewProp_HeaderValue = { "HeaderValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(E3DS_ClientAPI_eventSetHeader_Parms, HeaderValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderValue_MetaData), NewProp_HeaderValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics::NewProp_HeaderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics::NewProp_HeaderValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UE3DS_ClientAPI, nullptr, "SetHeader", nullptr, nullptr, Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics::E3DS_ClientAPI_eventSetHeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics::E3DS_ClientAPI_eventSetHeader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UE3DS_ClientAPI::execSetHeader)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
	P_GET_PROPERTY(FStrProperty,Z_Param_HeaderValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeader(Z_Param_HeaderName,Z_Param_HeaderValue);
	P_NATIVE_END;
}
// End Class UE3DS_ClientAPI Function SetHeader

// Begin Class UE3DS_ClientAPI
void UE3DS_ClientAPI::StaticRegisterNativesUE3DS_ClientAPI()
{
	UClass* Class = UE3DS_ClientAPI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllLatestVerisonServerList", &UE3DS_ClientAPI::execGetAllLatestVerisonServerList },
		{ "GetAllServerList", &UE3DS_ClientAPI::execGetAllServerList },
		{ "HelperGetAllServerList", &UE3DS_ClientAPI::execHelperGetAllServerList },
		{ "HelperRequestNewServer", &UE3DS_ClientAPI::execHelperRequestNewServer },
		{ "RequestNewServer", &UE3DS_ClientAPI::execRequestNewServer },
		{ "SetHeader", &UE3DS_ClientAPI::execSetHeader },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UE3DS_ClientAPI);
UClass* Z_Construct_UClass_UE3DS_ClientAPI_NoRegister()
{
	return UE3DS_ClientAPI::StaticClass();
}
struct Z_Construct_UClass_UE3DS_ClientAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "E3DS_ClientAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/E3DS_ClientAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnE3DSResponse_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UE3DS_ClientAPI(const FObjectInitializer& ObjectInitializer);\n" },
#endif
		{ "ModuleRelativePath", "Public/E3DS_ClientAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UE3DS_ClientAPI(const FObjectInitializer& ObjectInitializer);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal request data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Public/E3DS_ClientAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal request data stored as JSON" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Response data stored as JSON */" },
#endif
		{ "ModuleRelativePath", "Public/E3DS_ClientAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Response data stored as JSON" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnE3DSResponse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestJsonObj;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonObj;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature, "DelegateOnFailureE3DSError__DelegateSignature" }, // 3351938692
		{ &Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature, "DelegateOnSuccessGetAllSeverList__DelegateSignature" }, // 3120642437
		{ &Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature, "DelegateOnSuccessRequestNewServer__DelegateSignature" }, // 1652441754
		{ &Z_Construct_UFunction_UE3DS_ClientAPI_GetAllLatestVerisonServerList, "GetAllLatestVerisonServerList" }, // 4230623766
		{ &Z_Construct_UFunction_UE3DS_ClientAPI_GetAllServerList, "GetAllServerList" }, // 2406143089
		{ &Z_Construct_UFunction_UE3DS_ClientAPI_HelperGetAllServerList, "HelperGetAllServerList" }, // 258062573
		{ &Z_Construct_UFunction_UE3DS_ClientAPI_HelperRequestNewServer, "HelperRequestNewServer" }, // 2459860921
		{ &Z_Construct_UFunction_UE3DS_ClientAPI_RequestNewServer, "RequestNewServer" }, // 220842198
		{ &Z_Construct_UFunction_UE3DS_ClientAPI_SetHeader, "SetHeader" }, // 1396569540
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UE3DS_ClientAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UE3DS_ClientAPI_Statics::NewProp_OnE3DSResponse = { "OnE3DSResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE3DS_ClientAPI, OnE3DSResponse), Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnE3DSResponse_MetaData), NewProp_OnE3DSResponse_MetaData) }; // 442660842
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UE3DS_ClientAPI_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE3DS_ClientAPI, RequestJsonObj), Z_Construct_UClass_UE3DSJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestJsonObj_MetaData), NewProp_RequestJsonObj_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UE3DS_ClientAPI_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UE3DS_ClientAPI, ResponseJsonObj), Z_Construct_UClass_UE3DSJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonObj_MetaData), NewProp_ResponseJsonObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UE3DS_ClientAPI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3DS_ClientAPI_Statics::NewProp_OnE3DSResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3DS_ClientAPI_Statics::NewProp_RequestJsonObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UE3DS_ClientAPI_Statics::NewProp_ResponseJsonObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UE3DS_ClientAPI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UE3DS_ClientAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_E3DSFeatures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UE3DS_ClientAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UE3DS_ClientAPI_Statics::ClassParams = {
	&UE3DS_ClientAPI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UE3DS_ClientAPI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UE3DS_ClientAPI_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3DS_ClientAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UE3DS_ClientAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UE3DS_ClientAPI()
{
	if (!Z_Registration_Info_UClass_UE3DS_ClientAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UE3DS_ClientAPI.OuterSingleton, Z_Construct_UClass_UE3DS_ClientAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UE3DS_ClientAPI.OuterSingleton;
}
template<> E3DSFEATURES_API UClass* StaticClass<UE3DS_ClientAPI>()
{
	return UE3DS_ClientAPI::StaticClass();
}
UE3DS_ClientAPI::UE3DS_ClientAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UE3DS_ClientAPI);
UE3DS_ClientAPI::~UE3DS_ClientAPI() {}
// End Class UE3DS_ClientAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UE3DS_ClientAPI, UE3DS_ClientAPI::StaticClass, TEXT("UE3DS_ClientAPI"), &Z_Registration_Info_UClass_UE3DS_ClientAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UE3DS_ClientAPI), 3457214098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_2787830184(TEXT("/Script/E3DSFeatures"),
	Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
