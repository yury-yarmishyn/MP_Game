// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MP_Game/Public/Characters/MpCharacter.h"
#include "MpPlayerCharacter.generated.h"

UCLASS()
class MP_GAME_API AMpPlayerCharacter : public AMpCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMpPlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
