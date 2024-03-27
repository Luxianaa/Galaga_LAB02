// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaHacker.h"

ANaveEnemigaHacker::ANaveEnemigaHacker()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	nombre= "NaveEnemigaHacker";
    PrimaryActorTick.bCanEverTick = true;
}


void ANaveEnemigaHacker::Tick(float DeltaTime)
{ 
	Super::Tick(DeltaTime);
	
}

void ANaveEnemigaHacker::Mover(float DeltaTime)
{
}
