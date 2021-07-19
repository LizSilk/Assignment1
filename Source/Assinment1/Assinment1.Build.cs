// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Assinment1 : ModuleRules
{
	public Assinment1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
