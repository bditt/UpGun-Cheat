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
	 * BlueprintGeneratedClass BP_Lobby_HUD.BP_Lobby_HUD_C
	 * Size -> 0x0050 (FullSize[0x0408] - InheritedSize[0x03B8])
	 */
	class ABP_Lobby_HUD_C : public ABP_Base_HUD_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ULobbyMainHUD_C*                                     LobbyHUD;                                                // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          PlayerHUD_LifesText;                                     // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          PlayerHUD_AmmoText;                                      // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Lobby_Character_C*                               Character;                                               // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       LobbyHUDVisible;                                         // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J5P5[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLobbyMenuClosed;                                       // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnLobbyMenuOpened;                                       // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnGameStateChanged(const struct FGameplayTag& OldState, const struct FGameplayTag& NewState);
		void OnAmmoorMagazineChanged(unsigned char NewValue, unsigned char OldValue);
		void OnCurrentWeaponChanged(class AUpGunWeapon* NewValue, class AUpGunWeapon* OldValue);
		void OnCharacterUpdated(class AUpGunBaseCharacter* Character);
		void ExtendMainHUD();
		void InpActEvt_Scoreboard_K2Node_InputActionEvent_1(const struct FKey& Key);
		void BP_CreateWidgets();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void HideLobbyHUD();
		void ExecuteUbergraph_BP_Lobby_HUD(int32_t EntryPoint);
		void OnLobbyMenuOpened__DelegateSignature();
		void OnLobbyMenuClosed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
