// Copyright Epic Games, Inc. All Rights Reserved.

#include "Assinment1GameMode.h"
#include "Assinment1Pawn.h"

AAssinment1GameMode::AAssinment1GameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AAssinment1Pawn::StaticClass();
}
