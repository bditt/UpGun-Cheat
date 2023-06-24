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
	 * BlueprintGeneratedClass BP_EventExplosiveAsset.BP_EventExplosiveAsset_C
	 * Size -> 0x003D (FullSize[0x027D] - InheritedSize[0x0240])
	 */
	class ABP_EventExplosiveAsset_C : public AUpGunBasicDamageableActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                EventMesh;                                               // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBPC_ShouldDispawn_C*                                BPC_ShouldDispawn;                                       // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       HasExploded;                                             // 0x0258(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_G87A[0x3];                                   // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Life;                                                    // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayEffectContextHandle                        ExplosionContext;                                        // 0x0260(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsEventNow;                                              // 0x0278(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       ShouldPersist;                                           // 0x0279(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       JackOLantern;                                            // 0x027A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShowDebug;                                               // 0x027B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_SeasonEvents                                             DebugSeason;                                             // 0x027C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnExploded();
		void SetVisual(E_SeasonEvents Selection);
		void OnRep_ShouldDisapear();
		void OnRep_HasExploded();
		void Stat(struct FGameplayEffectContextHandle* PS);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void Damage(const struct FGameplayEffectSpec& Spec, float Amount);
		void ResetDoOnceExplosion();
		void BndEvt__BP_Barril_Explosif_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature(unsigned char Round);
		void BndEvt__BP_Barril_Explosif_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRoundWithChance__DelegateSignature(unsigned char Round);
		void ExecuteUbergraph_BP_EventExplosiveAsset(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
