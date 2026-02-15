// Fill out your copyright notice in the Description page of Project Settings.


#include "MP_Game/Public/Characters/Enemies/MpEnemyCharacter.h"


// Sets default values
AMpEnemyCharacter::AMpEnemyCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMpEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMpEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMpEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

