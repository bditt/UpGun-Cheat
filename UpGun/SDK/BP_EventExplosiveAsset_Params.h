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
	 * Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.OnExploded
	 */
	struct ABP_EventExplosiveAsset_C_OnExploded_Params
	{	};

	/**
	 * Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.SetVisual
	 */
	struct ABP_EventExplosiveAsset_C_SetVisual_Params
	{
	public:
		E_SeasonEvents                                             Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.OnRep_ShouldDisapear
	 */
	struct ABP_EventExplosiveAsset_C_OnRep_ShouldDisapear_Params
	{	};

	/**
	 * Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.OnRep_HasExploded
	 */
	struct ABP_EventExplosiveAsset_C_OnRep_HasExploded_Params
	{	};

	/**
	 * Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.Stat
	 */
	struct ABP_EventExplosiveAsset_C_Stat_Params
	{
	public:
		struct FGameplayEffectContextHandle                        PS;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.UserConstructionScript
	 */
	struct ABP_EventExplosiveAsset_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.ReceiveBeginPlay
	 */
	struct ABP_EventExplosiveAsset_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.Damage
	 */
	struct ABP_EventExplosiveAsset_C_Damage_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x0298)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Amount;                                                  // 0x0298(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.ResetDoOnceExplosion
	 */
	struct ABP_EventExplosiveAsset_C_ResetDoOnceExplosion_Params
	{	};

	/**
	 * Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.BndEvt__BP_Barril_Explosif_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature
	 */
	struct ABP_EventExplosiveAsset_C_BndEvt__BP_Barril_Explosif_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature_Params
	{
	public:
		unsigned char                                              Round;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.BndEvt__BP_Barril_Explosif_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRoundWithChance__DelegateSignature
	 */
	struct ABP_EventExplosiveAsset_C_BndEvt__BP_Barril_Explosif_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRoundWithChance__DelegateSignature_Params
	{
	public:
		unsigned char                                              Round;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.ExecuteUbergraph_BP_EventExplosiveAsset
	 */
	struct ABP_EventExplosiveAsset_C_ExecuteUbergraph_BP_EventExplosiveAsset_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
