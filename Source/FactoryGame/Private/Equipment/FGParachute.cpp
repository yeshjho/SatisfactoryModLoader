// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGParachute.h"
#include "Equipment/FGEquipment.h"
#include "Net/UnrealNetwork.h"

AFGParachute::AFGParachute() : Super() {
	this->mParachuteSettings = nullptr;
	this->mUseDistanceOverride = 2000.0;
	this->mIsDeployed = false;
	this->mEquipmentSlot = EEquipmentSlot::ES_BACK;
}
void AFGParachute::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGParachute, mIsDeployed);
}
void AFGParachute::Tick(float DeltaSeconds){ Super::Tick(DeltaSeconds); }
void AFGParachute::UnEquip(){ }
void AFGParachute::Input_Deploy(const FInputActionValue& actionValue){ }
void AFGParachute::Input_UnDeploy(const FInputActionValue& actionValue){ }
void AFGParachute::Deploy(){ }
void AFGParachute::StopDeploy(){ }
void AFGParachute::AddEquipmentActionBindings(){ }
float AFGParachute::GetCharacterUseDistanceOverride() const{ return float(); }
void AFGParachute::Server_Deploy_Implementation(){ }
void AFGParachute::Server_StopDeploy_Implementation(){ }
void AFGParachute::Client_NotifyDeployFailed_Implementation(){ }
bool AFGParachute::AttemptDeployLocal(){ return bool(); }
void AFGParachute::StopDeployLocal(){ }
void AFGParachute::Authority_SetDeployed(bool isDeployedNow){ }
void AFGParachute::OnRep_IsDeployed(){ }
