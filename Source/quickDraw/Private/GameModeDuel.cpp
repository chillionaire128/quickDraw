// Fill out your copyright notice in the Description page of Project Settings.

#include "Engine/GameEngine.h"
#include "GameModeDuel.h"

AGameModeDuel::AGameModeDuel() {
	ElaspedTime = 0;
	RoundStartTime = 1;
	MinDrawTime = 1;
	MaxDrawTime = 4;
	DrawTime = createRandomDrawTime(MinDrawTime, MaxDrawTime);
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
	}

	Super::Tick(DeltaTime);
	
}

FString AGameModeDuel::GamePhaseToString() {
	if (CurrentState == EGamePhases::Intro) {
		return "intro";
	}
	else if (CurrentState == EGamePhases::Wait) {
		return "wait";
	}
	else if (CurrentState == EGamePhases::Draw) {
		return "Draw";
	}
	else {
		return "Finish";
	}
	
}

float AGameModeDuel::createRandomDrawTime(float min, float max) {
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