// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_LAB2GameMode.h"
#include "Galaga_USFX_LAB2Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"

AGalaga_USFX_LAB2GameMode::AGalaga_USFX_LAB2GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_LAB2Pawn::StaticClass();
}

void AGalaga_USFX_LAB2GameMode::BeginPlay()
{
	Super::BeginPlay();

	FVector ubicacionInicialNaves = FVector(10.0f, -20.0f, 200.f);
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		FVector ubicacionActual = ubicacionInicialNaves;
		for (int i = 0; i < 5; i++) {
			ubicacionActual = FVector(ubicacionActual.X, ubicacionActual.Y + 300.0f + i, ubicacionActual.Z);
			ANaveEnemigaCaza* NaveEnemigaCazaActual = World->SpawnActor<ANaveEnemigaCaza>(ubicacionActual, rotacionNave);
			TANavesEnemigasCaza.Add(NaveEnemigaCazaActual);
			//DiferenciaNaves.Add("Nave01", NaveEnemigaCazaActual);
			//DiferenciaNaves["Nave01"]->SetVelocidad(100);
		}

		ubicacionInicialNaves.X = ubicacionInicialNaves.X - 300.0f;

		for (int i = 0; i < 5; i++) {
			ubicacionActual = FVector(ubicacionActual.X, ubicacionActual.Y + 300.0f + i, ubicacionActual.Z);
			ANaveEnemigaEspia* NaveEnemigaEspiaActual = World->SpawnActor<ANaveEnemigaEspia>(ubicacionActual, rotacionNave);
			TANavesEnemigasEspia.Add(NaveEnemigaEspiaActual);
			//DiferenciaNaves.Add("Nave01", NaveEnemigaCazaActual);
			//DiferenciaNaves["Nave01"]->SetVelocidad(100);
		}

	}
}

