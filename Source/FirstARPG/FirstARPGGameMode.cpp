// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstARPGGameMode.h"
#include "FirstARPGPlayerController.h"
#include "FirstARPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstARPGGameMode::AFirstARPGGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AFirstARPGPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}