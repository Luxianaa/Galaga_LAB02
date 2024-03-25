// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_LAB2GameMode.h"
#include "Galaga_USFX_LAB2Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaHacker.h"

AGalaga_USFX_LAB2GameMode::AGalaga_USFX_LAB2GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_LAB2Pawn::StaticClass();
}

void AGalaga_USFX_LAB2GameMode::BeginPlay()
{
	Super::BeginPlay();
	//FVector ColocacionInicialNaves = FVector(-600.0f, -200.0f, 270.f);
	//FVector ubicacionInicialNaves02 = FVector(700.0f, 10.0f, 200.0f); 
	FVector ubicacionInicialNaves = FVector(51.0f, 570.0f, 200.0f);
		//FVector(100.0f, -20.0f, 200.f);
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		FVector ubicacionActual = ubicacionInicialNaves;

		// Spawn de Naves Enemigas de tipo Caza
		for (int i = 0; i < 5; i++) {
			ubicacionActual = FVector(ubicacionInicialNaves.X, ubicacionInicialNaves.Y + 300.0f * i, ubicacionInicialNaves.Z);
			ANaveEnemigaCaza* NaveEnemigaCazaActual = World->SpawnActor<ANaveEnemigaCaza>(ubicacionActual, rotacionNave);
			TANavesEnemigasCaza.Add(NaveEnemigaCazaActual);
		}

		// Resetear ubicación para Naves Enemigas de tipo Transporte
		ubicacionActual.X = ubicacionInicialNaves.X - 250.0f;

		// Spawn de Naves Enemigas de tipo Transporte
		for (int j = 0; j < 5; j++) {
			ubicacionActual.Y = ubicacionInicialNaves.Y + 300.0f * (float)j;
			ANaveEnemigaTransporte* NaveEnemigaTransporteActual = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionActual, rotacionNave);
			TANavesEnemigasTransporte.Add(NaveEnemigaTransporteActual);
		}
		ubicacionActual.X = ubicacionInicialNaves.X - 500.0f;
		for (int i = 0; i < 5; i++) {
			ubicacionActual.Y = ubicacionInicialNaves.Y + 300.0f * i;
		    ANaveEnemigaHacker* NaveEnemigaHackerActual = World->SpawnActor<ANaveEnemigaHacker>(ubicacionActual, rotacionNave);
			TANavesEnemigas.Add(NaveEnemigaHackerActual);
		}
		ubicacionActual.X = ubicacionInicialNaves.X - 750.0f;
		for (int j = 0; j < 5; j++) {

			ubicacionActual.Y = ubicacionInicialNaves.Y + 300.0f * j;
			ANaveEnemigaEspia* NaveEnemigaEspiaActual = World->SpawnActor<ANaveEnemigaEspia>(ubicacionActual, rotacionNave);
			TANavesEnemigasEspia.Add(NaveEnemigaEspiaActual);
		}

	}





		////FVector ColocacionActual = ColocacionInicialNaves;
		//FVector ubicacionActual = ubicacionInicialNaves;

		//for (int i = 0; i < 5; i++) {

		//	//ColocacionActual = FVector(ColocacionActual.X  , ColocacionActual.Y + 300 , ColocacionActual.Z);
		//	ubicacionActual = FVector(ubicacionActual.X, ubicacionActual.Y + 300.0f + i, ubicacionActual.Z); 
		//	ANaveEnemigaHacker* NaveEnemigaHackerActual = World->SpawnActor<ANaveEnemigaHacker>(ubicacionActual, rotacionNave);
		//	TANavesEnemigas.Add(NaveEnemigaHackerActual);

		//	//FString nombre04 = NaveEnemigaHackerActual->GetNombre();

		//	//FString nombreNave04 = FString::Printf(TEXT("%s %d"), *nombre04, i);
		//	//Mensaje en pantalla
		//	//if (GEngine)
		//	//{
		//	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, nombreNave04);
		//	//}

		//	//TMapCambiarVelocidad.Add(nombreNave04, NaveEnemigaHackerActual);
		//	//TMapCambiarVelocidad[nombreNave04]->GetVelocidad();//acceder
		//	//TMapCambiarVelocidad[nombreNave04]->SetVelocidad(100);//cambiar
		//	
		//}
		//ubicacionInicialNaves.X = ubicacionInicialNaves.X - 300.0f;

		//for (int i = 0; i < 5; i++) {
		//	ubicacionActual = FVector(ubicacionActual.X, ubicacionActual.Y + 300.0f + i, ubicacionActual.Z);
		//	ANaveEnemigaCaza* NaveEnemigaCazaActual = World->SpawnActor<ANaveEnemigaCaza>(ubicacionActual, rotacionNave);
		//	TANavesEnemigasCaza.Add(NaveEnemigaCazaActual);
		//	
		//}
		//ubicacionActual.X = ubicacionActual.X - 300.0f * i;//modify the distance beetwen the same 5 objs
		//for (int j = 0; j < 5; j++) {
		//	
		//		

		//	ANaveEnemigaEspia* NaveEnemigaEspiaActual = World->SpawnActor<ANaveEnemigaEspia>(ubicacionActual, rotacionNave);
		//	TANavesEnemigasEspia.Add(NaveEnemigaEspiaActual);

		//	//ANaveEnemigaTransporte* NaveEnemigaTransporteActual = World->SpawnActor<ANaveEnemigaCaza>(ubicacionActual, rotacionNave);
		//	ubicacionActual.X = ubicacionActual.X - 300.0f * k;//modify the distance beetwen the same 5 objs
		//	for (int k = 0; k < 5; ++k)
		//	{
		//		ubicacionActual = FVector(ubicacionActual.X, ubicacionActual.Y + 300 + k, ubicacionActual.Z); 
		//		ANaveEnemigaTransporte* NaveEnemigaTransporteActual = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionActual, rotacionNave); 
		//		TANavesEnemigasTransporte.Add(NaveEnemigaTransporteActual); 

		//	} 
		//}
		////FVector ubicacionActual = ubicacionInicialNaves;
		//



}

