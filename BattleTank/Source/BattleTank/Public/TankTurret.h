// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// 1 for clockwise and -1 for counterclockwise
	void Rotate(float RelativeSpeed);
	
	UPROPERTY(EditAnywhere, Category = setup)
	float MaxDegreesPerSecond = 20;	// Sensible default value
	
};
