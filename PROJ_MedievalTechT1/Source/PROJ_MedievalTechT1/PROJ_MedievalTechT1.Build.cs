// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PROJ_MedievalTechT1 : ModuleRules
{
	public PROJ_MedievalTechT1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "OnlineSubsystem", "OnlineSubsystemSteam" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
