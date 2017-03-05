// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSUdemy.h"
#include "FPSUdemyGameMode.h"
#include "FPSUdemyHUD.h"
#include "FPSUdemyCharacter.h"

AFPSUdemyGameMode::AFPSUdemyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSUdemyHUD::StaticClass();
}
