// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGItemRegrowSubsystem.h"

AFGItemRegrowSubsystem::AFGItemRegrowSubsystem() : Super() {
	this->mMaxPerTick = 200;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 1.0;
}
void AFGItemRegrowSubsystem::Tick(float DeltaSeconds){ Super::Tick(DeltaSeconds); }
AFGItemRegrowSubsystem* AFGItemRegrowSubsystem::Get(UWorld* world){ return nullptr; }
AFGItemRegrowSubsystem* AFGItemRegrowSubsystem::Get(UObject* worldContext){ return nullptr; }
void AFGItemRegrowSubsystem::AddPickup( AFGItemPickup* inPickup){ }
void AFGItemRegrowSubsystem::RemovePickup( AFGItemPickup* inPickup){ }
