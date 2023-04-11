// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUpActor.h"
#include "DrawDebugHelpers.h"
#include "Components/SphereComponent.h"


// Sets default values
APickUpActor::APickUpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereRadius = 100.0f;

	MyCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	MyCollisionSphere->InitSphereRadius(SphereRadius);
	MyCollisionSphere->SetCollisionProfileName("Trigger");
	RootComponent = MyCollisionSphere;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	MyMesh->SetupAttachment(RootComponent);

	MyCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &APickUpActor::OnOverlapBegin);

}

// Called when the game starts or when spawned
void APickUpActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickUpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DrawDebugSphere(GetWorld(), GetActorLocation(), SphereRadius, 20, FColor::Purple, false, -1, 0, 1);

}
void APickUpActor::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if (OtherActor->ActorHasTag("Player"))
	{
		UProperty* HealthProperty = OtherActor->GetClass()->FindPropertyByName("Health");
		if (HealthProperty)
		{
			// The OtherActor has a "Health" variable, so we can set its value
			float* HealthValuePtr = HealthProperty->ContainerPtrToValuePtr<float>(OtherActor);
			*HealthValuePtr = 50.f;

			// Log the new health value of the OtherActor
			UE_LOG(LogTemp, Warning, TEXT("OtherActor's health is now %f"), *HealthValuePtr);
		}

		Destroy();
	}
}

