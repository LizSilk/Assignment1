// Fill out your copyright notice in the Description page of Project Settings.


#include "Score.h"

// Sets default values
AScore::AScore()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AScore::BeginPlay()
{
	Super::BeginPlay();
	
}


float AScore::GetScore()
{
	return score;
}

void AScore::UpdateScore(float distance, bool isIt)
{
	UWorld* MyWorld = GetWorld();
	FString CurrentMapName = MyWorld->GetMapName();
	if (CurrentMapName == "MainLevelMap" && !isIt) {
		score += 1000 / distance;
	}
}


// Called every frame
void AScore::Tick(float DeltaTime)
{
	
	//every tick, if we're on the main level, update the score, giving more points the closer the player is to the enemy
	

	Super::Tick(DeltaTime);

}

