// This file has been automatically generated by the Unreal Header Implementation tool

#include "UI/FGUserWidget.h"

DEFINE_LOG_CATEGORY(LogUI);

#if WITH_EDITOR
void UFGUserWidget::ValidateCompiledWidgetTree(const UWidgetTree& BlueprintWidgetTree,  IWidgetCompilerLog& CompileLog) const{ }
#endif 
void UFGUserWidget::NativeConstruct(){ }
FReply UFGUserWidget::NativeOnPreviewKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent){ return FReply::Unhandled(); }
FReply UFGUserWidget::NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent){ return FReply::Unhandled(); }
FReply UFGUserWidget::NativeOnKeyUp(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent){ return FReply::Unhandled(); }
void UFGUserWidget::NativeOnFocusChanging(const FWeakWidgetPath& PreviousFocusPath, const FWidgetPath& NewWidgetPath, const FFocusEvent& InFocusEvent){ }
void UFGUserWidget::HandleFocusChange(const FWeakWidgetPath& OldFocusPath, const FWidgetPath& NewFocusPath, const FFocusEvent& InFocusEvent){ }
void UFGUserWidget::GetKeyHints_Implementation(FName hintTag, TArray<FFGKeyHint>& out_keyHints){ }
UWidgetTree* UFGUserWidget::GetWidgetTree(UWidget* Widget){ return nullptr; }
float UFGUserWidget::GetLongPressSeconds(){ return float(); }
UFGUserWidget* UFGUserWidget::FromSlateWidget(SWidget& SlateWidget){ return nullptr; }
bool UFGUserWidget::PreprocessKeyDownEvent(const FKeyEvent& InKeyEvent){ return bool(); }
bool UFGUserWidget::PreprocessKeyUpEvent(UWorld* World, const FKeyEvent& InKeyEvent){ return bool(); }
FReply UFGUserWidget::CallDelegateForKeyEventOfType(const FKeyEvent& InKeyEvent, EFGKeyHintDelegateType DelegateType){ return FReply::Unhandled(); }
FReply UFGUserWidget::CallKeybindingDelegate(const FFGKeybinding& Keybinding, EFGKeyHintDelegateType DelegateType){ return FReply::Unhandled(); }
void UFGUserWidget::BeginLongPress(const FFGKeybinding& Keybinding){ }
