// Copyright Eagle 3D Streaming All Rights Reserved.

#include "E3DSFeatures/Public/JSON/E3DS_JsonDecoder.h"
#include "Commandlets/Commandlet.h"


// Decode Request New Server Info
FServerInfo UE3DS_JsonDecoder::DecodeRequestedNewServerInfo(UE3DSJsonObject* response)
{
	FServerInfo TempResultStruct;

	if (response == nullptr)
	{
		// Handle the nullptr case by assigning default or invalid values
		TempResultStruct.ServerAppName = "Invalid";
		TempResultStruct.ServerMapName = "Invalid";
		TempResultStruct.IP_Address = "0.0.0.0";
		TempResultStruct.Port = -1;
		TempResultStruct.CurrentPlayer = -1;
		TempResultStruct.MaxPlayer = -1;

		// Optionally log an error
		UE_LOG(LogTemp, Warning, TEXT("DecodeRequestedNewServerInfo: Response is null."));
		return TempResultStruct;
	}

	
	
	UE3DSJsonObject* DataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

	if(DataObj !=nullptr)
	{
		
		TArray<FString> OutTokens;
		TArray<FString> OutSwitches;
		TMap<FString,FString> OutParams;

		const FString CMD_Parameter= !(DataObj->HasField("CmdLineParameters4DS")) ? "No Valid Parameters" : DataObj->GetStringField("CmdLineParameters4DS");

		UCommandlet::ParseCommandLine(*CMD_Parameter,OutTokens,OutSwitches,OutParams);
		
		TempResultStruct.ServerAppName = !(DataObj->HasField("appName")) ? "" : DataObj->GetStringField("appName");
		TempResultStruct.ServerMapName = !(DataObj->HasField("map")) ? "" : DataObj->GetStringField("map");
		//TempResultStruct.ServerMapName =  *OutParams.Find(TEXT("map"));
		TempResultStruct.IP_Address = !(DataObj->HasField("serverPublicIp")) ? "0.0.0.0" : DataObj->GetStringField("serverPublicIp");
		TempResultStruct.Port = !(DataObj->HasField("dsPort")) ? 0 : DataObj->GetIntegerField("dsPort");
		TempResultStruct.CurrentPlayer = !(DataObj->HasField("playerNum")) ? 0 : DataObj->GetIntegerField("playerNum");
		

		FString* FoundValue = OutParams.Find(TEXT("maxPlayerNumPerDS"));
		FString sfsf = FoundValue ? *FoundValue : TEXT("0");


		//FString sfsf = **OutParams.Find(TEXT("maxPlayerNumPerDS"));

		//const CharType* result = TCHAR_TO_ANSI(*sfsf);
		int32 sfgdg = FCString::Atoi(*sfsf);
		
		
		TempResultStruct.MaxPlayer= sfgdg;
	}
	return TempResultStruct;
}


// Decode The Response JSON object to Unreal Struct 
TArray<FServerInfo> UE3DS_JsonDecoder::DecodeGetAllServerList(UE3DSJsonObject* response)
{
	TArray<FServerInfo> TempStructArray;
	UE3DSJsonObject* DataObj = !(response->HasField("data")) ? nullptr : response->GetObjectField("data");

	if(DataObj != nullptr)
	{	
		for (const auto & Loc_ServerListObj : DataObj->GetObjectArrayField("dsServerList"))
		{
			UE3DSJsonObject* AppInfoObj =!(Loc_ServerListObj->HasField("appInfo")) ? nullptr : Loc_ServerListObj->GetObjectField("appInfo");

			if(AppInfoObj !=nullptr)
			{
				FServerInfo Loc_ServerInfo;

				TArray<FString> OutTokens;
				TArray<FString> OutSwitches;
				TMap<FString,FString> OutParams;
				
				FString CMD_Parameter= !(AppInfoObj->HasField("CmdLineParameters4DS")) ? "No Valid Parameters" : AppInfoObj->GetStringField("CmdLineParameters4DS");
				
				UCommandlet::ParseCommandLine(*CMD_Parameter,OutTokens,OutSwitches,OutParams);
				
				Loc_ServerInfo.ServerAppName = !(AppInfoObj->HasField("appName")) ? "No Valid App Name" : AppInfoObj->GetStringField("appName");


				FString* MapValue = OutParams.Find(TEXT("map"));
				FString tt = MapValue ? *MapValue : "";
				
					//FString tt=*OutParams.Find(TEXT("map"));
				
					Loc_ServerInfo.ServerMapName = tt;
				Loc_ServerInfo.IP_Address= !(Loc_ServerListObj->HasField("serverPublicIp")) ? "No IP Address" : Loc_ServerListObj->GetStringField("serverPublicIp");
				Loc_ServerInfo.Port=!(AppInfoObj->HasField("dsPort")) ? 0 : AppInfoObj->GetIntegerField("dsPort");
				Loc_ServerInfo.CurrentPlayer=!(AppInfoObj->HasField("playerNum")) ? 0 : AppInfoObj->GetIntegerField("playerNum");
				
				//Loc_ServerInfo.MaxPlayer = FCString::Atoi(**OutParams.Find(TEXT("maxPlayerNumPerDS")));
				FString* MaxPlayerStr = OutParams.Find(TEXT("maxPlayerNumPerDS"));
				Loc_ServerInfo.MaxPlayer = MaxPlayerStr ? FCString::Atoi(**MaxPlayerStr) : 10;

				
				TempStructArray.Add(Loc_ServerInfo);
			}
		}
	}
	
	return TempStructArray;
}
