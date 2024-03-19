// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Props/SM_TableRound.SM_TableRound'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	//OrbitRadius = 100.0f; // Radio de la �rbita
	//OrbitSpeed = 1.0f; // Velocidad de la �rbita
	//Angle = 0.0f;

}

void ANaveEnemigaTransporte::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{

	Angulo += Speed * DeltaTime;

	// Calcula las nuevas posiciones en x y y
	float NuevaX = GetActorLocation().X + Radio * FMath::Cos(Angulo) * DeltaTime;
	float NuevaY = GetActorLocation().Y + Radio * FMath::Sin(Angulo) * DeltaTime;

	// Establece la nueva posici�n
	FVector NewLocation = FVector(NuevaX, NuevaY, GetActorLocation().Z);
	SetActorLocation(NewLocation);


	//// Actualiza el �ngulo de la �rbita
	//Angle += OrbitSpeed * DeltaTime;

	//// Calcula la nueva posici�n en la �rbita
	//float NuevaX = CenterPoint.X + OrbitRadius * FMath::Cos(Angle)* DeltaTime;
	//float NuevaY = CenterPoint.Y + OrbitRadius * FMath::Sin(Angle)*DeltaTime;
	//float NuevaZ = CenterPoint.Z;

	//// Establece la nueva posici�n de la nave
	//FVector NewLocation = FVector(NuevaX, NuevaY, NuevaZ);
	//SetActorLocation(NewLocation);
}
