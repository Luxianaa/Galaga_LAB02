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

	//const int32 NumeroDeColumnas = 5;
	//const int32 NumeroDeFilas = 5;

	//for (int32 Columna = 0; Columna < NumeroDeColumnas; ++Columna)
	//{
	//	TArray<ANaveEnemigaCaza*>NavesEnColumna;
	//	for (int32 Fila = 0; Fila < NumeroDeFilas;++Fila) 
	//	{ 
	//		FVector SpawnLocation = FVector(Columna * 200.0f,Fila *200.0f, 350.0f);
	//		FRotator SpwanRotation = FRotator::ZeroRotator;

	//		ANaveEnemigaCaza* NuevaNaveCaza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, SpwanRotation);
	//		if (NuevaNaveCaza)
	//		{
	//			//
	//		}
	//		else
	//		{
	//			UE_LOG(LogTemp, Error, TEXT("No se puede crear NE caza. "));

	//		}
	//		NavesEnColumna.Add(NuevaNaveCaza);

	//	}
	//	ColumnaNavesEnemigasCaza.Add(Columna, NavesEnColumna);

	//	
	//	
	//}

	FVector ubicacionInicialNaves = FVector(100.0f, -20.0f, 200.f);
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

		ubicacionInicialNaves.Y = ubicacionInicialNaves.Y - 100.0f ;
		for (int j = 0; j < 5; j++) {
			ubicacionActual.Y= ubicacionActual.X - 300.0f * j;//modify the distance beetwen the same 5 objs
			

			ANaveEnemigaEspia* NaveEnemigaEspiaActual = World->SpawnActor<ANaveEnemigaEspia>(ubicacionActual, rotacionNave);
			TANavesEnemigasEspia.Add(NaveEnemigaEspiaActual);

		}
	}
}

