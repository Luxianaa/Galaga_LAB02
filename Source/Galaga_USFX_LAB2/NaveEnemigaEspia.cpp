// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"


ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Props/SM_Bush.SM_Bush'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
    PrimaryActorTick.bCanEverTick = true;

    DireccionMovimientoVertical = -1;

}

void ANaveEnemigaEspia::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
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

void ANaveEnemigaEspia::Mover(float DeltaTime)
{
    Angulo += Speed * DeltaTime;

    // Calcula las nuevas posiciones en x y y
    float NuevaX = GetActorLocation().X + Radio * FMath::Cos(Angulo) * DeltaTime;
    float NuevaY = GetActorLocation().Y + Radio * FMath::Sin(Angulo) * DeltaTime;

    // Establece la nueva posición
    FVector NewLocation = FVector(NuevaX, NuevaY, GetActorLocation().Z);
    SetActorLocation(NewLocation);

	
}
