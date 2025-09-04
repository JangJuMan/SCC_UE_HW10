// Copyright Epic Games, Inc. All Rights Reserved.

#include "SCC_UE_HW10GameMode.h"
#include "SCC_UE_HW10Character.h"
#include "UObject/ConstructorHelpers.h"

ASCC_UE_HW10GameMode::ASCC_UE_HW10GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
