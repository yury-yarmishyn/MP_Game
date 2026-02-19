// Fill out your copyright notice in the Description page of Project Settings.


#include "MP_Game/Public/Characters/MpCharacter.h"

#include "Characters/Player/MpPlayerState.h"
#include "GameplayAbilities/MpAbilitySystemComponent.h"


// Sets default values
AMpCharacter::AMpCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	bReplicates = true;
}

UAbilitySystemComponent* AMpCharacter::GetAbilitySystemComponent() const
{
	return ASC;
}

// Called when the game starts or when spawned
void AMpCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMpCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	
	InitializeGAS();
	ApplyDefaultAttributes();
}

void AMpCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	
	InitializeGAS();
}

void AMpCharacter::InitializeGAS()
{
	AMpPlayerState* PS = GetPlayerState<AMpPlayerState>();
	if (!PS) return;

	ASC = Cast<UMpAbilitySystemComponent>(PS->GetAbilitySystemComponent());
	AS  = PS->GetAttributeSet();

	if (!ASC) return;
	
	ASC->InitAbilityActorInfo(PS, this);
	
	// Add Ability Input Bindings here
	
}

void AMpCharacter::ApplyDefaultAttributes()
{
	if (!HasAuthority()) return;
	if (!ASC || !GE_DefaultAttributes) return;

	FGameplayEffectContextHandle ContextHandle = ASC->MakeEffectContext();
	ContextHandle.AddSourceObject(this);

	const FGameplayEffectSpecHandle Spec = ASC->MakeOutgoingSpec(GE_DefaultAttributes, 1.f, ContextHandle);
	if (Spec.IsValid())
	{
		ASC->ApplyGameplayEffectSpecToSelf(*Spec.Data.Get());
	}
}

// Called every frame
void AMpCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMpCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

