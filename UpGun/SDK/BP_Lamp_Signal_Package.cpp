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
	 * 		Name   -> Function BP_Lamp_Signal.BP_Lamp_Signal_C.SelectColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMesh*                                 SM                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lamp_Signal_C::SelectColor(class UStaticMesh** SM, struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lamp_Signal.BP_Lamp_Signal_C.SelectColor");
		
		ABP_Lamp_Signal_C_SelectColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SM != nullptr)
			*SM = params.SM;
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lamp_Signal.BP_Lamp_Signal_C.UpdateVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Lamp_Signal_C::UpdateVisuals(bool IsDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lamp_Signal.BP_Lamp_Signal_C.UpdateVisuals");
		
		ABP_Lamp_Signal_C_UpdateVisuals_Params params {};
		params.IsDay = IsDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lamp_Signal.BP_Lamp_Signal_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Lamp_Signal_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lamp_Signal.BP_Lamp_Signal_C.UserConstructionScript");
		
		ABP_Lamp_Signal_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lamp_Signal.BP_Lamp_Signal_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Lamp_Signal_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lamp_Signal.BP_Lamp_Signal_C.ReceiveBeginPlay");
		
		ABP_Lamp_Signal_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lamp_Signal.BP_Lamp_Signal_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Lamp_Signal_C::Update(bool IsDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lamp_Signal.BP_Lamp_Signal_C.Update");
		
		ABP_Lamp_Signal_C_Update_Params params {};
		params.IsDay = IsDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lamp_Signal.BP_Lamp_Signal_C.ExecuteUbergraph_BP_Lamp_Signal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lamp_Signal_C::ExecuteUbergraph_BP_Lamp_Signal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Lamp_Signal.BP_Lamp_Signal_C.ExecuteUbergraph_BP_Lamp_Signal");
		
		ABP_Lamp_Signal_C_ExecuteUbergraph_BP_Lamp_Signal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Lamp_Signal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Lamp_Signal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lamp_Signal.BP_Lamp_Signal_C");
		return ptr;
	}

}


