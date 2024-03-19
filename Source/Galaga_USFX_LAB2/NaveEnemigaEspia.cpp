// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"


ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Props/SM_Bush.SM_Bush'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

}

void ANaveEnemigaEspia::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaEspia::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();

	//Angulo += Speed * DeltaTime;
	float NuevaX = FMath::RandRange(-20.0f, 80.0f) * DeltaTime;
	float NuevaY = FMath::RandRange(-20.0f, 80.0f) * DeltaTime;
	float NuevaZ = FMath::RandRange(-20.0f, 80.0f) * DeltaTime;


	// Establece la nueva posición
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX , PosicionActual.Y + NuevaY, PosicionActual.Z + NuevaZ);
	SetActorLocation(NuevaPosicion);
	//FVector NewLocation = GetActorLocation() + (Direction * VelocidadMovimiento * DeltaTime); 
	//SetActorLocation(NewLocation); 

}
