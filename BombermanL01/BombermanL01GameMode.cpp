// Copyright Epic Games, Inc. All Rights Reserved.

#include "BombermanL01GameMode.h"
#include "BombermanL01Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"	
#include "Muro.h"

ABombermanL01GameMode::ABombermanL01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABombermanL01GameMode::BeginPlay()
{
	Super::BeginPlay();
	FRotator SpawnRotation(0.0f, 0.0f, 0.0f);
	//ABloque* Bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), SpawnLocation, SpawnRotation);
	for (int i = 0; i < 10; i++)
	{
		//for (int j = 0; j < 10; j++)
		//{
		FVector SpawnLocation(i * 400 - 1740.0f, 40.0f, 130.0f);
		ABloque* Bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), SpawnLocation, SpawnRotation);
		//}
	}
	// Spawn Muro
	for (int i = 0; i < 10; i++)
	{
		FVector SpawnLocation(i * 400 - 1740.0f, 400.0f, 130.0f);
		AMuro* Muro = GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass(), SpawnLocation, SpawnRotation);
	}

}
