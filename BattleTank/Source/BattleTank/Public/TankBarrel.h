// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max downward speed, and +1 is max upward speed
	void Elevate(float RelativeSpeed);
	
private:
	UPROPERTY(EditAnywhere, Category = setup)
	float MaxDegreesPerSecond = 5; // Sensible default

	UPROPERTY(EditAnywhere, Category = setup)
	float MaxElevationDegrees = 40; // Sensible default

	UPROPERTY(EditAnywhere, Category = setup)
	float MinElevationDegrees = 0; // Sensible default
	
};
