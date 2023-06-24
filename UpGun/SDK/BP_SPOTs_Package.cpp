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
	 * 		Name   -> Function BP_SPOTs.BP_SPOTs_C.Season
	 * 		Flags  -> ()
	 */
	void ABP_SPOTs_C::Season()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SPOTs.BP_SPOTs_C.Season");
		
		ABP_SPOTs_C_Season_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SPOTs.BP_SPOTs_C.ChangeLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlaySound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsDay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SPOTs_C::ChangeLight(bool PlaySound, bool IsDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SPOTs.BP_SPOTs_C.ChangeLight");
		
		ABP_SPOTs_C_ChangeLight_Params params {};
		params.PlaySound = PlaySound;
		params.IsDay = IsDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SPOTs.BP_SPOTs_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SPOTs_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SPOTs.BP_SPOTs_C.UserConstructionScript");
		
		ABP_SPOTs_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SPOTs.BP_SPOTs_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SPOTs_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SPOTs.BP_SPOTs_C.ReceiveBeginPlay");
		
		ABP_SPOTs_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SPOTs.BP_SPOTs_C.Time
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SPOTs_C::Time(bool IsDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SPOTs.BP_SPOTs_C.Time");
		
		ABP_SPOTs_C_Time_Params params {};
		params.IsDay = IsDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SPOTs.BP_SPOTs_C.ExecuteUbergraph_BP_SPOTs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SPOTs_C::ExecuteUbergraph_BP_SPOTs(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SPOTs.BP_SPOTs_C.ExecuteUbergraph_BP_SPOTs");
		
		ABP_SPOTs_C_ExecuteUbergraph_BP_SPOTs_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SPOTs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SPOTs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SPOTs.BP_SPOTs_C");
		return ptr;
	}

}


