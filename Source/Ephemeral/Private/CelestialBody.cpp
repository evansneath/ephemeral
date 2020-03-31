// Fill out your copyright notice in the Description page of Project Settings.


#include "CelestialBody.h"

// Sets default values for this component's properties
UCelestialBody::UCelestialBody() :
    HeliocentricLocation(500.0, 0.0, 0.0),
    HeliocentricRotation()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCelestialBody::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCelestialBody::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    GetOwner()->SetActorLocation(HeliocentricLocation);
}

