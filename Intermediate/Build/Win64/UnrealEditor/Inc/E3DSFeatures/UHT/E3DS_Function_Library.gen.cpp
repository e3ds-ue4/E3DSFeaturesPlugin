// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "E3DSFeatures/Public/Library/E3DS_Function_Library.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE3DS_Function_Library() {}

// Begin Cross Module References
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DS_Function_Library();
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DS_Function_Library_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_E3DSFeatures();
// End Cross Module References

// Begin Class UE3DS_Function_Library
void UE3DS_Function_Library::StaticRegisterNativesUE3DS_Function_Library()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UE3DS_Function_Library);
UClass* Z_Construct_UClass_UE3DS_Function_Library_NoRegister()
{
	return UE3DS_Function_Library::StaticClass();
}
struct Z_Construct_UClass_UE3DS_Function_Library_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Library/E3DS_Function_Library.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Library/E3DS_Function_Library.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UE3DS_Function_Library>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UE3DS_Function_Library_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_E3DSFeatures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UE3DS_Function_Library_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UE3DS_Function_Library_Statics::ClassParams = {
	&UE3DS_Function_Library::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UE3DS_Function_Library_Statics::Class_MetaDataParams), Z_Construct_UClass_UE3DS_Function_Library_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UE3DS_Function_Library()
{
	if (!Z_Registration_Info_UClass_UE3DS_Function_Library.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UE3DS_Function_Library.OuterSingleton, Z_Construct_UClass_UE3DS_Function_Library_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UE3DS_Function_Library.OuterSingleton;
}
template<> E3DSFEATURES_API UClass* StaticClass<UE3DS_Function_Library>()
{
	return UE3DS_Function_Library::StaticClass();
}
UE3DS_Function_Library::UE3DS_Function_Library(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UE3DS_Function_Library);
UE3DS_Function_Library::~UE3DS_Function_Library() {}
// End Class UE3DS_Function_Library

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_Library_E3DS_Function_Library_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UE3DS_Function_Library, UE3DS_Function_Library::StaticClass, TEXT("UE3DS_Function_Library"), &Z_Registration_Info_UClass_UE3DS_Function_Library, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UE3DS_Function_Library), 3838244990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_Library_E3DS_Function_Library_h_791330078(TEXT("/Script/E3DSFeatures"),
	Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_Library_E3DS_Function_Library_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_Library_E3DS_Function_Library_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
