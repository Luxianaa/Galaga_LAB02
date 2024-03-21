// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCurandera.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB2_API ANaveEnemigaCurandera : public ANaveEnemiga
{
	GENERATED_BODY()
	
protected:
	float curacion;
	float cantidadCuracion;
	float tiempoCuracion;
	float cantidadCuracionTotal;
public:

	FORCEINLINE float GetCuracion() const { return curacion; }
	FORCEINLINE float GetCantidadCuracion() const { return cantidadCuracion; }
	FORCEINLINE float GetTiempoCuracion() const { return tiempoCuracion; }
	FORCEINLINE float GetCantidadCuracionTotal() const { return cantidadCuracionTotal; }	

	FORCEINLINE void SetTiempoCuracion(float _tiempoCuracion) { tiempoCuracion = _tiempoCuracion; }
	FORCEINLINE void SetCantidadCuracionTotal(float _cantidadCuracionTotal) { cantidadCuracionTotal = _cantidadCuracionTotal; }
	FORCEINLINE void SetCantidadCuracion(float _cantidadCuracion) { cantidadCuracion = _cantidadCuracion; }	
	FORCEINLINE void SetCuracion(float _curacion) { curacion = _curacion; }		
	
public:
	ANaveEnemigaCurandera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	//virtual void Mover(float DeltaTime);
};
