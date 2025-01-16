// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "E3DSFeatures/Public/Library/E3DS_Features_Library.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE3DS_Features_Library() {}

// Begin Cross Module References
E3DSFEATURES_API UClass* Z_Construct_UClass_UE3DSJsonObject_NoRegister();
E3DSFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FE3DSErrorHandle();
E3DSFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FE3DSResponse();
E3DSFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FRequestForServer();
E3DSFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FRequestForServerList();
E3DSFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FServerInfo();
UPackage* Z_Construct_UPackage__Script_E3DSFeatures();
// End Cross Module References

// Begin ScriptStruct FRequestForServer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RequestForServer;
class UScriptStruct* FRequestForServer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RequestForServer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RequestForServer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestForServer, (UObject*)Z_Construct_UPackage__Script_E3DSFeatures(), TEXT("RequestForServer"));
	}
	return Z_Registration_Info_UScriptStruct_RequestForServer.OuterSingleton;
}
template<> E3DSFEATURES_API UScriptStruct* StaticStruct<FRequestForServer>()
{
	return FRequestForServer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRequestForServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///Request For New Server\n///\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request For New Server" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_API_Key_MetaData[] = {
		{ "Category", "E3DS | Request | Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Please Generate Your Api key from control E3DS panel and paste it here.Login E3DS Control Panel and go to https://account.eagle3dstreaming.com/api-keys-management\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please Generate Your Api key from control E3DS panel and paste it here.Login E3DS Control Panel and go to https:account.eagle3dstreaming.com/api-keys-management" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[] = {
		{ "Category", "E3DS | Request | Server" },
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerAppName_MetaData[] = {
		{ "Category", "E3DS | Request | Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Please Enter your E3DS Control Panel App Name. If the name doesn't match your request will fail\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please Enter your E3DS Control Panel App Name. If the name doesn't match your request will fail" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerMapName_MetaData[] = {
		{ "Category", "E3DS | Request | Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Please Enter your E3DS Game Map Name Which is going to open as Server. If it's empty your request will fail\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please Enter your E3DS Game Map Name Which is going to open as Server. If it's empty your request will fail" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayer_MetaData[] = {
		{ "Category", "E3DS | Request | Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Please Enter how much player you want in a single Server. Then Minimum Player is 1 by default if it's 0 your request will fail make sure it's more than 0\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please Enter how much player you want in a single Server. Then Minimum Player is 1 by default if it's 0 your request will fail make sure it's more than 0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_API_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Domain;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAppName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerMapName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestForServer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestForServer_Statics::NewProp_API_Key = { "API_Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestForServer, API_Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_API_Key_MetaData), NewProp_API_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestForServer_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestForServer, Domain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Domain_MetaData), NewProp_Domain_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestForServer_Statics::NewProp_ServerAppName = { "ServerAppName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestForServer, ServerAppName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerAppName_MetaData), NewProp_ServerAppName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestForServer_Statics::NewProp_ServerMapName = { "ServerMapName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestForServer, ServerMapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerMapName_MetaData), NewProp_ServerMapName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestForServer_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestForServer, MaxPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayer_MetaData), NewProp_MaxPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestForServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestForServer_Statics::NewProp_API_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestForServer_Statics::NewProp_Domain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestForServer_Statics::NewProp_ServerAppName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestForServer_Statics::NewProp_ServerMapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestForServer_Statics::NewProp_MaxPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestForServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestForServer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_E3DSFeatures,
	nullptr,
	&NewStructOps,
	"RequestForServer",
	Z_Construct_UScriptStruct_FRequestForServer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestForServer_Statics::PropPointers),
	sizeof(FRequestForServer),
	alignof(FRequestForServer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestForServer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRequestForServer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRequestForServer()
{
	if (!Z_Registration_Info_UScriptStruct_RequestForServer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RequestForServer.InnerSingleton, Z_Construct_UScriptStruct_FRequestForServer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RequestForServer.InnerSingleton;
}
// End ScriptStruct FRequestForServer

// Begin ScriptStruct FRequestForServerList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RequestForServerList;
class UScriptStruct* FRequestForServerList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RequestForServerList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RequestForServerList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestForServerList, (UObject*)Z_Construct_UPackage__Script_E3DSFeatures(), TEXT("RequestForServerList"));
	}
	return Z_Registration_Info_UScriptStruct_RequestForServerList.OuterSingleton;
}
template<> E3DSFEATURES_API UScriptStruct* StaticStruct<FRequestForServerList>()
{
	return FRequestForServerList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRequestForServerList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///Request For New Server\n///\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request For New Server" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_API_Key_MetaData[] = {
		{ "Category", "E3DS | Request | Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Please Generate Your Api key from control E3DS panel and paste it here.Login E3DS Control Panel and go to https://account.eagle3dstreaming.com/api-keys-management\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please Generate Your Api key from control E3DS panel and paste it here.Login E3DS Control Panel and go to https:account.eagle3dstreaming.com/api-keys-management" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Domain_MetaData[] = {
		{ "Category", "E3DS | Request | Server" },
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerAppName_MetaData[] = {
		{ "Category", "E3DS | Request | Server" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Please Enter your E3DS Control Panel App Name. If the name doesn't match your request will fail\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please Enter your E3DS Control Panel App Name. If the name doesn't match your request will fail" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_API_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Domain;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAppName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestForServerList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestForServerList_Statics::NewProp_API_Key = { "API_Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestForServerList, API_Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_API_Key_MetaData), NewProp_API_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestForServerList_Statics::NewProp_Domain = { "Domain", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestForServerList, Domain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Domain_MetaData), NewProp_Domain_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestForServerList_Statics::NewProp_ServerAppName = { "ServerAppName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestForServerList, ServerAppName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerAppName_MetaData), NewProp_ServerAppName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestForServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestForServerList_Statics::NewProp_API_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestForServerList_Statics::NewProp_Domain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestForServerList_Statics::NewProp_ServerAppName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestForServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestForServerList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_E3DSFeatures,
	nullptr,
	&NewStructOps,
	"RequestForServerList",
	Z_Construct_UScriptStruct_FRequestForServerList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestForServerList_Statics::PropPointers),
	sizeof(FRequestForServerList),
	alignof(FRequestForServerList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestForServerList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRequestForServerList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRequestForServerList()
{
	if (!Z_Registration_Info_UScriptStruct_RequestForServerList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RequestForServerList.InnerSingleton, Z_Construct_UScriptStruct_FRequestForServerList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RequestForServerList.InnerSingleton;
}
// End ScriptStruct FRequestForServerList

// Begin ScriptStruct FServerInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ServerInfo;
class UScriptStruct* FServerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ServerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ServerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerInfo, (UObject*)Z_Construct_UPackage__Script_E3DSFeatures(), TEXT("ServerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ServerInfo.OuterSingleton;
}
template<> E3DSFEATURES_API UScriptStruct* StaticStruct<FServerInfo>()
{
	return FServerInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FServerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///All Dedicated Server Information\n///\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All Dedicated Server Information" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerAppName_MetaData[] = {
		{ "Category", "E3DS |ServerInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// E3DS Control Panel Server Name\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E3DS Control Panel Server Name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerMapName_MetaData[] = {
		{ "Category", "E3DS |ServerInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current Server Map Name\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Server Map Name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IP_Address_MetaData[] = {
		{ "Category", "E3DS |ServerInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current Server IP Adress\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Server IP Adress" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "E3DS |ServerInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current Server Port\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Server Port" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayer_MetaData[] = {
		{ "Category", "E3DS |ServerInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current Player in Current Server\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Player in Current Server" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayer_MetaData[] = {
		{ "Category", "E3DS |ServerInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum number of player in current Server\n" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of player in current Server" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAppName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerMapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP_Address;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPlayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerAppName = { "ServerAppName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerInfo, ServerAppName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerAppName_MetaData), NewProp_ServerAppName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerMapName = { "ServerMapName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerInfo, ServerMapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerMapName_MetaData), NewProp_ServerMapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_IP_Address = { "IP_Address", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerInfo, IP_Address), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IP_Address_MetaData), NewProp_IP_Address_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerInfo, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrentPlayer = { "CurrentPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerInfo, CurrentPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPlayer_MetaData), NewProp_CurrentPlayer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayer = { "MaxPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerInfo, MaxPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayer_MetaData), NewProp_MaxPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerAppName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerMapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_IP_Address,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrentPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_E3DSFeatures,
	nullptr,
	&NewStructOps,
	"ServerInfo",
	Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers),
	sizeof(FServerInfo),
	alignof(FServerInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FServerInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FServerInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ServerInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ServerInfo.InnerSingleton, Z_Construct_UScriptStruct_FServerInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ServerInfo.InnerSingleton;
}
// End ScriptStruct FServerInfo

// Begin ScriptStruct FE3DSErrorHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_E3DSErrorHandle;
class UScriptStruct* FE3DSErrorHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_E3DSErrorHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_E3DSErrorHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FE3DSErrorHandle, (UObject*)Z_Construct_UPackage__Script_E3DSFeatures(), TEXT("E3DSErrorHandle"));
	}
	return Z_Registration_Info_UScriptStruct_E3DSErrorHandle.OuterSingleton;
}
template<> E3DSFEATURES_API UScriptStruct* StaticStruct<FE3DSErrorHandle>()
{
	return FE3DSErrorHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hasError_MetaData[] = {
		{ "Category", "E3DS | Error" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is there an error */" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is there an error" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[] = {
		{ "Category", "E3DS | Error" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the error code recieved from E3DS. */" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the error code recieved from E3DS." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "E3DS | Error" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the error message recieved from E3DS. */" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the error message recieved from E3DS." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_hasError_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_hasError;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FE3DSErrorHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::NewProp_hasError_SetBit(void* Obj)
{
	((FE3DSErrorHandle*)Obj)->hasError = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::NewProp_hasError = { "hasError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FE3DSErrorHandle), &Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::NewProp_hasError_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hasError_MetaData), NewProp_hasError_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FE3DSErrorHandle, ErrorCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorCode_MetaData), NewProp_ErrorCode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FE3DSErrorHandle, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::NewProp_hasError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::NewProp_ErrorCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_E3DSFeatures,
	nullptr,
	&NewStructOps,
	"E3DSErrorHandle",
	Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::PropPointers),
	sizeof(FE3DSErrorHandle),
	alignof(FE3DSErrorHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FE3DSErrorHandle()
{
	if (!Z_Registration_Info_UScriptStruct_E3DSErrorHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_E3DSErrorHandle.InnerSingleton, Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_E3DSErrorHandle.InnerSingleton;
}
// End ScriptStruct FE3DSErrorHandle

// Begin ScriptStruct FE3DSResponse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_E3DSResponse;
class UScriptStruct* FE3DSResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_E3DSResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_E3DSResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FE3DSResponse, (UObject*)Z_Construct_UPackage__Script_E3DSFeatures(), TEXT("E3DSResponse"));
	}
	return Z_Registration_Info_UScriptStruct_E3DSResponse.OuterSingleton;
}
template<> E3DSFEATURES_API UScriptStruct* StaticStruct<FE3DSResponse>()
{
	return FE3DSResponse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FE3DSResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseObject_MetaData[] = {
		{ "Category", "E3DS | Response" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** E3DS Response Object */" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "E3DS Response Object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseError_MetaData[] = {
		{ "Category", "E3DS | Error" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is there an error */" },
#endif
		{ "ModuleRelativePath", "Public/Library/E3DS_Features_Library.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is there an error" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResponseError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FE3DSResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FE3DSResponse_Statics::NewProp_ResponseObject = { "ResponseObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FE3DSResponse, ResponseObject), Z_Construct_UClass_UE3DSJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseObject_MetaData), NewProp_ResponseObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FE3DSResponse_Statics::NewProp_ResponseError = { "ResponseError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FE3DSResponse, ResponseError), Z_Construct_UScriptStruct_FE3DSErrorHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseError_MetaData), NewProp_ResponseError_MetaData) }; // 179384264
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FE3DSResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FE3DSResponse_Statics::NewProp_ResponseObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FE3DSResponse_Statics::NewProp_ResponseError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FE3DSResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FE3DSResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_E3DSFeatures,
	nullptr,
	&NewStructOps,
	"E3DSResponse",
	Z_Construct_UScriptStruct_FE3DSResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FE3DSResponse_Statics::PropPointers),
	sizeof(FE3DSResponse),
	alignof(FE3DSResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FE3DSResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FE3DSResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FE3DSResponse()
{
	if (!Z_Registration_Info_UScriptStruct_E3DSResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_E3DSResponse.InnerSingleton, Z_Construct_UScriptStruct_FE3DSResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_E3DSResponse.InnerSingleton;
}
// End ScriptStruct FE3DSResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_Library_E3DS_Features_Library_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRequestForServer::StaticStruct, Z_Construct_UScriptStruct_FRequestForServer_Statics::NewStructOps, TEXT("RequestForServer"), &Z_Registration_Info_UScriptStruct_RequestForServer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequestForServer), 2461627905U) },
		{ FRequestForServerList::StaticStruct, Z_Construct_UScriptStruct_FRequestForServerList_Statics::NewStructOps, TEXT("RequestForServerList"), &Z_Registration_Info_UScriptStruct_RequestForServerList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequestForServerList), 1393131754U) },
		{ FServerInfo::StaticStruct, Z_Construct_UScriptStruct_FServerInfo_Statics::NewStructOps, TEXT("ServerInfo"), &Z_Registration_Info_UScriptStruct_ServerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerInfo), 151566770U) },
		{ FE3DSErrorHandle::StaticStruct, Z_Construct_UScriptStruct_FE3DSErrorHandle_Statics::NewStructOps, TEXT("E3DSErrorHandle"), &Z_Registration_Info_UScriptStruct_E3DSErrorHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FE3DSErrorHandle), 179384264U) },
		{ FE3DSResponse::StaticStruct, Z_Construct_UScriptStruct_FE3DSResponse_Statics::NewStructOps, TEXT("E3DSResponse"), &Z_Registration_Info_UScriptStruct_E3DSResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FE3DSResponse), 294362697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_Library_E3DS_Features_Library_h_1654765021(TEXT("/Script/E3DSFeatures"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_Library_E3DS_Features_Library_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProjectMP_Plugins_E3DSFeautres_Source_E3DSFeatures_Public_Library_E3DS_Features_Library_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
