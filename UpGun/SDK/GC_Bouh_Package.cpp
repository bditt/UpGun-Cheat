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
	 * 		Name   -> Function GC_Bouh.GC_Bouh_C.GetColor
	 * 		Flags  -> ()
	 */
	void AGC_Bouh_C::GetColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Bouh.GC_Bouh_C.GetColor");
		
		AGC_Bouh_C_GetColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Bouh.GC_Bouh_C.FadePP__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AGC_Bouh_C::FadePP__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Bouh.GC_Bouh_C.FadePP__FinishedFunc");
		
		AGC_Bouh_C_FadePP__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Bouh.GC_Bouh_C.FadePP__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AGC_Bouh_C::FadePP__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Bouh.GC_Bouh_C.FadePP__UpdateFunc");
		
		AGC_Bouh_C_FadePP__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Bouh.GC_Bouh_C.K2_HandleGameplayCue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGameplayCueEvent                                  EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void AGC_Bouh_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Bouh.GC_Bouh_C.K2_HandleGameplayCue");
		
		AGC_Bouh_C_K2_HandleGameplayCue_Params params {};
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
	 * 		Name   -> Function GC_Bouh.GC_Bouh_C.ExecuteUbergraph_GC_Bouh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGC_Bouh_C::ExecuteUbergraph_GC_Bouh(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Bouh.GC_Bouh_C.ExecuteUbergraph_GC_Bouh");
		
		AGC_Bouh_C_ExecuteUbergraph_GC_Bouh_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGC_Bouh_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Bouh_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Bouh.GC_Bouh_C");
		return ptr;
	}

}


