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
	 * BlueprintGeneratedClass BP_Extinguisher.BP_Extinguisher_C
	 * Size -> 0x0040 (FullSize[0x0280] - InheritedSize[0x0240])
	 */
	class ABP_Extinguisher_C : public AUpGunBasicDamageableActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_Shake_C*                                        BPC_Shake;                                               // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBPC_ShouldDispawn_C*                                BPC_ShouldDispawn;                                       // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                Extincteur;                                              // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Life;                                                    // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasExploded;                                             // 0x026C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_IGR1[0x3];                                   // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UActorComponent*>                             SoundsParticle;                                          // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void Stats(struct FGameplayEffectContextHandle* Context);
		void RemoveBurningTag(float SphereRadius);
		void CollectFire(float Radius, TArray<class ABP_Fire_Zone_C*>* OutActors);
		void OnRep_HasExploded();
		void Damage(const struct FGameplayEffectSpec& Spec, float Amount);
		void Explosion_RPC();
		void ExtiguishFire();
		void SpawnLeak(const struct FVector& Location, const struct FRotator& Rotation);
		void BndEvt__BP_Extinguisher_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRoundWithChance__DelegateSignature(unsigned char Round);
		void ResetDoOnce();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Extinguisher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
