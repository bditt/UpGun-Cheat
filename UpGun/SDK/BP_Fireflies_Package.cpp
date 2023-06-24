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
	 * 		Name   -> Function BP_Fireflies.BP_Fireflies_C.Time
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Fireflies_C::Time(bool IsDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fireflies.BP_Fireflies_C.Time");
		
		ABP_Fireflies_C_Time_Params params {};
		params.IsDay = IsDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fireflies.BP_Fireflies_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Fireflies_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fireflies.BP_Fireflies_C.ReceiveBeginPlay");
		
		ABP_Fireflies_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fireflies.BP_Fireflies_C.BndEvt__BP_Fireflies_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fireflies_C::BndEvt__BP_Fireflies_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature(unsigned char Round)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fireflies.BP_Fireflies_C.BndEvt__BP_Fireflies_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature");
		
		ABP_Fireflies_C_BndEvt__BP_Fireflies_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Fireflies.BP_Fireflies_C.ExecuteUbergraph_BP_Fireflies
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Fireflies_C::ExecuteUbergraph_BP_Fireflies(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Fireflies.BP_Fireflies_C.ExecuteUbergraph_BP_Fireflies");
		
		ABP_Fireflies_C_ExecuteUbergraph_BP_Fireflies_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Fireflies_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Fireflies_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Fireflies.BP_Fireflies_C");
		return ptr;
	}

}


