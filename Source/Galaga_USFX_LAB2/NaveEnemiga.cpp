// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent = mallaNaveEnemiga;
	

	//// Inicializa el componente de movimiento de naves
	MovimientoNavesComponent = CreateDefaultSubobject<UAComponenteMovimiento>(TEXT("MovimientoNavesComponente"));

	//// Establece el componente de movimiento como tickeable
	MovimientoNavesComponent->PrimaryComponentTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//Angulo += Speed * DeltaTime;

	//// Calcula las nuevas posiciones en x y y
	//float NuevaX = GetActorLocation().X + Radio * FMath::Cos(Angulo) * DeltaTime;
	//float NuevaY = GetActorLocation().Y + Radio * FMath::Sin(Angulo) * DeltaTime;

	//// Establece la nueva posición
	//FVector NewLocation = FVector(NuevaX, NuevaY, GetActorLocation().Z);
	//SetActorLocation(NewLocation);

	MovimientoNavesComponent->TickComponent(DeltaTime, ELevelTick::LEVELTICK_TimeOnly, nullptr);

}

