// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "MpPlayerState.generated.h"

class UMpAbilitySystemComponent;
class UMpAttributeSet;

/**
 * 
 */
UCLASS()
class MP_GAME_API AMpPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AMpPlayerState();
	
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "GAS")
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	UFUNCTION(BlueprintCallable, BlueprintCallable, Category = "GAS")
	UMpAttributeSet* GetAttributeSet() const;
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
	TObjectPtr<UMpAbilitySystemComponent> AbilitySystemComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
	TObjectPtr<UMpAttributeSet> AttributeSet;
};
