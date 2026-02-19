// Fill out your copyright notice in the Description page of Project Settings.


#include "MP_Game/Public/Characters/Player/MpPlayerState.h"
#include "GameplayAbilities/MpAbilitySystemComponent.h"
#include "GameplayAbilities/MpAttributeSet.h"


AMpPlayerState::AMpPlayerState()
{
	SetNetUpdateFrequency(100.f);
	
	AbilitySystemComponent = CreateDefaultSubobject<UMpAbilitySystemComponent>("ASC");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	
	AttributeSet = CreateDefaultSubobject<UMpAttributeSet>("AttributeSet");
}

UAbilitySystemComponent* AMpPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UMpAttributeSet* AMpPlayerState::GetAttributeSet() const
{
	return AttributeSet;
}
