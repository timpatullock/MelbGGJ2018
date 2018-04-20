// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPP_CupAnimInstance.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "CPP_CupCharacter.generated.h"

UCLASS()
class GGJ2018_API ACPP_CupCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_CupCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite)
	UUserWidget * loseGameWidget = nullptr;
	UPROPERTY(BlueprintReadWrite)
	UUserWidget * winGameWidget = nullptr;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadWrite)
	bool isRotating = false;

	UFUNCTION(BlueprintPure)
	bool IsAnimating() const;

	UPROPERTY(BlueprintReadWrite)
	bool isMoving = false;

	UFUNCTION(BlueprintCallable)
	void ShowLoseWidget();
	
};
