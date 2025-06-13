// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"

// Sets default values
ABloque::ABloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	MallaBloque->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MeshAsset.Succeeded())
	{
		MallaBloque->SetStaticMesh(MeshAsset.Object);
		MallaBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		MallaBloque->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
	DireccionMovimiento = FVector(0.0f, 0.0f, 2.0f); // Move up
	VelocidadMovimiento = 30.0f;
	AlturaMaxima = 300.0f;
	AlturaMinima = 130.0f;
	VelocidadRotacion = 200.0f;
	RotacionInicial = FRotator(0.0f, 0.0f, 2.0f);

}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();
	for (int i = 0; i < 10; ++i)
	{
		FVector Posicion = FVector(i * 200, 400, 130);
		ABloque* NuevoBloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), Posicion, FRotator::ZeroRotator);
	}

	
}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	PocisionInicial += DireccionMovimiento * VelocidadMovimiento * DeltaTime;
	if (PocisionInicial.Z >= AlturaMaxima)
	{
		DireccionMovimiento.Z = -3.0f;
	}
	else if (PocisionInicial.Z <= AlturaMinima)
	{
		DireccionMovimiento.Z = 4.0f;
	}
	SetActorLocation(PocisionInicial);

	RotacionInicial += FRotator(0.0f, VelocidadRotacion * DeltaTime, 0.0f);
	if (RotacionInicial.Yaw >= 360.0f)
	{
		RotacionInicial.Yaw = 0.0f;
	}
	SetActorRotation(RotacionInicial);

}

