// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE3DSFeatures_init() {}
	E3DSFEATURES_API UFunction* Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature();
	E3DSFEATURES_API UFunction* Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature();
	E3DSFEATURES_API UFunction* Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature();
	E3DSFEATURES_API UFunction* Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_E3DSFeatures;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_E3DSFeatures()
	{
		if (!Z_Registration_Info_UPackage__Script_E3DSFeatures.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_E3DSFeatures_OnE3DS_ClientRequestCompleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnFailureE3DSError__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessGetAllSeverList__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UE3DS_ClientAPI_DelegateOnSuccessRequestNewServer__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/E3DSFeatures",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDCE61AA8,
				0x128AE136,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_E3DSFeatures.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_E3DSFeatures.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_E3DSFeatures(Z_Construct_UPackage__Script_E3DSFeatures, TEXT("/Script/E3DSFeatures"), Z_Registration_Info_UPackage__Script_E3DSFeatures, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDCE61AA8, 0x128AE136));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
