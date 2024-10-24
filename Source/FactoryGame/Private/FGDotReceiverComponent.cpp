// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDotReceiverComponent.h"

UFGDotReceiverComponent::UFGDotReceiverComponent() : Super() {
	this->PrimaryComponentTick.TickGroup = ETickingGroup::TG_DuringPhysics;
	this->PrimaryComponentTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryComponentTick.bTickEvenWhenPaused = false;
	this->PrimaryComponentTick.bCanEverTick = true;
	this->PrimaryComponentTick.bStartWithTickEnabled = false;
	this->PrimaryComponentTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryComponentTick.TickInterval = 0.0;
}
void UFGDotReceiverComponent::BeginPlay(){ Super::BeginPlay(); }
void UFGDotReceiverComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction){ }
void UFGDotReceiverComponent::RegisterActiveDOT(TSubclassOf<  UFGDamageOverTime > DotClass, AActor* SourceActor){ }
void UFGDotReceiverComponent::UnregisterActiveDOT(TSubclassOf<  UFGDamageOverTime > DotClass, AActor* SourceActor){ }
void UFGDotReceiverComponent::ClearAllDOTs(){ }
void UFGDotReceiverComponent::UpdateTickState(){ }
FOnDotReceiverCreated UFGDotReceiverComponent::OnDOTReceiverCreated = FOnDotReceiverCreated();
