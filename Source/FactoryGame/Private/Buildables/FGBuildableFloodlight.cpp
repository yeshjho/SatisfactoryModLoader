// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableFloodlight.h"
#include "Net/UnrealNetwork.h"

void AFGBuildableFloodlight::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableFloodlight, mFixtureAngle);
}
void AFGBuildableFloodlight::BeginPlay(){ Super::BeginPlay(); }
void AFGBuildableFloodlight::SetFixtureAngle(int32 angle){ }
const FName AFGBuildableFloodlight::FIXTURE_COMPONENT_NAME = FName();
