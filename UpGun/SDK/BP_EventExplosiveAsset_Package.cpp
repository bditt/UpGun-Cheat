/**
 * Name: UpGun
 * Version: Live
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.OnExploded
	 * 		Flags  -> ()
	 */
	void ABP_EventExplosiveAsset_C::OnExploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.OnExploded");
		
		ABP_EventExplosiveAsset_C_OnExploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.SetVisual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SeasonEvents                                     Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EventExplosiveAsset_C::SetVisual(E_SeasonEvents Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.SetVisual");
		
		ABP_EventExplosiveAsset_C_SetVisual_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.OnRep_ShouldDisapear
	 * 		Flags  -> ()
	 */
	void ABP_EventExplosiveAsset_C::OnRep_ShouldDisapear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.OnRep_ShouldDisapear");
		
		ABP_EventExplosiveAsset_C_OnRep_ShouldDisapear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.OnRep_HasExploded
	 * 		Flags  -> ()
	 */
	void ABP_EventExplosiveAsset_C::OnRep_HasExploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.OnRep_HasExploded");
		
		ABP_EventExplosiveAsset_C_OnRep_HasExploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.Stat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                PS                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_EventExplosiveAsset_C::Stat(struct FGameplayEffectContextHandle* PS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.Stat");
		
		ABP_EventExplosiveAsset_C_Stat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PS != nullptr)
			*PS = params.PS;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_EventExplosiveAsset_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.UserConstructionScript");
		
		ABP_EventExplosiveAsset_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_EventExplosiveAsset_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.ReceiveBeginPlay");
		
		ABP_EventExplosiveAsset_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EventExplosiveAsset_C::Damage(const struct FGameplayEffectSpec& Spec, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.Damage");
		
		ABP_EventExplosiveAsset_C_Damage_Params params {};
		params.Spec = Spec;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.ResetDoOnceExplosion
	 * 		Flags  -> ()
	 */
	void ABP_EventExplosiveAsset_C::ResetDoOnceExplosion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.ResetDoOnceExplosion");
		
		ABP_EventExplosiveAsset_C_ResetDoOnceExplosion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.BndEvt__BP_Barril_Explosif_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EventExplosiveAsset_C::BndEvt__BP_Barril_Explosif_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature(unsigned char Round)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.BndEvt__BP_Barril_Explosif_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature");
		
		ABP_EventExplosiveAsset_C_BndEvt__BP_Barril_Explosif_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.BndEvt__BP_Barril_Explosif_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRoundWithChance__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EventExplosiveAsset_C::BndEvt__BP_Barril_Explosif_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRoundWithChance__DelegateSignature(unsigned char Round)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.BndEvt__BP_Barril_Explosif_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRoundWithChance__DelegateSignature");
		
		ABP_EventExplosiveAsset_C_BndEvt__BP_Barril_Explosif_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_1_OnNewRoundWithChance__DelegateSignature_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.ExecuteUbergraph_BP_EventExplosiveAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EventExplosiveAsset_C::ExecuteUbergraph_BP_EventExplosiveAsset(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EventExplosiveAsset.BP_EventExplosiveAsset_C.ExecuteUbergraph_BP_EventExplosiveAsset");
		
		ABP_EventExplosiveAsset_C_ExecuteUbergraph_BP_EventExplosiveAsset_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EventExplosiveAsset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EventExplosiveAsset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventExplosiveAsset.BP_EventExplosiveAsset_C");
		return ptr;
	}

}


