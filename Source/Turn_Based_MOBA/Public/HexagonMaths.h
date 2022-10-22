// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HexagonMaths.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TURN_BASED_MOBA_API UHexagonMaths : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHexagonMaths();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

/**************************************************
* VARIABLES AND VALUES
**************************************************/
	//Distance from the centre of the Hexagon to the corner
	float size = 2;
	//Width of the Hexagon
	float width = size * 2;
	//Height of a hexagon
	float height = sqrt(3) * size;
	//Horizontal distance between two hexagon centres
	float horizontalSpacing = width * (3.f / 4.f);
	//Vertical distance between two hexagon centres
	float verticalSpacing = height;
	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
