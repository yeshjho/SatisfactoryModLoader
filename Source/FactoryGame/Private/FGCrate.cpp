// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCrate.h"
#include "Net/UnrealNetwork.h"

AFGCrate::AFGCrate() : Super() {
	this->mCrateType = EFGCrateType::CT_None;
	this->mCompassMaterial = nullptr;
	this->mMapText = INVTEXT("");
	this->mDismantleCrateText = INVTEXT("");
	this->mDeathCrateText = INVTEXT("");
	this->mCrateIcon = nullptr;
	this->mDismantleCrateIcon = nullptr;
	this->mDeathCrateIcon = nullptr;
	this->mInventory = nullptr;
}
void AFGCrate::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGCrate, mCrateType);
	DOREPLIFETIME(AFGCrate, mInventory);
}
void AFGCrate::PostActorCreated(){ Super::PostActorCreated(); }
void AFGCrate::BeginPlay(){ Super::BeginPlay(); }
void AFGCrate::EndPlay(const EEndPlayReason::Type endPlayReason){ Super::EndPlay(endPlayReason); }
void AFGCrate::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
bool AFGCrate::AddAsRepresentation(){ return bool(); }
bool AFGCrate::UpdateRepresentation(){ return bool(); }
bool AFGCrate::RemoveAsRepresentation(){ return bool(); }
bool AFGCrate::IsActorStatic(){ return bool(); }
FVector AFGCrate::GetRealActorLocation(){ return FVector(); }
FRotator AFGCrate::GetRealActorRotation(){ return FRotator(); }
UTexture2D* AFGCrate::GetActorRepresentationTexture(){ return nullptr; }
FText AFGCrate::GetActorRepresentationText(){ return FText(); }
void AFGCrate::SetActorRepresentationText(const FText& newText){ }
FLinearColor AFGCrate::GetActorRepresentationColor(){ return FLinearColor(); }
void AFGCrate::SetActorRepresentationColor(FLinearColor newColor){ }
ERepresentationType AFGCrate::GetActorRepresentationType(){ return ERepresentationType(); }
bool AFGCrate::GetActorShouldShowInCompass(){ return bool(); }
bool AFGCrate::GetActorShouldShowOnMap(){ return bool(); }
EFogOfWarRevealType AFGCrate::GetActorFogOfWarRevealType(){ return EFogOfWarRevealType(); }
float AFGCrate::GetActorFogOfWarRevealRadius(){ return float(); }
ECompassViewDistance AFGCrate::GetActorCompassViewDistance(){ return ECompassViewDistance(); }
void AFGCrate::SetActorCompassViewDistance(ECompassViewDistance compassViewDistance){ }
UMaterialInterface* AFGCrate::GetActorRepresentationCompassMaterial(){ return nullptr; }
bool AFGCrate::IsUseable_Implementation() const{ return bool(); }
void AFGCrate::RegisterInteractingPlayer_Implementation( AFGCharacterPlayer* player){ }
void AFGCrate::UnregisterInteractingPlayer_Implementation( AFGCharacterPlayer* player){ }
bool AFGCrate::FilterInventoryClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
void AFGCrate::SetCrateType(EFGCrateType newCrateType){ }
void AFGCrate::SetAllowAddingItems(bool newAllowAddingItems){ }
void AFGCrate::OnInventoryItemRemoved(TSubclassOf< UFGItemDescriptor > itemClass, const int32 numRemoved, UFGInventoryComponent* targetInventory){ }
