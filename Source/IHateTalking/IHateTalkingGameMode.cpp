// Copyright Epic Games, Inc. All Rights Reserved.

#include "IHateTalkingGameMode.h"
#include "IHateTalkingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIHateTalkingGameMode::AIHateTalkingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
