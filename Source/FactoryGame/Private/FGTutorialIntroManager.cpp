// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGTutorialIntroManager.h"
#include "FGCharacterPlayer.h"
#include "Net/UnrealNetwork.h"

AFGTutorialIntroManager* AFGTutorialIntroManager::Get(UWorld* world){ return nullptr; }
AFGTutorialIntroManager* AFGTutorialIntroManager::Get(UObject* worldContext){ return nullptr; }
AFGTutorialIntroManager::AFGTutorialIntroManager() : Super() {
	this->mTradingPostBuilt = false;
	this->mPendingTutorial = EIntroTutorialSteps::ITS_DEPRECATED;
	this->mCurrentOnboardingStep = nullptr;
	this->mHasCompletedIntroTutorial = false;
	this->mHasCompletedIntroSequence = false;
	this->mLandingOnboardingMessage = nullptr;
	this->mTradingPostDescriptor = nullptr;
	this->mTradingPost = nullptr;
	this->mIronOreDescriptor = nullptr;
	this->mDidDismantleDropPod = false;
	this->mStunSpearItemClass = nullptr;
	this->mDidEquipStunSpear = false;
	this->mStep1UpgradeSchematic = nullptr;
	this->mDidStep1Upgrade = false;
	this->mStep1_5UpgradeSchematic = nullptr;
	this->mDidStep1_5Upgrade = false;
	this->mStep2UpgradeSchematic = nullptr;
	this->mDidStep2Upgrade = false;
	this->mStep3UpgradeSchematic = nullptr;
	this->mDidStep3Upgrade = false;
	this->mStep4UpgradeSchematic = nullptr;
	this->mDidStep4Upgrade = false;
	this->mStep5UpgradeSchematic = nullptr;
	this->mDidStep5Upgrade = false;
	this->mStartingPodClass = nullptr;
	this->mStartingPod = nullptr;
	this->mWaitTimeAfterCompletingMinorStep = 0.0;
	this->mWaitTimeAfterCompletingHubStep = 0.0;
	this->mHoldTimeToSkipIntro = 0.0;
	this->mDidOpenCodex = false;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
}
void AFGTutorialIntroManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGTutorialIntroManager, mCurrentOnboardingStep);
	DOREPLIFETIME(AFGTutorialIntroManager, mHasCompletedIntroTutorial);
	DOREPLIFETIME(AFGTutorialIntroManager, mHasCompletedIntroSequence);
	DOREPLIFETIME(AFGTutorialIntroManager, mTradingPost);
	DOREPLIFETIME(AFGTutorialIntroManager, mStartingPod);
	DOREPLIFETIME(AFGTutorialIntroManager, mTradingPostLevel);
}
void AFGTutorialIntroManager::Tick(float DeltaTime){ Super::Tick(DeltaTime); }
void AFGTutorialIntroManager::PostInitializeComponents(){ Super::PostInitializeComponents(); }
void AFGTutorialIntroManager::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTutorialIntroManager::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTutorialIntroManager::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTutorialIntroManager::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGTutorialIntroManager::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGTutorialIntroManager::NeedTransform_Implementation(){ return bool(); }
bool AFGTutorialIntroManager::ShouldSave_Implementation() const{ return bool(); }
void AFGTutorialIntroManager::AddPlayer( AFGCharacterPlayer* inPlayer){ }
void AFGTutorialIntroManager::OnDismantleDropPod(){ }
void AFGTutorialIntroManager::CompleteOnboardingStep( UFGOnboardingStep* completedOnboardingStep){ }
void AFGTutorialIntroManager::CompleteOnboardingStepByTag(FGameplayTag completedOnboardingStepTag){ }
UFGOnboardingStep* AFGTutorialIntroManager::GetOnboardingStepFromTag(FGameplayTag OnboardingStepTag) const{ return nullptr; }
void AFGTutorialIntroManager::SetTradingPostLevel(int32 newLevel){ }
void AFGTutorialIntroManager::SetInputGatesFromTutorialLevel( AFGPlayerController* playerController){ }
struct FDisabledInputGate AFGTutorialIntroManager::GetInputGatesFromTutorialLevel(){ return FDisabledInputGate(); }
void AFGTutorialIntroManager::SetupDropPod( AFGCharacterPlayer* forPlayer){ }
void AFGTutorialIntroManager::TradingPostWasBuilt(){ }
void AFGTutorialIntroManager::StartSkipIntroSequence(){ }
void AFGTutorialIntroManager::CancelSkipIntroSequence(){ }
void AFGTutorialIntroManager::EndSkipIntroSequence(){ }
float AFGTutorialIntroManager::GetNormalizedProgressToSkip(){ return float(); }
void AFGTutorialIntroManager::CompleteTutorial(){ }
void AFGTutorialIntroManager::IntroDone(){ }
void AFGTutorialIntroManager::ResetHubTutorial(){ }
void AFGTutorialIntroManager::SetCanSkipTutorialIntro(bool canSkip){ }
void AFGTutorialIntroManager::OnCodexOpened(){ }
void AFGTutorialIntroManager::SkipOnboarding(){ }
void AFGTutorialIntroManager::BeginPlay(){ Super::BeginPlay(); }
void AFGTutorialIntroManager::OnBuildingBuiltGlobal( AFGBuildable* buildable){ }
void AFGTutorialIntroManager::OnSchematicPurchased(TSubclassOf< UFGSchematic > newSchematic){ }
void AFGTutorialIntroManager::OnItemPickuped(AFGPlayerState* playerState, const FItemAmount& totalAmountPickuped){ }
void AFGTutorialIntroManager::UpdateTutorial(EIntroTutorialSteps nextTutorialStep){ }
void AFGTutorialIntroManager::SetCurrentOnboardingStep(UFGOnboardingStep* inOnboardingStep){ }
void AFGTutorialIntroManager::SetCurrentOnboardingStep(FGameplayTag inOnboardingStep){ }
void AFGTutorialIntroManager::OnPlayerAddedItemToArmSlot(TSubclassOf< UFGItemDescriptor > itemClass, const int32 numAdded, UFGInventoryComponent* targetInventory){ }
void AFGTutorialIntroManager::OnMessageFinishedPlayingForPlayer( AFGPlayerController* player,  UFGMessage* message){ }
void AFGTutorialIntroManager::SetTradingpostBuilt(bool hasbuilt){ }
void AFGTutorialIntroManager::OnIntroDone(){ }
void AFGTutorialIntroManager::OnRep_TradingPostLevel(){ }
void AFGTutorialIntroManager::OnRep_HasCompletedIntroTutorial(){ }
void AFGTutorialIntroManager::OnRep_CurrentOnboardingStep(){ }
bool AFGTutorialIntroManager::ShouldSkipOnboarding() const{ return bool(); }
const int32 AFGTutorialIntroManager::MaxTradingPostLevel = int32();
