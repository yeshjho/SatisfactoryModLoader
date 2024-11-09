// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPipeConnectionComponent.h"
#include "Net/UnrealNetwork.h"

UFGPipeConnectionComponentBase::UFGPipeConnectionComponentBase() : Super() {
	this->mPipeConnectionType = EPipeConnectionType::PCT_ANY;
	this->mConnectorClearance = 0.0;
	this->mConnectedComponent = nullptr;
	this->mDisallowSnappingTo = false;
	this->bNetAddressable = true;
	this->SetIsReplicatedByDefault(true);
}
void UFGPipeConnectionComponentBase::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGPipeConnectionComponentBase, mConnectedComponent);
}
void UFGPipeConnectionComponentBase::OnComponentDestroyed(bool isDestroyingHierarchy){ }
void UFGPipeConnectionComponentBase::EndPlay(const EEndPlayReason::Type endPlayReason){ Super::EndPlay(endPlayReason); }
void UFGPipeConnectionComponentBase::SetConnection( UFGPipeConnectionComponentBase* toComponent){ }
void UFGPipeConnectionComponentBase::ClearConnection(){ }
bool UFGPipeConnectionComponentBase::IsConnected() const{ return bool(); }
bool UFGPipeConnectionComponentBase::CanSnapTo(UFGPipeConnectionComponentBase* otherConnection) const{ return bool(); }
bool UFGPipeConnectionComponentBase::CanConnectTo(UFGPipeConnectionComponentBase* otherConnection) const{ return bool(); }
bool UFGPipeConnectionComponentBase::CheckCompatibility(UFGPipeConnectionComponentBase* otherConnection,  AFGHologram* buildStepOwner){ return bool(); }
FVector UFGPipeConnectionComponentBase::GetConnectorLocation(bool withClearance) const{ return FVector(); }
UFGPipeConnectionComponentBase* UFGPipeConnectionComponentBase::FindCompatibleOverlappingConnection( UFGPipeConnectionComponentBase* component, const FVector& location, const AActor* priorityActor, float radius){ return nullptr; }
UFGPipeConnectionComponentBase* UFGPipeConnectionComponentBase::FindOverlappingConnection( UFGPipeConnectionComponentBase* component, const FVector& location, const AActor* priorityActor, float radius){ return nullptr; }
void UFGPipeConnectionComponentBase::UpdateClientCachedConnection(){ }
UFGPipeConnectionComponent::UFGPipeConnectionComponent() : Super() {
	this->mConnectionInventory = nullptr;
	this->mPipeNetworkID = -1;
	this->mFluidDescriptor = nullptr;
}
void UFGPipeConnectionComponent::BeginPlay(){ Super::BeginPlay(); }
void UFGPipeConnectionComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGPipeConnectionComponent, mPipeNetworkID);
	DOREPLIFETIME(UFGPipeConnectionComponent, mFluidDescriptor);
}
bool UFGPipeConnectionComponent::CheckCompatibility(UFGPipeConnectionComponentBase* otherConnection,  AFGHologram* buildStepOwner){ return bool(); }
void UFGPipeConnectionComponent::ClearConnection(){ }
UFGPipeConnectionComponent* UFGPipeConnectionComponent::GetPipeConnection() const{ return nullptr; }
void UFGPipeConnectionComponent::SetFluidDescriptor(TSubclassOf<  UFGItemDescriptor > itemDescriptor){ }
TSubclassOf< class UFGItemDescriptor > UFGPipeConnectionComponent::GetFluidDescriptor() const{ return TSubclassOf<class UFGItemDescriptor>(); }
void UFGPipeConnectionComponent::SetInventory( UFGInventoryComponent* inventory){ }
void UFGPipeConnectionComponent::SetInventoryAccessIndex(int32 index){ }
int32 UFGPipeConnectionComponent::Factory_PushPipeOutput(float dt, const FInventoryStack& stack){ return int32(); }
bool UFGPipeConnectionComponent::Factory_PullPipeInput(float dt, FInventoryStack& out_stack, TSubclassOf< UFGItemDescriptor > type, int32 maxQuantity){ return bool(); }
int32 UFGPipeConnectionComponent::Factory_Internal_PushPipeOutput(float dt, const FInventoryStack& stack){ return int32(); }
bool UFGPipeConnectionComponent::Factory_Internal_PullPipeInput(float dt, FInventoryStack& out_stack, TSubclassOf< UFGItemDescriptor > type, int32 maxQuantity){ return bool(); }
void UFGPipeConnectionComponent::SetPipeNetworkID(int32 networkID){ }
void UFGPipeConnectionComponent::OnRep_FluidDescriptor(){ }
