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
	 * 		Name   -> Function GC_Skill_Helmet.GC_Skill_Helmet_C.SpawnComponent
	 * 		Flags  -> ()
	 */
	void AGC_Skill_Helmet_C::SpawnComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Skill_Helmet.GC_Skill_Helmet_C.SpawnComponent");
		
		AGC_Skill_Helmet_C_SpawnComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Skill_Helmet.GC_Skill_Helmet_C.OnPlayerRespawned
	 * 		Flags  -> ()
	 */
	void AGC_Skill_Helmet_C::OnPlayerRespawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Skill_Helmet.GC_Skill_Helmet_C.OnPlayerRespawned");
		
		AGC_Skill_Helmet_C_OnPlayerRespawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Skill_Helmet.GC_Skill_Helmet_C.WhileActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	bool AGC_Skill_Helmet_C::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Skill_Helmet.GC_Skill_Helmet_C.WhileActive");
		
		AGC_Skill_Helmet_C_WhileActive_Params params {};
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
	 * 		Name   -> PredefinedFunction AGC_Skill_Helmet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Skill_Helmet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Skill_Helmet.GC_Skill_Helmet_C");
		return ptr;
	}

}


