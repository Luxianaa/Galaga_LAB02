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
};
