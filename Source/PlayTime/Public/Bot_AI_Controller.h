// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Bot_AI_Controller.generated.h"

/**
 * 
 */
UCLASS()
class PLAYTIME_API ABot_AI_Controller : public AAIController
{
public:
	ABot_AI_Controller();

	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere, Category = AI)
	TObjectPtr<UAIPerceptionComponent> AIPerceptionComponent = nullptr;
	TObjectPtr<class UAISenseConfig_Sight> AISenseConfigSight = nullptr;
	TObjectPtr<class UAISenseConfig_Hearing> AISenseConfigHearing = nullptr;
};
ABot_AI_Controller::ABot_AI_Controller()
{
	//AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>("PerceptionComponent");
	//AISenseConfigSight = CreateDefaultSubobject<UAISenseConfig_Sight>("SenseSight");
	/*AISenseConfigSight->DetectionByAffiliation.bDetectEnemies = true;
	AISenseConfigSight->DetectionByAffiliation.bDetectFriendlies = false;
	AISenseConfigSight->DetectionByAffiliation.bDetectNeutrals = false;

	AISenseConfigHearing = CreateDefaultSubobject<UAISenseConfig_Hearing>("SenseHearing");
	AISenseConfigHearing->DetectionByAffiliation.bDetectEnemies = true;
	AISenseConfigHearing->DetectionByAffiliation.bDetectFriendlies = false;
	AISenseConfigHearing->DetectionByAffiliation.bDetectNeutrals = false;

	AIPerceptionComponent->ConfigureSense(*AISenseConfigSight);
	AIPerceptionComponent->ConfigureSense(*AISenseConfigHearing);
	AIPerceptionComponent->SetDominantSense(AISenseConfigSight);
	// Add an team id. I use e.g enums for the affiliation types
	*/
	AAIController::SetGenericTeamId(FGenericTeamId(1));
}
