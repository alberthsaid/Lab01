// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.generated.h"

UCLASS()
class BOMBERMANL01_API ABloque : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloque();
	UStaticMeshComponent* MallaBloque;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
	float VelocidadMovimiento;
	UPROPERTY(EditAnywhere)
	float AlturaMaxima;
	UPROPERTY(EditAnywhere)
	float AlturaMinima;
	UPROPERTY(EditAnywhere)
	float VelocidadRotacion;

	FVector PocisionInicial;
	FVector DireccionMovimiento;
	FRotator RotacionInicial;
	};
