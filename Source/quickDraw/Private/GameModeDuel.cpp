// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeDuel.h"

AGameModeDuel::AGameModeDuel() {
	ElaspedTime = 0;
}

// Called every frame
void AGameModeDuel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ElaspedTime = ElaspedTime + DeltaTime;
}