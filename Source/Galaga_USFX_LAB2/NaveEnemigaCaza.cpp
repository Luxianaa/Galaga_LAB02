// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Props/MaterialSphere.MaterialSphere'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	PrimaryActorTick.bCanEverTick = true;

	// Set a default movement speed
	//VelocidadMovimiento = 100.0f; // unidades por segundo 

}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	

}
