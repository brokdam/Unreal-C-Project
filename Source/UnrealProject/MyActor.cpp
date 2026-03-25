// MyActor.cpp

#include "MyActor.h"

AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
	FVector Mylocation = FVector(0.0f, 50.0f, 0.0f);
	SetActorLocation(Mylocation);

	UE_LOG(LogTemp, Warning, TEXT("시작 위치: %s"), *Mylocation.ToString());
}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

