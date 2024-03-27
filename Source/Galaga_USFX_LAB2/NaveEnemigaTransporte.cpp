// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Props/SM_TableRound.SM_TableRound'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	//OrbitRadius = 100.0f; // Radio de la órbita
	//OrbitSpeed = 1.0f; // Velocidad de la órbita
	//Angle = 0.0f;
	PrimaryActorTick.bCanEverTick = true;
}



void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
}
