// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_LAB2_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
protected:
	


protected:
	ANaveEnemigaEspia();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void Mover(float DeltaTime);





	
};
