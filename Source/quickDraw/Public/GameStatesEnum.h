// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "GameStatesEnum.generated.h"

/**
 * 
 */
//UCLASS()
//class QUICKDRAW_API UGameStatesEnum : public UUserDefinedEnum
//{
//	GENERATED_BODY()
//	
//
//};

#pragma once

UENUM(BlueprintType)
enum class EGameStatesEnum : uint8
{
	ET_None     UMETA(DisplayName = "intro"),
	ET_One   UMETA(DisplayName = "Wait"),
	ET_Two      UMETA(DisplayName = "Draw"),
	ET_Three      UMETA(DisplayName = "Finished"),
};
