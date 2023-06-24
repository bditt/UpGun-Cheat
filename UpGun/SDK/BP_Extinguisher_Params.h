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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Extinguisher.BP_Extinguisher_C.Stats
	 */
	struct ABP_Extinguisher_C_Stats_Params
	{
	public:
		struct FGameplayEffectContextHandle                        Context;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Extinguisher.BP_Extinguisher_C.RemoveBurningTag
	 */
	struct ABP_Extinguisher_C_RemoveBurningTag_Params
	{
	public:
		float                                                      SphereRadius;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Extinguisher.BP_Extinguisher_C.CollectFire
	 */
	struct ABP_Extinguisher_C_CollectFire_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VC2I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ABP_Fire_Zone_C*>                             OutActors;                                               // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Extinguisher.BP_Extinguisher_C.OnRep_HasExploded
	 */
	struct ABP_Extinguisher_C_OnRep_HasExploded_Params
	{	};

	/**
	 * Function BP_Extinguisher.BP_Extinguisher_C.Damage
	 */
	struct ABP_Extinguisher_C_Damage_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x0298)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Amount;                                                  // 0x0298(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Extinguisher.BP_Extinguisher_C.Explosion_RPC
	 */
	struct ABP_Extinguisher_C_Explosion_RPC_Params
	{	};

	/**
	 * Function BP_Extinguisher.BP_Extinguisher_C.ExtiguishFire
	 */
	struct ABP_Extinguisher_C_ExtiguishFire_Params
	{	};

	/**
	 * Function BP_Extinguisher.BP_Extinguisher_C.SpawnLeak
	 */
	struct ABP_Extinguisher_C_SpawnLeak_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Extinguisher.BP_Extinguisher_C.BndEvt__BP_Extinguisher_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRoundWithChance__DelegateSignature
	 */
	struct ABP_Extinguisher_C_BndEvt__BP_Extinguisher_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRoundWithChance__DelegateSignature_Params
	{
	public:
		unsigned char                                              Round;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Extinguisher.BP_Extinguisher_C.ResetDoOnce
	 */
	struct ABP_Extinguisher_C_ResetDoOnce_Params
	{	};

	/**
	 * Function BP_Extinguisher.BP_Extinguisher_C.ReceiveBeginPlay
	 */
	struct ABP_Extinguisher_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Extinguisher.BP_Extinguisher_C.ExecuteUbergraph_BP_Extinguisher
	 */
	struct ABP_Extinguisher_C_ExecuteUbergraph_BP_Extinguisher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
