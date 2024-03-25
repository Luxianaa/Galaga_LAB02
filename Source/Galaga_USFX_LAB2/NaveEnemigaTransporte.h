// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB2_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int capacidadCarga;
	int estadoCarga;	//indicador si la nave esta completa o vacia
protected:
	int tiempoDescarga;
	int tipoDescarga;
	float vida;
	float puntaje;
	FVector CenterPoint; // Punto central alrededor del cual orbitan las naves
	/*float OrbitRadius;
	float OrbitSpeed;
	float Angle;*/
	float Radio = 200.0f; // Radio de la circunferencia
	float Angulo = 0.0f; // Ángulo inicial
	float Speed = 6.0f; // Velocidad de rotación
public: //Accesory Methods
	FORCEINLINE int GetCapacidadCarga() const { return capacidadCarga; }
	FORCEINLINE int GetEstadoCarga() const { return estadoCarga; }
	FORCEINLINE int GetTiempoDescarga() const { return tiempoDescarga; }
	FORCEINLINE int GetTipoDescarga() const { return tipoDescarga; }
	FORCEINLINE float GetVida() const { return vida; }
	FORCEINLINE float GetPuntaje() const { return puntaje; }

	FORCEINLINE void SetCapacidadCarga(int _capacidadCarga) { capacidadCarga = _capacidadCarga; }
	FORCEINLINE void SetEstadoCarga(int _estadoCarga) { estadoCarga = _estadoCarga; }
	FORCEINLINE void SetTiempoDescarga(int _tiempoDescarga) { tiempoDescarga = _tiempoDescarga; }
	FORCEINLINE void SetTipoDescarga(int _tipoDescarga) { tipoDescarga = _tipoDescarga; }
	FORCEINLINE void SetVida(float _vida) { vida = _vida; }
	FORCEINLINE void SetPuntaje(float _puntaje) { puntaje = _puntaje; }

public:
	ANaveEnemigaTransporte();

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
