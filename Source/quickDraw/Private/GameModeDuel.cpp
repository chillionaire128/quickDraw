// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeDuel.h"
#include "Engine/GameEngine.h"

AGameModeDuel::AGameModeDuel() {
	ElaspedTime = 0;
	RoundStartTime = 1;
	MinDrawTime = 1;
	MaxDrawTime = 4;
	DrawTime = CreateRandomDrawTime(MinDrawTime, MaxDrawTime);
	CurrentState = EGamePhases::Intro;
}

// Called every frame
void AGameModeDuel::Tick(float DeltaTime)
{
	ElaspedTime = ElaspedTime + DeltaTime;
	if (ElaspedTime >= RoundStartTime) {
		CurrentState = EGamePhases::Wait;
	}
	if (ElaspedTime >= DrawTime + RoundStartTime) {
		CurrentState = EGamePhases::Draw;
		SpawnReadyToDrawActor();
	}

	Super::Tick(DeltaTime);
	
}

int AGameModeDuel::GamePhaseToInt() {
	if (CurrentState == EGamePhases::Intro) {
		return 1;
	}
	else if (CurrentState == EGamePhases::Wait) {
		return 2;
	}
	else if (CurrentState == EGamePhases::Draw) {
		return 3;
	}
	else {
		return 4;
	}
	
}

float AGameModeDuel::CreateRandomDrawTime(float min, float max) {
	float random = ((float)rand()) / (float)RAND_MAX;
	float range = max - min;
	return (random * range) + min;
}

bool AGameModeDuel::canDraw() {
	if (CurrentState == EGamePhases::Draw) {
		return true;
	}
	else {
		return false;
	}
}

void AGameModeDuel::SpawnReadyToDrawActor() {
	GetWorld()->SpawnActor<AActor>(ReadyToDrawClass);
}