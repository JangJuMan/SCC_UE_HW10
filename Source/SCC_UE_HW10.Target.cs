// SCC_UE_HW10.Target.cs

using UnrealBuildTool;
using System.Collections.Generic;

public class SCC_UE_HW10Target : TargetRules
{
	public SCC_UE_HW10Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;
		ExtraModuleNames.Add("SCC_UE_HW10");
		ExtraModuleNames.Add("Test");		// JM : 모듈 추가
		ExtraModuleNames.Add("Temporary");	// JM : 플러그인 모듈 추가
	}
}
