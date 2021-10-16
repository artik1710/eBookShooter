// Copyright Epic Games, Inc. All Rights Reserved.

#include "eBookShooterGameMode.h"
#include "eBookShooterHUD.h"
#include "eBookShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AeBookShooterGameMode::AeBookShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AeBookShooterHUD::StaticClass();
}
