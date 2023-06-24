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
	 * BlueprintGeneratedClass BP_SAVE.BP_SAVE_C
	 * Size -> 0x02A0 (FullSize[0x02C8] - InheritedSize[0x0028])
	 */
	class UBP_SAVE_C : public USaveGame
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       FancyLights;                                             // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6PEK[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Volumes;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               Volumes_Mutes;                                           // 0x0048(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UTexture2D*                                          CrossHair;                                               // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        CrossHair_Color;                                         // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Crosshair_Size;                                          // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ColorBlindMode;                                          // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MotionBlur;                                              // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IDBR[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FInputChord>                      SavedMappings_Keyboard;                                  // 0x0080(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FName, struct FInputChord>                      SavedMappings_Controller;                                // 0x00D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       HasFilledInitialSetup;                                   // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_THWT[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      MapSeen;                                                 // 0x0128(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      FOV;                                                     // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Sensibility;                                             // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InvertY;                                                 // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OE7R[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SkillUsed[0x50];                                         // 0x0148(0x0050) UNKNOWN PROPERTY: SetProperty
		struct FUpGunCosmeticSettings                              CosmeticSettings;                                        // 0x0198(0x0060) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              Name;                                                    // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FUpGunCosmeticSettings                              PreviewCosmetics;                                        // 0x0208(0x0060) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              Cosmetic_Tested[0x50];                                   // 0x0268(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<class FString>                                      LastKnownShop;                                           // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AddMapToList(const class FString& MapName, bool* HasAllMaps);
		void CountDroppableSkills(int32_t* AvailableSkills);
		void CheckAchievementSkills(bool* HasAllSkills);
		void CheckAchievementMaps(bool* HasAllMaps);
		void Check();
		void ExecuteUbergraph_BP_SAVE(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
