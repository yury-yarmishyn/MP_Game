// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "MpCharacter.generated.h"

class UMpAbilitySystemComponent;
class UMpAttributeSet;
class UGameplayEffect;

UCLASS()
class MP_GAME_API AMpCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMpCharacter();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	
	void InitializeGAS();
	void ApplyDefaultAttributes();

	UPROPERTY()
	TObjectPtr<UMpAbilitySystemComponent> ASC;

	UPROPERTY()
	TObjectPtr<UMpAttributeSet> AS;
	
	UPROPERTY(EditDefaultsOnly, Category="GAS")
	TSubclassOf<UGameplayEffect> GE_DefaultAttributes;
	
};
