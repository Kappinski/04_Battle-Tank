// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collision", "Lighting", "Physics"))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float DegreesPerSecond);
	
private:
	UPROPERTY(EditAnywhere, Category = setup)
	float MaxDegressPerSeconds = 20; // Sensible default

	UPROPERTY(EditAnywhere, Category = setup)
	float MaxElevation = 40; // Sensible default

	UPROPERTY(EditAnywhere, Category = setup)
	float MinElevation = 0; // Sensible default
	
};