// This file has been automatically generated by the Unreal Header Implementation tool

#include "Settings/FGUserSetting.h"
#include "Internationalization/StringTableRegistry.h"

DEFINE_LOG_CATEGORY(LogUserSetting);

#if WITH_EDITOR
bool UFGUserSetting::SetupValueFunction( UK2Node_CallFunction* callFunction, bool isGetterFunction) const{ return bool(); }
EDataValidationResult UFGUserSetting::IsDataValid(TArray<FText>& ValidationErrors){ return EDataValidationResult::Valid; }
#endif 
UFGUserSetting::UFGUserSetting() : Super() {
	this->StrId = TEXT("");
	this->UseCVar = false;
	this->bRelevantForDedicatedServer = false;
	this->DocString = TEXT("");
	this->DisplayName = INVTEXT("");
	this->ToolTip = INVTEXT("");
	this->CategoryClass = nullptr;
	this->SubCategoryClass = nullptr;
	this->MenuPriority = 0.0;
	this->IsSettingSessionWide = false;
	this->ApplyType = FSoftClassPath("/Script/FactoryGame.FGUserSettingApplyType");
	this->ValueSelector = nullptr;
	this->CustomValueSelectorWidget = nullptr;
	this->ManagerTypeAvailability = nullptr;
	this->VisibilityDisqualifiers = 0;
	this->EditabilityDisqualifiers = 0;
	this->SubOptionTo = nullptr;
	this->ShowInBuilds = EIncludeInBuilds::IIB_Development;
}
FOptionRowData UFGUserSetting::ToOptionRowData() const{ return FOptionRowData(); }
ESettingVisiblityDisqualifier UFGUserSetting::GetVisibilityDisqualifiers(UWorld* world){ return ESettingVisiblityDisqualifier(); }
bool UFGUserSetting::ShouldShowInCurrentConfig(ESettingVisiblityDisqualifier visibilityDisqualifiers) const{ return bool(); }
FVariant UFGUserSetting::GetDefaultValue() const{ return FVariant(); }
IFGOptionInterface* UFGUserSetting::GetPrimaryOptionInterface(UWorld* world) const{ return nullptr; }
TSubclassOf< class UFGOptionsValueController > UFGUserSetting::GetValueSelectorWidgetClass() const{ return TSubclassOf<class UFGOptionsValueController>(); }
void UFGUserSetting::PostLoad(){ Super::PostLoad(); }
void UFGUserSetting::Serialize(FStructuredArchive::FRecord Record){ Super::Serialize(Record); }
bool UFGUserSetting::HasVisibilityDisqualifier(ESettingVisiblityDisqualifier disqualifier) const{ return bool(); }
bool UFGUserSetting::HasEditabilityDisqualifier(ESettingEditabilityDisqualifier disqualifier) const{ return bool(); }
bool UFGUserSetting::ShouldUseCVar() const{ return bool(); }
bool UFGUserSetting::IsDedicatedServerRelevant() const{ return bool(); }
bool UFGUserSetting::ShouldShowInBuild() const{ return bool(); }
#if WITH_EDITOR
FName UFGUserSetting_ValueSelector::GetGraphSchemaName() const{ return FName(); }
#endif 
TSubclassOf< class UFGOptionsValueController > UFGUserSetting_ValueSelector::GetValueSelectorWidgetClass() const{ return TSubclassOf<class UFGOptionsValueController>(); }
#if WITH_EDITOR
FName UFGUserSetting_CheckBox::GetGraphSchemaName() const{ return FName(); }
bool UFGUserSetting_CheckBox::SetupValueFunction( UK2Node_CallFunction* callFunction, bool isGetterFunction) const{ return bool(); }
#endif 
TSubclassOf< class UFGOptionsValueController > UFGUserSetting_CheckBox::GetValueSelectorWidgetClass() const{ return TSubclassOf<class UFGOptionsValueController>(); }
FVariant UFGUserSetting_CheckBox::GetDefaultValue() const{ return FVariant(); }
TSubclassOf< class UFGOptionsValueController > UFGUserSetting_EnumSelector::GetValueSelectorWidgetClass() const{ return TSubclassOf<class UFGOptionsValueController>(); }
TArray<FIntegerSelection> UFGUserSetting_EnumSelector::GetIntegerSelectionValues(int32& out_DefaultSelectionIndex){ return TArray<FIntegerSelection>(); }
TArray<FString> UFGUserSetting_EnumSelector::GetEnumOptions() const{ return TArray<FString>(); }
#if WITH_EDITOR
FName UFGUserSetting_IntSelector::GetGraphSchemaName() const{ return FName(); }
bool UFGUserSetting_IntSelector::SetupValueFunction( UK2Node_CallFunction* callFunction, bool isGetterFunction) const{ return bool(); }
#endif 
UFGUserSetting_IntSelector::UFGUserSetting_IntSelector() : Super() {
	this->IntegerSelectionValues.Emplace();
	this->IntegerSelectionValues[0].Name = LOCTABLE("ST_Options", "QualityLow");
	this->IntegerSelectionValues.Emplace();
	this->IntegerSelectionValues[1].Name = LOCTABLE("ST_Options", "QualityMedium");
	this->IntegerSelectionValues[1].Value = 1;
	this->IntegerSelectionValues.Emplace();
	this->IntegerSelectionValues[2].Name = LOCTABLE("ST_Options", "QualityHigh");
	this->IntegerSelectionValues[2].Value = 2;
	this->IntegerSelectionValues.Emplace();
	this->IntegerSelectionValues[3].Name = LOCTABLE("ST_Options", "QualityUltra");
	this->IntegerSelectionValues[3].Value = 3;
	this->BlockLastIndexFromManualSelection = false;
	this->LockLastIndexWhenSelected = false;
	this->ShowAsDropdown = false;
}
TSubclassOf< class UFGOptionsValueController > UFGUserSetting_IntSelector::GetValueSelectorWidgetClass() const{ return TSubclassOf<class UFGOptionsValueController>(); }
#if WITH_EDITOR
bool UFGUserSetting_Slider::SetupValueFunction( UK2Node_CallFunction* callFunction, bool isGetterFunction) const{ return bool(); }
#endif 
TSubclassOf< class UFGOptionsValueController > UFGUserSetting_Slider::GetValueSelectorWidgetClass() const{ return TSubclassOf<class UFGOptionsValueController>(); }
FVariant UFGUserSetting_Slider::GetDefaultValue() const{ return FVariant(); }
