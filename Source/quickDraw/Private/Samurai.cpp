// Fill out your copyright notice in the Description page of Project Settings.


#include "Samurai.h"
#include "PaperSpriteComponent.h"

// Sets default values
ASamurai::ASamurai()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PrimarySprite = CreateDefaultSubobject<UPaperSpriteComponent>("PaperSprite");
	
	SlideInStartX = 0;
	SlideInStartY = 0;
}

// Called when the game starts or when spawned
void ASamurai::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASamurai::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASamurai::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASamurai::SlideIn() {
	//GetActorLocation();
	return;
}

