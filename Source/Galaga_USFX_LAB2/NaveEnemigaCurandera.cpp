// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCurandera.h"

ANaveEnemigaCurandera::ANaveEnemigaCurandera()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ANaveEnemigaCurandera::BeginPlay()
{
}

void ANaveEnemigaCurandera::Tick(float DeltaTime)
{
}
