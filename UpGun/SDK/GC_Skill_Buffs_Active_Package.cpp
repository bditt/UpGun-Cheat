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
	 * 		Name   -> Function GC_Skill_Buffs_Active.GC_Skill_Buffs_Active_C.K2_HandleGameplayCue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGameplayCueEvent                                  EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void AGC_Skill_Buffs_Active_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Skill_Buffs_Active.GC_Skill_Buffs_Active_C.K2_HandleGameplayCue");
		
		AGC_Skill_Buffs_Active_C_K2_HandleGameplayCue_Params params {};
		params.MyTarget = MyTarget;
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Skill_Buffs_Active.GC_Skill_Buffs_Active_C.ExecuteUbergraph_GC_Skill_Buffs_Active
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGC_Skill_Buffs_Active_C::ExecuteUbergraph_GC_Skill_Buffs_Active(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Skill_Buffs_Active.GC_Skill_Buffs_Active_C.ExecuteUbergraph_GC_Skill_Buffs_Active");
		
		AGC_Skill_Buffs_Active_C_ExecuteUbergraph_GC_Skill_Buffs_Active_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGC_Skill_Buffs_Active_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Skill_Buffs_Active_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Skill_Buffs_Active.GC_Skill_Buffs_Active_C");
		return ptr;
	}

}


