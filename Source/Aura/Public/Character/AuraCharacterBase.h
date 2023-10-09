// Copyright Imsko

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

UCLASS(Abstract)
class AURA_API AAuraCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AAuraCharacterBase();

protected:
	virtual void BeginPlay() override;

	// Access tracking and lazy loading
	/**
	 * TObjectPtr provides Access Tracking and Lazy Loading.
	 * Access Tracking: We can track how often a pointer is accessed
	 * or dereferenced.
	 * Lazy Loading: An asset cannot be loaded until needed or used
	 * in the program.
	 */
	UPROPERTY(EditAnywhere, Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;

};
