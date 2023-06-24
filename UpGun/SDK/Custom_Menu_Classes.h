#pragma once

/**
 * Name: UpGun
 * Version: Live
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass Custom_Menu.Custom_Menu_C
	 * Size -> 0x00E0 (FullSize[0x0340] - InheritedSize[0x0260])
	 */
	class UCustom_Menu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    BadCode;                                                 // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    SwitchWidget;                                            // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Appear;                                                  // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UEditableText*                                       EditableText_57;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       EditableText_redeemcode;                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UExpandableArea*                                     ExpandableArea_1;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             FondTiroir;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_Items;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_code;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_HideNotif;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_button_C*                                         W_button_redeem;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_Tab_C*                                     W_Button_Tab_Armures;                                    // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_Tab_C*                                     W_Button_Tab_Emote;                                      // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_Tab_C*                                     W_Button_Tab_Equipment;                                  // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_Tab_C*                                     W_Button_Tab_Hats;                                       // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_Tab_C*                                     W_Button_Tab_Knife;                                      // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_Tab_C*                                     W_Button_Tab_Rifle;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_Tab_C*                                     W_Button_Tab_Screens;                                    // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_Tab_C*                                     W_Button_Tab_Shop;                                       // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            WrapBox_Buttons;                                         // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMain_Menu_C*                                        MainMenu;                                                // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UGI_BP_Upgun_C*                                      GI;                                                      // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ACharacterePrevisCustom_C*                           Previ;                                                   // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUpGunCosmeticType                                         PartDisplayed;                                           // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KA5M[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Shop_Items;                                              // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AvailableCodes();
		void UpdateTabNotifications();
		void PopulateShop();
		void CheckIfItemIsObtainable(const struct FUpGunOSSItemMetadata& OSS, int32_t* Number);
		void GetMaxCosmeticNumber(EUpGunCosmeticType PartDisplayed, int32_t* Item_max);
		void UpdateName(int32_t Number, EUpGunCosmeticType Index);
		void RemoveDoubles(TArray<struct FUpGunInventoryItem>* Input, TArray<struct FUpGunInventoryItem>* NoDoubles);
		void CollectDefaultCosmeticsItems(TArray<struct FUpGunInventoryItem>* Out);
		void PopulateList(EUpGunCosmeticType Part);
		void UseSteamID();
		void SwitchToIndex(int32_t DesiredCameraView, class UW_Button_Tab_C** Tab, EUpGunCosmeticType Part);
		void WidgetArrive();
		void Construct();
		void BndEvt__MenuCustomisation_W_Button_Tab_Armures_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void BndEvt__MenuCustomisation_W_Button_Tab_Emote_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void BndEvt__MenuCustomisation_W_Button_Tab_Hats_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
		void BndEvt__MenuCustomisation_W_Button_Tab_Knife_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
		void BndEvt__MenuCustomisation_W_Button_Tab_Rifle_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
		void BndEvt__MenuCustomisation_W_Button_Tab_Screens_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
		void BndEvt__MenuCustomisation_W_Button_Tab_Equipment_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
		void BndEvt__MenuCustomisation_W_button_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature();
		void BndEvt__MenuCustomisation_EditableText_56_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__MenuCustomisation_EditableText_56_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__Custom_Menu_W_Button_Tab_Shop_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void BndEvt__Custom_Menu_W_button_HideNotif_K2Node_ComponentBoundEvent_5_Clicked_Btn__DelegateSignature();
		void BndEvt__Custom_Menu_W_button_redeem_K2Node_ComponentBoundEvent_6_Clicked_Btn__DelegateSignature();
		void BndEvt__Custom_Menu_W_button_code_K2Node_ComponentBoundEvent_8_Clicked_Btn__DelegateSignature();
		void ExecuteUbergraph_Custom_Menu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
