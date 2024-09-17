// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGHUD.h"

DEFINE_LOG_CATEGORY(LogHUD);

AFGHUD::AFGHUD() : Super() {
	this->mGameUIClass = nullptr;
	this->mRespawnUIClass = nullptr;
	this->mDefaultCrosshair = Cast<UTexture2D>(FSoftObjectPath("/Game/FirstPerson/Textures/FirstPersonCrosshair.FirstPersonCrosshair").ResolveObject());
	this->mBuildCrosshair = nullptr;
	this->mDismantleCrosshair = nullptr;
	this->mCustomCrosshair = nullptr;
	this->mRespawnInputComponent = nullptr;
	this->mRespawnUI = nullptr;
	this->mGameUI = nullptr;
	this->mPawnHUD = nullptr;
	this->mGeneralCrosshair = mDefaultCrosshair;
}
void AFGHUD::PostInitializeComponents(){ Super::PostInitializeComponents(); }
void AFGHUD::BeginPlay(){ }
void AFGHUD::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGHUD::Tick(float DeltaSeconds){ }
void AFGHUD::AddPawnHUD(TSubclassOf<class UUserWidget> widgetClass, APawn* pawn){ }
void AFGHUD::ShowRespawnUI(){ }
void AFGHUD::CloseRespawnUI(){ }
UFGInteractWidget* AFGHUD::RequestInteractWidget(TSubclassOf<  UFGInteractWidget > widgetClass, UObject* interactObject){ return nullptr; }
UUserWidget* AFGHUD::RequestWidget(TSubclassOf< UUserWidget > widgetClass){ return nullptr; }
void AFGHUD::ReleaseWidget(UUserWidget* widgetToRelease){ }
void AFGHUD::ShowDebugInfo(float& YL, float& YPos){ }
void AFGHUD::SetShowCrossHair(bool showCrosshair){ }
void AFGHUD::SetForceHideCrossHair(bool forceHide){ }
void AFGHUD::SetPumpiMode(bool hideHUD){ }
void AFGHUD::SetPartialPumpiMode(bool hideHUD){ }
void AFGHUD::SetHiddenHUDMode(bool hideHUD){ }
void AFGHUD::SetHUDVisibility(bool hudVisibility){ }
void AFGHUD::SetCrosshairState(ECrosshairState crosshairState){ }
void AFGHUD::UpdateCrosshairState_Implementation( AFGCharacterPlayer* player){ }
void AFGHUD::UpdateCrosshairColorState_Implementation(const FLinearColor& newColor){ }
void AFGHUD::SetCrustomCrosshairTexture_Implementation(UTexture2D* newTexture){ }
void AFGHUD::ToggleCheatBoard(){ }
void AFGHUD::OnActorRepresentationAdded(UFGActorRepresentation* actorRepresentation){ }
void AFGHUD::OnActorRepresentationRemoved(UFGActorRepresentation* actorRepresentation){ }
void AFGHUD::OnActorRepresentationUpdated(UFGActorRepresentation* actorRepresentation){ }
void AFGHUD::OnActorRepresentationFiltered(ERepresentationType type, bool visible){ }
void AFGHUD::SetCompassEntryVisibility(UFGActorRepresentation* actorRepresentation, bool visible){ }
void AFGHUD::RegisterCardinalCompassDirections(){ }
void AFGHUD::OnSetupBinds(){ }
void AFGHUD::OnViewportResizedEvent_Implementation(){ }
void AFGHUD::UpdateCrosshair(){ }
void AFGHUD::OnViewportResized( FViewport* Viewport, uint32 Unused){ }
void AFGHUD::UpdateCompassData(float deltaTime){ }
