// This file has been automatically generated by the Unreal Header Implementation tool

#include "Creature/Enemy/FGFlyingBabyCrab.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

AFGFlyingBabyCrab::AFGFlyingBabyCrab() : Super() {
	this->mMovementSpeedRange = FFloatInterval(400.0, 700.0);
	this->mMovementSpeedRangeCombat = FFloatInterval(1000.0, 2000.0);
	this->mAggroRadius = 5000.0;
	this->mAggroTickRate = 1.0;
	this->mSwarmViewDistance = 1000.0;
	this->mCharacterLaunchForce = 1000.0;
	this->mCombatTurnDistance = 2000.0;
	this->mCombatSteeringWeight = FFloatInterval(0.25, 3.0);
	this->mHomeRadius = 1000.0;
	this->mHomeSteeringWeight = FFloatInterval(0.5, 1.0);
	this->mIdleMovementWeight = 0.75;
	this->mFloorAvoidanceHeight = 300.0;
	this->mFloorAvoidanceWeight = 1.0;
	this->mErraticMovementDirectionFrequency = 1.0;
	this->mErraticMovementWeightFrequency = 0.5;
	this->mErraticMovementWeight = FFloatInterval(0.0, 1.0);
	this->mAvoidanceRadius = FFloatInterval(300.0, 800.0);
	this->mAvoidanceWeight = 1.0;
	this->mCohesionWeight = 0.3;
	this->mCohesionWeightCombat = 0.6;
	this->mCohesionDirectionWeight = 0.1;
	this->mHomeLocation = FVector::ZeroVector;
	this->mProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	this->mParentCrabHatcher = nullptr;
	this->mCurrentTarget = nullptr;
	this->mMovementSpeed = 600.0;
	this->mMovementSpeedCombat = 2000.0;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = false;
	this->PrimaryActorTick.bStartWithTickEnabled = false;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
}
void AFGFlyingBabyCrab::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGFlyingBabyCrab, mCurrentTarget);
	DOREPLIFETIME(AFGFlyingBabyCrab, mMovementSpeed);
	DOREPLIFETIME(AFGFlyingBabyCrab, mMovementSpeedCombat);
}
bool AFGFlyingBabyCrab::IsValidTarget(AActor* target) const{ return bool(); }
void AFGFlyingBabyCrab::SetHomeLocation(const FVector& Location){ }
void AFGFlyingBabyCrab::Explode(){ }
void AFGFlyingBabyCrab::RegisterHostilePlayer( AFGCharacterPlayer* player){ }
void AFGFlyingBabyCrab::BeginPlay(){ Super::BeginPlay(); }
void AFGFlyingBabyCrab::EndPlay(const EEndPlayReason::Type endPlayReason){ Super::EndPlay(endPlayReason); }
void AFGFlyingBabyCrab::Destroyed(){ Super::Destroyed(); }
void AFGFlyingBabyCrab::PostNetReceiveLocationAndRotation(){ }
void AFGFlyingBabyCrab::OnClientSubsystemsValid(){ }
void AFGFlyingBabyCrab::UpdateProjectileComponentSpeed(){ }
void AFGFlyingBabyCrab::SetCurrentTarget(AActor* target){ }
void AFGFlyingBabyCrab::OnCurrentTargetChanged_Implementation(AActor* newTarget){ }
void AFGFlyingBabyCrab::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult){ }
void AFGFlyingBabyCrab::OnDamageReceived(AActor* DamagedActor, float Damage, const  UDamageType* DamageType,  AController* InstigatedBy, AActor* DamageCauser){ }
void AFGFlyingBabyCrab::RestartAggroTimer(bool initialStart){ }
void AFGFlyingBabyCrab::UpdateAggro(){ }
AActor* AFGFlyingBabyCrab::SelectAggroTarget(const TArray< AActor* >& TargetCandidates) const{ return nullptr; }
void AFGFlyingBabyCrab::OnRep_CurrentTarget(){ }
void AFGFlyingBabyCrab::OnRep_MovementSpeed(){ }
void AFGFlyingBabyCrab::TickMovement(float dt){ }
void AFGFlyingBabyCrab::SteerTowardsDirection(const FVector& Direction, float strength, FVector& out_acceleration){ }
void AFGFlyingBabyCrab::SteerTowardsTarget(FVector& out_acceleration){ }
void AFGFlyingBabyCrab::SteerTowardsHome(FVector& out_acceleration){ }
void AFGFlyingBabyCrab::SteerSwarmMovement(FVector& out_acceleration){ }
void AFGFlyingBabyCrab::SteerAvoidFloor(FVector& out_acceleration){ }
void AFGFlyingBabyCrab::SteerErraticMovement(FVector& out_acceleration){ }
