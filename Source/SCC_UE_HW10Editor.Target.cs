// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SCC_UE_HW10EditorTarget : TargetRules
{
	public SCC_UE_HW10EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;
		ExtraModuleNames.Add("SCC_UE_HW10");
		ExtraModuleNames.Add("Test");	// JM : 모듈 추가
		ExtraModuleNames.Add("Temporary");	// JM : 플러그인 모듈 추가
	}
}
