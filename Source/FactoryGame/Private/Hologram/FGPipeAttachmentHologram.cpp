// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGPipeAttachmentHologram.h"
#include "Net/UnrealNetwork.h"

AFGPipeAttachmentHologram::AFGPipeAttachmentHologram() : Super() {
	this->mBasePipeClass = nullptr;
	this->mPipeAttachmentInterfaceClass = nullptr;
	this->mBuildStep = EPipeAttachmentBuildStep::PABS_PlacementAndDirection;
	this->mMaxValidTurnOffset = 140.0;
	this->mMaxValidTurnAngle = 3.0;
	this->mRotationAxis = EAxis::Z;
	this->mIncrementSnappedConnectionOnScroll = true;
	this->mWallSnapOffset = FVector2D((0, 75));
	this->mHasPipeRotationBuildStep = true;
	this->mSnappedPipe = nullptr;
	this->mSnappedConnectionComponent = nullptr;
	this->mSnappedPipeOffset = 0.0;
	this->mNeedsValidFloor = false;
}
void AFGPipeAttachmentHologram::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGPipeAttachmentHologram, mSnappedPipe);
	DOREPLIFETIME(AFGPipeAttachmentHologram, mSnapConnectionIndex);
	DOREPLIFETIME(AFGPipeAttachmentHologram, mSnappedConnectionComponent);
	DOREPLIFETIME(AFGPipeAttachmentHologram, mSnappedPipeOffset);
}
void AFGPipeAttachmentHologram::BeginPlay(){ Super::BeginPlay(); }
bool AFGPipeAttachmentHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGPipeAttachmentHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
void AFGPipeAttachmentHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGPipeAttachmentHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
float AFGPipeAttachmentHologram::GetHologramHoverHeight() const{ return float(); }
void AFGPipeAttachmentHologram::GetIgnoredClearanceActors(TArray< AActor* >& ignoredActors) const{ }
bool AFGPipeAttachmentHologram::IsValidHitActor(AActor* hitActor) const{ return bool(); }
bool AFGPipeAttachmentHologram::CanNudgeHologram() const{ return bool(); }
bool AFGPipeAttachmentHologram::ShouldActorBeConsideredForGuidelines( AActor* actor) const{ return bool(); }
void AFGPipeAttachmentHologram::ScrollRotate(int32 delta, int32 step){ }
int32 AFGPipeAttachmentHologram::GetRotationStep() const{ return int32(); }
void AFGPipeAttachmentHologram::CheckValidPlacement(){ }
void AFGPipeAttachmentHologram::TrySnapToConnection(const float snapDistance, FVector& out_location, FVector& out_normal){ }
FName AFGPipeAttachmentHologram::mConnection0 = FName();
FName AFGPipeAttachmentHologram::mConnection1 = FName();
