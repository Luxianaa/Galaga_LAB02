// Fill out your copyright notice in the Description page of Project Settings.


#include "AComponenteMovimiento.h"

// Sets default values for this component's properties
UAComponenteMovimiento::UAComponenteMovimiento()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	//velocidad de todas las naves
	MovimientoNaves = 4 ;
	//limite en el viewPort
	limiteInferiorY = -1560.0f;
}
	


// Called when the game starts
void UAComponenteMovimiento::BeginPlay()
{
	Super::BeginPlay();

	// ...

	
}


// Called every frame
void UAComponenteMovimiento::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	AActor* Parent = GetOwner();
	if (Parent)
	{
		// Get the current location of the owner
		//encuentra la posicion actual del AActor
		FVector CurrentLocation = Parent->GetActorLocation();

		float MovimientoY = MovimientoNaves * DeltaTime;

		// Calculate the new position based on the movement speed
		//Calcula la nueva posicion basada en la velocidad de movimiento(Y hacia la Izquierda)
		FVector NewLocation = FVector(CurrentLocation.X, CurrentLocation.Y - MovimientoNaves, CurrentLocation.Z);
		// Muestra  la nueva position
		Parent->SetActorLocation(NewLocation);

		//Limite del mapa
		if (NewLocation.Y < limiteInferiorY)
		{
			Parent->SetActorLocation(FVector(CurrentLocation.X, 1600.0f, CurrentLocation.Z));

		}


	}
}

