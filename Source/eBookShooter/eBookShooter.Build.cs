// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class eBookShooter : ModuleRules
{
	public eBookShooter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
