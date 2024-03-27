// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
//#include "AComponenteMovimiento.h"
#include "NaveEnemigaCaza.generated.h"


/**z
 * 
 */
UCLASS()
class GALAGA_USFX_LAB2_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()
	
protected:

	float cantidadMunicion;
	float tipoMunicion;
	float tipoMovimiento;
	float vida;
	float Radio = 200.0f; // Radio de la circunferencia
	float Angulo = 0.0f; // Ángulo inicial
	float Speed = 6.0f; // Velocidad de rotación

public:
	FORCEINLINE float GetCantidadMunicion() const { return cantidadMunicion; }
	FORCEINLINE float GetTipoMunicion() const { return tipoMunicion; }
	FORCEINLINE float GetTipoMovimiento() const { return tipoMovimiento; }
	FORCEINLINE float GetVida() const { return vida; }
	
	FORCEINLINE void SetCantidadMunicion(float _cantidadMunicion) { cantidadMunicion = _cantidadMunicion; }
	FORCEINLINE void SetTipoMunicion(float _tipoMunicion ) { tipoMunicion = _tipoMunicion; }
	FORCEINLINE void Set(float _tipoMovimiento) { tipoMovimiento = _tipoMovimiento; }
	FORCEINLINE void SetVida(float _vida) { vida = _vida; }

public:
	ANaveEnemigaCaza();

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
