// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_LAB2GameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaCaza;


UCLASS(MinimalAPI)
class AGalaga_USFX_LAB2GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_LAB2GameMode();
protected:
	virtual void BeginPlay() override;

public:
	//TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;

	//TMap<FString, ANaveEnemiga*> DiferenciaNaves;
};



