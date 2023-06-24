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
	 * 		Name   -> Function GC_Boosters.GC_Boosters_C.PlaySound
	 * 		Flags  -> ()
	 */
	void AGC_Boosters_C::PlaySound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Boosters.GC_Boosters_C.PlaySound");
		
		AGC_Boosters_C_PlaySound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Boosters.GC_Boosters_C.WhileActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	bool AGC_Boosters_C::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Boosters.GC_Boosters_C.WhileActive");
		
		AGC_Boosters_C_WhileActive_Params params {};
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
	 * 		Name   -> Function GC_Boosters.GC_Boosters_C.OnPlayerRespawned
	 * 		Flags  -> ()
	 */
	void AGC_Boosters_C::OnPlayerRespawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Boosters.GC_Boosters_C.OnPlayerRespawned");
		
		AGC_Boosters_C_OnPlayerRespawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Boosters.GC_Boosters_C.SpawnComponents
	 * 		Flags  -> ()
	 */
	void AGC_Boosters_C::SpawnComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Boosters.GC_Boosters_C.SpawnComponents");
		
		AGC_Boosters_C_SpawnComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Boosters.GC_Boosters_C.Size__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AGC_Boosters_C::Size__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Boosters.GC_Boosters_C.Size__FinishedFunc");
		
		AGC_Boosters_C_Size__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Boosters.GC_Boosters_C.Size__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AGC_Boosters_C::Size__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Boosters.GC_Boosters_C.Size__UpdateFunc");
		
		AGC_Boosters_C_Size__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Boosters.GC_Boosters_C.K2_HandleGameplayCue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGameplayCueEvent                                  EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void AGC_Boosters_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Boosters.GC_Boosters_C.K2_HandleGameplayCue");
		
		AGC_Boosters_C_K2_HandleGameplayCue_Params params {};
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
	 * 		Name   -> Function GC_Boosters.GC_Boosters_C.ExecuteUbergraph_GC_Boosters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGC_Boosters_C::ExecuteUbergraph_GC_Boosters(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Boosters.GC_Boosters_C.ExecuteUbergraph_GC_Boosters");
		
		AGC_Boosters_C_ExecuteUbergraph_GC_Boosters_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGC_Boosters_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Boosters_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Boosters.GC_Boosters_C");
		return ptr;
	}

}


