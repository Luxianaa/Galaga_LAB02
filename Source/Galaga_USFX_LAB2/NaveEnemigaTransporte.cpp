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

	VelocidadMovimiento = 100.0f;

	DireccionMovimientoVertical = -1;

}

void ANaveEnemigaTransporte::BeginPlay()
{
	Super::BeginPlay();

}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime); 
    float VelocidadVertical = 150.0f; // Puedes ajustar esta velocidad según sea necesario

    // Calcular el desplazamiento vertical para este fotograma
    float DesplazamientoVertical = VelocidadVertical * DeltaTime;

    // Obtener la posición actual de la nave
    FVector PosicionActual = GetActorLocation();

    // Definir los límites superior e inferior de movimiento
    float LimiteSuperior = 1528.0f;
    float LimiteInferior = -1600.0f;

    // Verificar si la nave está moviéndose hacia arriba o hacia abajo
    if (DireccionMovimientoVertical == 1) // Movimiento hacia arriba
    {
        // Mover la nave hacia arriba
        FVector NuevaPosicion = PosicionActual + FVector(0.0f, DesplazamientoVertical, 0.0f);
        if (NuevaPosicion.Y <= LimiteSuperior)
        {
            SetActorLocation(NuevaPosicion);
        }
        else
        {
            // Si alcanza el límite superior, cambiar la dirección de movimiento a hacia abajo
            DireccionMovimientoVertical = -1;
        }
    }
    else // Movimiento hacia abajo
    {
        // Mover la nave hacia abajo
        FVector NuevaPosicion = PosicionActual - FVector(0.0f, DesplazamientoVertical, 0.0f);
        if (NuevaPosicion.Y >= LimiteInferior)
        {
            SetActorLocation(NuevaPosicion);
        }
        else
        {
            // Si alcanza el límite inferior, cambiar la dirección de movimiento a hacia arriba
            DireccionMovimientoVertical = 1;
        }
    }
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{

	Angulo += Speed * DeltaTime;

	// Calcula las nuevas posiciones en x y y
	float NuevaX = GetActorLocation().X + Radio * FMath::Cos(Angulo) * DeltaTime;
	float NuevaY = GetActorLocation().Y + Radio * FMath::Sin(Angulo) * DeltaTime;

	// Establece la nueva posición
	FVector NewLocation = FVector(NuevaX, NuevaY, GetActorLocation().Z);
	SetActorLocation(NewLocation);


	//// Actualiza el ángulo de la órbita
	//Angle += OrbitSpeed * DeltaTime;

	//// Calcula la nueva posición en la órbita
	//float NuevaX = CenterPoint.X + OrbitRadius * FMath::Cos(Angle)* DeltaTime;
	//float NuevaY = CenterPoint.Y + OrbitRadius * FMath::Sin(Angle)*DeltaTime;
	//float NuevaZ = CenterPoint.Z;

	//// Establece la nueva posición de la nave
	//FVector NewLocation = FVector(NuevaX, NuevaY, NuevaZ);
	//SetActorLocation(NewLocation);
}
