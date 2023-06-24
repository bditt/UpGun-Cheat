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
	 * 		Name   -> Function BP_Event_StaticAsset.BP_Event_StaticAsset_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Event_StaticAsset_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Event_StaticAsset.BP_Event_StaticAsset_C.UserConstructionScript");
		
		ABP_Event_StaticAsset_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Event_StaticAsset.BP_Event_StaticAsset_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Event_StaticAsset_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Event_StaticAsset.BP_Event_StaticAsset_C.ReceiveBeginPlay");
		
		ABP_Event_StaticAsset_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Event_StaticAsset.BP_Event_StaticAsset_C.ExecuteUbergraph_BP_Event_StaticAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Event_StaticAsset_C::ExecuteUbergraph_BP_Event_StaticAsset(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Event_StaticAsset.BP_Event_StaticAsset_C.ExecuteUbergraph_BP_Event_StaticAsset");
		
		ABP_Event_StaticAsset_C_ExecuteUbergraph_BP_Event_StaticAsset_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Event_StaticAsset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Event_StaticAsset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Event_StaticAsset.BP_Event_StaticAsset_C");
		return ptr;
	}

}


