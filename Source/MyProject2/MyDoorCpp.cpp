// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDoorCpp.h"


// Sets default values
AMyDoorCpp::AMyDoorCpp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyDoorCpp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyDoorCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AMyDoorCpp::OpenDoor(float DeltaTime) {
	UE_LOG(LogTemp, Warning, TEXT("Ahoj"));
}