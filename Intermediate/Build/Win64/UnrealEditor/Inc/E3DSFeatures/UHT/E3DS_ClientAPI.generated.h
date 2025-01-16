// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "E3DS_ClientAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UE3DS_ClientAPI;
struct FE3DSErrorHandle;
struct FE3DSResponse;
struct FRequestForServer;
struct FRequestForServerList;
struct FServerInfo;
#ifdef E3DSFEATURES_E3DS_ClientAPI_generated_h
#error "E3DS_ClientAPI.generated.h already included, missing '#pragma once' in E3DS_ClientAPI.h"
#endif
#define E3DSFEATURES_E3DS_ClientAPI_generated_h

#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_13_DELEGATE \
E3DSFEATURES_API void FOnE3DS_ClientRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnE3DS_ClientRequestCompleted, FE3DSResponse Response, bool successful);


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_27_DELEGATE \
static void FDelegateOnFailureE3DSError_DelegateWrapper(const FScriptDelegate& DelegateOnFailureE3DSError, FE3DSErrorHandle Error, bool HasError);


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_49_DELEGATE \
static void FDelegateOnSuccessRequestNewServer_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessRequestNewServer, FServerInfo NewServerInfo, bool IsSuccessfull);


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_61_DELEGATE \
static void FDelegateOnSuccessGetAllSeverList_DelegateWrapper(const FScriptDelegate& DelegateOnSuccessGetAllSeverList, TArray<FServerInfo> const& ServerList, bool IsSuccessfull);


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHelperGetAllServerList); \
	DECLARE_FUNCTION(execGetAllLatestVerisonServerList); \
	DECLARE_FUNCTION(execGetAllServerList); \
	DECLARE_FUNCTION(execHelperRequestNewServer); \
	DECLARE_FUNCTION(execRequestNewServer); \
	DECLARE_FUNCTION(execSetHeader);


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUE3DS_ClientAPI(); \
	friend struct Z_Construct_UClass_UE3DS_ClientAPI_Statics; \
public: \
	DECLARE_CLASS(UE3DS_ClientAPI, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/E3DSFeatures"), NO_API) \
	DECLARE_SERIALIZER(UE3DS_ClientAPI)


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UE3DS_ClientAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UE3DS_ClientAPI(UE3DS_ClientAPI&&); \
	UE3DS_ClientAPI(const UE3DS_ClientAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UE3DS_ClientAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UE3DS_ClientAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UE3DS_ClientAPI) \
	NO_API virtual ~UE3DS_ClientAPI();


#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_19_PROLOG
#define FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_22_INCLASS_NO_PURE_DECLS \
	FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> E3DSFEATURES_API UClass* StaticClass<class UE3DS_ClientAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_E3DS_ClientAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
