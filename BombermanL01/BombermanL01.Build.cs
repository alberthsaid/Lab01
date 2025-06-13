// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BombermanL01 : ModuleRules
{
	public BombermanL01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
