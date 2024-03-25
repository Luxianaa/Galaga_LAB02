// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaHacker.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB2_API ANaveEnemigaHacker : public ANaveEnemiga
{
	GENERATED_BODY()
protected:
	float Radio = 200.0f; // Radio de la circunferencia
	float Angulo = 0.0f; // Ángulo inicial
	float Speed = 6.0f; // Velocidad de rotación
	
public:
	ANaveEnemigaHacker();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Herencia de NaveEnemiga
	virtual void Mover(float DeltaTime);
private:
	float VelocidadMovimiento;

private:
	int DireccionMovimientoVertical;

};
