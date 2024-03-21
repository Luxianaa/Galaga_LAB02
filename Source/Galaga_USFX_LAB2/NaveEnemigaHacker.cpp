// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaHacker.h"

ANaveEnemigaHacker::ANaveEnemigaHacker()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	nombre= "NaveEnemigaHacker";
}

void ANaveEnemigaHacker::BeginPlay()
{
		Super::BeginPlay(); 
	//velocidad = -100;
	ubicacionActual = GetActorLocation();

}

void ANaveEnemigaHacker::Tick(float DeltaTime)
{ 
	Super::Tick(DeltaTime);
	Mover(DeltaTime);	
}

void ANaveEnemigaHacker::Mover(float DeltaTime)
{
	ubicacionActual = GetActorLocation();
	float NuevaX = velocidad * DeltaTime + ubicacionActual.X;
	FVector NuevaPosicion = FVector(NuevaX, ubicacionActual.Y, ubicacionActual.Z);
	SetActorLocation(NuevaPosicion); 
    /*velocidad = -100;
    ubicacionActual = GetActorLocation();
    float NuevaX = velocidad * DeltaTime + ubicacionActual.X;
    FVector NuevaPosicion = FVector(NuevaX, ubicacionActual.Y, ubicacionActual.Z);
    SetActorLocation(NuevaPosicion);*/

}
