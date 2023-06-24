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
	 * 		Name   -> Function GC_WeaponAttachement.GC_WeaponAttachement_C.OnCharacterKilled
	 * 		Flags  -> ()
	 */
	void AGC_WeaponAttachement_C::OnCharacterKilled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_WeaponAttachement.GC_WeaponAttachement_C.OnCharacterKilled");
		
		AGC_WeaponAttachement_C_OnCharacterKilled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_WeaponAttachement.GC_WeaponAttachement_C.OnPlayerRespawned
	 * 		Flags  -> ()
	 */
	void AGC_WeaponAttachement_C::OnPlayerRespawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_WeaponAttachement.GC_WeaponAttachement_C.OnPlayerRespawned");
		
		AGC_WeaponAttachement_C_OnPlayerRespawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_WeaponAttachement.GC_WeaponAttachement_C.WhileActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	bool AGC_WeaponAttachement_C::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_WeaponAttachement.GC_WeaponAttachement_C.WhileActive");
		
		AGC_WeaponAttachement_C_WhileActive_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_WeaponAttachement.GC_WeaponAttachement_C.Attach
	 * 		Flags  -> ()
	 */
	void AGC_WeaponAttachement_C::Attach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_WeaponAttachement.GC_WeaponAttachement_C.Attach");
		
		AGC_WeaponAttachement_C_Attach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_WeaponAttachement.GC_WeaponAttachement_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGC_WeaponAttachement_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_WeaponAttachement.GC_WeaponAttachement_C.ReceiveTick");
		
		AGC_WeaponAttachement_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_WeaponAttachement.GC_WeaponAttachement_C.ExecuteUbergraph_GC_WeaponAttachement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGC_WeaponAttachement_C::ExecuteUbergraph_GC_WeaponAttachement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_WeaponAttachement.GC_WeaponAttachement_C.ExecuteUbergraph_GC_WeaponAttachement");
		
		AGC_WeaponAttachement_C_ExecuteUbergraph_GC_WeaponAttachement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGC_WeaponAttachement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_WeaponAttachement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_WeaponAttachement.GC_WeaponAttachement_C");
		return ptr;
	}

}


