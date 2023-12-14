// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class PROJ_MedievalTechT1Target : TargetRules
{
	public PROJ_MedievalTechT1Target( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;
		
		bUsesSteam = true;
		
		ExtraModuleNames.Add("PROJ_MedievalTechT1");
	}
}
