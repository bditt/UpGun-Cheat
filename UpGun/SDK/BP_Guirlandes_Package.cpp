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
	 * 		Name   -> Function BP_Guirlandes.BP_Guirlandes_C.Chrismas
	 * 		Flags  -> ()
	 */
	void ABP_Guirlandes_C::Chrismas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Guirlandes.BP_Guirlandes_C.Chrismas");
		
		ABP_Guirlandes_C_Chrismas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guirlandes.BP_Guirlandes_C.Halloween
	 * 		Flags  -> ()
	 */
	void ABP_Guirlandes_C::Halloween()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Guirlandes.BP_Guirlandes_C.Halloween");
		
		ABP_Guirlandes_C_Halloween_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guirlandes.BP_Guirlandes_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Guirlandes_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Guirlandes.BP_Guirlandes_C.UserConstructionScript");
		
		ABP_Guirlandes_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guirlandes.BP_Guirlandes_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Guirlandes_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Guirlandes.BP_Guirlandes_C.ReceiveBeginPlay");
		
		ABP_Guirlandes_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Guirlandes.BP_Guirlandes_C.ExecuteUbergraph_BP_Guirlandes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Guirlandes_C::ExecuteUbergraph_BP_Guirlandes(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Guirlandes.BP_Guirlandes_C.ExecuteUbergraph_BP_Guirlandes");
		
		ABP_Guirlandes_C_ExecuteUbergraph_BP_Guirlandes_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Guirlandes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Guirlandes_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Guirlandes.BP_Guirlandes_C");
		return ptr;
	}

}


