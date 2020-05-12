// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstDemoGameMode.h"
#include "FirstDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstDemoGameMode::AFirstDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
