// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Score.generated.h"

UCLASS()
class ASSIGNMENT1_API AScore : public AActor
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "GetScore")
		float GetScore();

	UFUNCTION(BlueprintCallable, Category = "UpdateDistance")
		void UpdateScore(float distance, bool isIt);


public:	
	// Sets default values for this actor's properties
	AScore();
	float score;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
