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
	 * 		Name   -> Function BP_Podium.BP_Podium_C.SpawnPlayers
	 * 		Flags  -> ()
	 */
	void ABP_Podium_C::SpawnPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Podium.BP_Podium_C.SpawnPlayers");
		
		ABP_Podium_C_SpawnPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Podium.BP_Podium_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Podium_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Podium.BP_Podium_C.Timeline_0__FinishedFunc");
		
		ABP_Podium_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Podium.BP_Podium_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Podium_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Podium.BP_Podium_C.Timeline_0__UpdateFunc");
		
		ABP_Podium_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Podium.BP_Podium_C.SwitchToPodium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUpGunPodiumPlayerInfos>             InPlayers                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Podium_C::SwitchToPodium(TArray<struct FUpGunPodiumPlayerInfos> InPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Podium.BP_Podium_C.SwitchToPodium");
		
		ABP_Podium_C_SwitchToPodium_Params params {};
		params.InPlayers = InPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Podium.BP_Podium_C.ExecuteUbergraph_BP_Podium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Podium_C::ExecuteUbergraph_BP_Podium(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Podium.BP_Podium_C.ExecuteUbergraph_BP_Podium");
		
		ABP_Podium_C_ExecuteUbergraph_BP_Podium_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Podium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Podium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Podium.BP_Podium_C");
		return ptr;
	}

}


