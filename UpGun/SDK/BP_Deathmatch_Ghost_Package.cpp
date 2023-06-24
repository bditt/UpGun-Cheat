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
	 * 		Name   -> Function BP_Deathmatch_Ghost.BP_Deathmatch_Ghost_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Deathmatch_Ghost_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_Ghost.BP_Deathmatch_Ghost_C.ReceiveBeginPlay");
		
		ABP_Deathmatch_Ghost_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Deathmatch_Ghost.BP_Deathmatch_Ghost_C.ExecuteUbergraph_BP_Deathmatch_Ghost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Deathmatch_Ghost_C::ExecuteUbergraph_BP_Deathmatch_Ghost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Deathmatch_Ghost.BP_Deathmatch_Ghost_C.ExecuteUbergraph_BP_Deathmatch_Ghost");
		
		ABP_Deathmatch_Ghost_C_ExecuteUbergraph_BP_Deathmatch_Ghost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Deathmatch_Ghost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Deathmatch_Ghost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Deathmatch_Ghost.BP_Deathmatch_Ghost_C");
		return ptr;
	}

}


