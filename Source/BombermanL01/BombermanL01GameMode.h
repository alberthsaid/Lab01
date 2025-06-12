// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BombermanL01GameMode.generated.h"

UCLASS(minimalapi)
class ABombermanL01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABombermanL01GameMode();\

protected:
	virtual void BeginPlay() override;
};



