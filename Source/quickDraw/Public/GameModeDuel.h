// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeDuel.generated.h"

/**
 * 
 */
UCLASS()
class QUICKDRAW_API AGameModeDuel : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float ElaspedTime;

	virtual void Tick(float DeltaTime) override;

	AGameModeDuel();
};
