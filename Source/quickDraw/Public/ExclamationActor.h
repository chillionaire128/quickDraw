// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExclamationActor.generated.h"

class UPaperSpriteComponent;

UCLASS()
class QUICKDRAW_API AExclamationActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExclamationActor();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Sprite)
	UPaperSpriteComponent* PrimarySprite;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
