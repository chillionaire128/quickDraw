// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Samurai.generated.h"

class UPaperSpriteComponent;
class UPaperSprite;

UCLASS()
class QUICKDRAW_API ASamurai : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASamurai();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Sprite)
	UPaperSpriteComponent* PrimarySprite;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Sprite)
	UPaperSpriteComponent* FailureSprite;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Sprite)
	UPaperSpriteComponent* DefeatedSprite;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Defeated();
};
