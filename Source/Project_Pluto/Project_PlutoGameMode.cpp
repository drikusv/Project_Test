// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Project_PlutoGameMode.h"
#include "Project_PlutoCharacter.h"

AProject_PlutoGameMode::AProject_PlutoGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AProject_PlutoCharacter::StaticClass();	
}
