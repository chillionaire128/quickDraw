// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeDuel.generated.h"

/**
 * 
 */

class ASamurai;

UCLASS()
class QUICKDRAW_API AGameModeDuel : public AGameModeBase
{
	GENERATED_BODY()

public:

	enum class EGamePhases : uint8
	{
		Intro,
		Wait,
		Draw,
		Finish
	};

	EGamePhases CurrentState;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float ElaspedTime;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float RoundStartTime;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float MinDrawTime;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float MaxDrawTime;

	float DrawTime;

	UFUNCTION(BlueprintCallable)
	int GamePhaseToInt();

	UFUNCTION(BlueprintCallable)
	bool canDraw();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ReadyToDrawClass;

	UPROPERTY(EditDefaultsOnly, Category = "Pawn")
	TObjectPtr<ASamurai> Player;

	UPROPERTY(EditDefaultsOnly, Category = "Pawn")
	TObjectPtr<ASamurai> Npc;
	

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SetGameFinished();

	UFUNCTION(BluePrintCallable)
	void AttackedSuccesfully(bool isPlayer);

	AGameModeDuel();

private:
	static float CreateRandomDrawTime(float min, float max);
	
	void SpawnReadyToDrawActor();

};
