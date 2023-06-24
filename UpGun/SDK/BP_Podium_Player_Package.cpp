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
	 * 		Name   -> Function BP_Podium_Player.BP_Podium_Player_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Podium_Player_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Podium_Player.BP_Podium_Player_C.ReceiveBeginPlay");
		
		ABP_Podium_Player_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Podium_Player.BP_Podium_Player_C.ExecuteUbergraph_BP_Podium_Player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Podium_Player_C::ExecuteUbergraph_BP_Podium_Player(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Podium_Player.BP_Podium_Player_C.ExecuteUbergraph_BP_Podium_Player");
		
		ABP_Podium_Player_C_ExecuteUbergraph_BP_Podium_Player_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Podium_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Podium_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Podium_Player.BP_Podium_Player_C");
		return ptr;
	}

}


