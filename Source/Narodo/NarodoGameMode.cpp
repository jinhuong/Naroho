// Copyright Epic Games, Inc. All Rights Reserved.

#include "NarodoGameMode.h"
#include "NarodoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANarodoGameMode::ANarodoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
