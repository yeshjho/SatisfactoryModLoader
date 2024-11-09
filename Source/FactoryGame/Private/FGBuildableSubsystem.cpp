// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableSubsystem.h"

FBoxCenterAndExtent FBuildableOctreeSemantics::GetBoundingBox(const AFGBuildable* Element){ return FBoxCenterAndExtent(); }
bool FBuildableOctreeSemantics::AreElementsEqual(const AFGBuildable* A, const AFGBuildable* B){ return bool(); }
void FBuildableOctreeSemantics::SetElementId(FOctree& Octree, const AFGBuildable* Element, FOctreeElementId2 OctreeElementID){ }
#if STATS
#endif 
#if WITH_EDITOR
TArray<AFGBuildable*> AFGBuildableSubsystem::CollectBuildablesInTimelapseBucket(int32 bucketId) const{ return TArray<AFGBuildable*>(); }
void AFGBuildableSubsystem::TickTimelapseTool(float dt){ }
#endif 
#if WITH_EDITORONLY_DATA
#endif 
AFGBuildableSubsystem::AFGBuildableSubsystem() : Super() {
	this->mDistanceConsideredClose = 15000.0;
	this->mNumFactoriesNeededForCloseCheck = 5;
	this->mDefaultBuildEffect = nullptr;
	this->mDefaultPotentialShardSlots = 3;
	this->mDefaultProductionShardSlotSize = 4;
	this->mBuildableInstancesActor = nullptr;
	this->mProductionIndicatorInstanceManager = nullptr;
	this->mColorSlotsPrimary[0] = FColor(255, 112, 39);
	this->mColorSlotsPrimary[1] = FColor(38, 100, 167);
	this->mColorSlotsPrimary[2] = FColor(204, 52, 19);
	this->mColorSlotsPrimary[3] = FColor(32, 33, 47);
	this->mColorSlotsPrimary[4] = FColor(190, 195, 206);
	this->mColorSlotsPrimary[5] = FColor(127, 186, 73);
	this->mColorSlotsPrimary[6] = FColor(255, 89, 202);
	this->mColorSlotsPrimary[7] = FColor(115, 223, 215);
	this->mColorSlotsPrimary[8] = FColor(125, 84, 26);
	this->mColorSlotsPrimary[9] = FColor(0, 0, 0, 0);
	this->mColorSlotsPrimary[10] = FColor(0, 0, 0, 0);
	this->mColorSlotsPrimary[11] = FColor(0, 0, 0, 0);
	this->mColorSlotsPrimary[12] = FColor(0, 0, 0, 0);
	this->mColorSlotsPrimary[13] = FColor(0, 0, 0, 0);
	this->mColorSlotsPrimary[14] = FColor(0, 0, 0, 0);
	this->mColorSlotsPrimary[15] = FColor(0, 0, 0, 0);
	this->mColorSlotsPrimary[16] = FColor(0, 0, 0, 0);
	this->mColorSlotsPrimary[17] = FColor(0, 0, 0, 0);
	this->mColorSlotsSecondary[0] = FColor(29, 34, 67);
	this->mColorSlotsSecondary[1] = FColor(86, 64, 31);
	this->mColorSlotsSecondary[2] = FColor(78, 80, 97);
	this->mColorSlotsSecondary[3] = FColor(61, 92, 75);
	this->mColorSlotsSecondary[4] = FColor(29, 34, 67);
	this->mColorSlotsSecondary[5] = FColor(29, 34, 67);
	this->mColorSlotsSecondary[6] = FColor(29, 34, 67);
	this->mColorSlotsSecondary[7] = FColor(29, 34, 67);
	this->mColorSlotsSecondary[8] = FColor(83, 88, 88);
	this->mColorSlotsSecondary[9] = FColor(0, 0, 0, 0);
	this->mColorSlotsSecondary[10] = FColor(0, 0, 0, 0);
	this->mColorSlotsSecondary[11] = FColor(0, 0, 0, 0);
	this->mColorSlotsSecondary[12] = FColor(0, 0, 0, 0);
	this->mColorSlotsSecondary[13] = FColor(0, 0, 0, 0);
	this->mColorSlotsSecondary[14] = FColor(0, 0, 0, 0);
	this->mColorSlotsSecondary[15] = FColor(0, 0, 0, 0);
	this->mColorSlotsSecondary[16] = FColor(0, 0, 0, 0);
	this->mColorSlotsSecondary[17] = FColor(0, 0, 0, 0);
	this->mFactoryOptimizationEnabled = true;
	this->mFactoryTickFunction.TickGroup = ETickingGroup::TG_PrePhysics;
	this->mFactoryTickFunction.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->mFactoryTickFunction.bTickEvenWhenPaused = false;
	this->mFactoryTickFunction.bCanEverTick = false;
	this->mFactoryTickFunction.bStartWithTickEnabled = false;
	this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true;
	this->mFactoryTickFunction.TickInterval = 0.0;
	this->mSqDistanceForDetailCleanup = 10000000.0;
	this->mProjectAssemblyActor = nullptr;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_DuringPhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->bReplicates = false;
}
void AFGBuildableSubsystem::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableSubsystem::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableSubsystem::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableSubsystem::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableSubsystem::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGBuildableSubsystem::NeedTransform_Implementation(){ return bool(); }
bool AFGBuildableSubsystem::ShouldSave_Implementation() const{ return bool(); }
void AFGBuildableSubsystem::BeginPlay(){ Super::BeginPlay(); }
void AFGBuildableSubsystem::EndPlay(const EEndPlayReason::Type endPlayReason){ Super::EndPlay(endPlayReason); }
void AFGBuildableSubsystem::Tick(float dt){ Super::Tick(dt); }
void AFGBuildableSubsystem::TickFactory(float dt, ELevelTick TickType){ }
AFGBuildableSubsystem* AFGBuildableSubsystem::Get(UWorld* world){ return nullptr; }
AFGBuildableSubsystem* AFGBuildableSubsystem::Get(UObject* worldContext){ return nullptr; }
AFGBuildable* AFGBuildableSubsystem::BeginSpawnBuildable(TSubclassOf<  AFGBuildable > inClass, const FTransform& inTransform){ return nullptr; }
void AFGBuildableSubsystem::AddBuildable( AFGBuildable* buildable){ }
void AFGBuildableSubsystem::OnDesignerBuildableSpawned(AFGBuildable* buildable){ }
void AFGBuildableSubsystem::AssignConveyorTickOrder(int32 id){ }
void AFGBuildableSubsystem::MigrateConveyorGroupToChainActor(FConveyorTickGroup* tickGroup){ }
void AFGBuildableSubsystem::RemoveChainActorFromConveyorGroup(FConveyorTickGroup* tickGroup){ }
void AFGBuildableSubsystem::AddConveyor(AFGBuildableConveyorBase* conveyor){ }
AFGBuildableConveyorBase* AFGBuildableSubsystem::GetConnectedConveyorBelt( UFGFactoryConnectionComponent* connection){ return nullptr; }
void AFGBuildableSubsystem::AddConveyorChainActor( AFGConveyorChainActor* chainActor){ }
void AFGBuildableSubsystem::RemoveConveyorChainActor( AFGConveyorChainActor* ChainActor){ }
void AFGBuildableSubsystem::RemoveBuildable( AFGBuildable* buildable){ }
void AFGBuildableSubsystem::RemoveConveyor(AFGBuildableConveyorBase* conveyor){ }
void AFGBuildableSubsystem::SplitConveyorGroupFromAttachment(AFGBuildableConveyorBase* conveyor){ }
bool AFGBuildableSubsystem::RemoveConveyorFromBucket(AFGBuildableConveyorBase* conveyorToRemove){ return bool(); }
void AFGBuildableSubsystem::RearrangeConveyorBuckets(int32 emptiedBucketID){ }
void AFGBuildableSubsystem::RemoveAndSplitConveyorBucket(AFGBuildableConveyorBase* conveyorToRemove){ }
bool AFGBuildableSubsystem::IsServerSubSystem() const{ return bool(); }
void AFGBuildableSubsystem::GetTypedBuildable(TSubclassOf<  AFGBuildable > inClass, TArray<  AFGBuildable* >& out_buildables) const{ }
void AFGBuildableSubsystem::GetOcclusionAffectingBuildebles(TArray<AFGBuildable*>& Out, const FVector& RequestLocation, float Range, bool bParallel) const{ }
void AFGBuildableSubsystem::GetNearestBuildables(TArray<AFGBuildable*>& Out, const FVector& RequestLocation, float Range) const{ }
void AFGBuildableSubsystem::PlayTimelapseEffect(int32 bucketId, bool playBuildEffect){ }
void AFGBuildableSubsystem::SetTimelapseBucketHidden(int32 bucketId, bool hidden){ }
const FFactoryCustomizationColorSlot& AFGBuildableSubsystem::GetColorSlot_Data(uint8 index) const{ return *(new FFactoryCustomizationColorSlot); }
void AFGBuildableSubsystem::SetColorSlot_Data(uint8 index, FFactoryCustomizationColorSlot color){ }
TSubclassOf< class UFGFactoryCustomizationCollection > AFGBuildableSubsystem::GetCollectionForCustomizationClass(TSubclassOf<  UFGFactoryCustomizationDescriptor > collectionClassType) const{ return TSubclassOf<class UFGFactoryCustomizationCollection>(); }
FLinearColor AFGBuildableSubsystem::GetBuildableLightColorSlot(int32 index) const{ return FLinearColor(); }
TArray<FLinearColor> AFGBuildableSubsystem::GetBuildableLightColorSlots() const{ return TArray<FLinearColor>(); }
void AFGBuildableSubsystem::BuildableLightColorSlotsUpdated(const TArray< FLinearColor >& colors){ }
void AFGBuildableSubsystem::UpdateBuildableCullDistances(float newFactor){ }
UMaterialInstanceDynamic* AFGBuildableSubsystem::GetConveyorBelTrackMaterialFromSpeed(float speed, UMaterialInterface* currentMaterial){ return nullptr; }
void AFGBuildableSubsystem::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGBuildableSubsystem::DebugGetFactoryActors(TArray< AActor* >& out_actors){ }
FName AFGBuildableSubsystem::GetMeshMapName(UStaticMesh* mesh,  UMeshComponent* sourceComponent){ return FName(); }
FNetConstructionID AFGBuildableSubsystem::GetNewNetConstructionID(){ return FNetConstructionID(); }
void AFGBuildableSubsystem::GetNewNetConstructionID(FNetConstructionID& clientConstructionID){ }
void AFGBuildableSubsystem::SpawnPendingConstructionHologram(FNetConstructionID netConstructionID,  AFGHologram* templateHologram,  AFGBuildGun* instigatingBuildGun){ }
void AFGBuildableSubsystem::AddPendingConstructionHologram(FNetConstructionID netConstructionID,  AFGHologram* hologram){ }
void AFGBuildableSubsystem::RemovePendingConstructionHologram(FNetConstructionID netConstructionID){ }
void AFGBuildableSubsystem::RemovePendingConstructionHologramForLightweight(uint16 clientId){ }
void AFGBuildableSubsystem::ApplyCustomizationPreview( IFGColorInterface* colorInterface, const FFactoryCustomizationData& previewData){ }
void AFGBuildableSubsystem::ClearCustomizationPreview( IFGColorInterface* colorInterface){ }
void AFGBuildableSubsystem::ClearCustomizationPreviewNoApply(class IFGColorInterface* colorInterface){ }
void AFGBuildableSubsystem::ClearAllCustomizationPreviews(){ }
AFGPlayerController* AFGBuildableSubsystem::GetLocalPlayerController() const{ return nullptr; }
float AFGBuildableSubsystem::GetDistanceSqToBoundingBox(const FVector& point,  AFGBuildable* buildable) const{ return float(); }
void AFGBuildableSubsystem::RegisterFactoryTickFunction(bool shouldRegister){ }
void AFGBuildableSubsystem::CreateFactoryStatID() const{ }
void AFGBuildableSubsystem::AddToTickGroup(AFGBuildable* buildable){ }
void AFGBuildableSubsystem::RemoveFromTickGroup(AFGBuildable* buildable){ }
void AFGBuildableSubsystem::SetupColoredMeshInstances(AFGBuildable* buildable){ }
void AFGBuildableSubsystem::SetupProductionIndicatorInstancing( AFGBuildable* buildable){ }
void AFGBuildableSubsystem::TickFactoryActors(float dt){ }
void AFGBuildableSubsystem::UpdateConveyorRenderType(FString cvar){ }
void AFGBuildableSubsystem::RequestBuildEffectActor(UObject* WorldContext, AFGBuildEffectActor*& BuildEffectActor, TSubclassOf< AFGBuildEffectActor > TemplateClass, FTransform Transform, AActor* instigator, bool bForceSolo){ }
UFGColoredInstanceManager* AFGBuildableSubsystem::GetColoredInstanceManager( UFGColoredInstanceMeshProxy* proxy){ return nullptr; }
TSubclassOf< class UFGFactoryCustomizationDescriptor_Swatch > AFGBuildableSubsystem::GetMigrationSwatchForSlot(int32 slotID){ return TSubclassOf<class UFGFactoryCustomizationDescriptor_Swatch>(); }
bool AFGBuildableSubsystem::IsBasedOn(const UMaterialInterface* instance, const UMaterial* base){ return bool(); }
const FName AFGBuildableSubsystem::MaterialParameter_ConveyorSpeed = FName();
uint8 AFGBuildableSubsystem::mCurrentSubStep = uint8();
uint8 AFGBuildableSubsystem::mCurrentSubStepMax = uint8();
