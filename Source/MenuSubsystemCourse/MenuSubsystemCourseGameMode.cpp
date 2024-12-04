// Copyright Epic Games, Inc. All Rights Reserved.

#include "MenuSubsystemCourseGameMode.h"
#include "MenuSubsystemCourseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMenuSubsystemCourseGameMode::AMenuSubsystemCourseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
