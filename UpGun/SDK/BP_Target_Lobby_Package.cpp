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
	 * 		Name   -> Function BP_Target_Lobby.BP_Target_Lobby_C.OnRep_IsDown
	 * 		Flags  -> ()
	 */
	void ABP_Target_Lobby_C::OnRep_IsDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Target_Lobby.BP_Target_Lobby_C.OnRep_IsDown");
		
		ABP_Target_Lobby_C_OnRep_IsDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Target_Lobby.BP_Target_Lobby_C.OnRep_IsTargetMoving
	 * 		Flags  -> ()
	 */
	void ABP_Target_Lobby_C::OnRep_IsTargetMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Target_Lobby.BP_Target_Lobby_C.OnRep_IsTargetMoving");
		
		ABP_Target_Lobby_C_OnRep_IsTargetMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Target_Lobby.BP_Target_Lobby_C.Anim__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Target_Lobby_C::Anim__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Target_Lobby.BP_Target_Lobby_C.Anim__FinishedFunc");
		
		ABP_Target_Lobby_C_Anim__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Target_Lobby.BP_Target_Lobby_C.Anim__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Target_Lobby_C::Anim__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Target_Lobby.BP_Target_Lobby_C.Anim__UpdateFunc");
		
		ABP_Target_Lobby_C_Anim__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Target_Lobby.BP_Target_Lobby_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Target_Lobby_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Target_Lobby.BP_Target_Lobby_C.ReceiveBeginPlay");
		
		ABP_Target_Lobby_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Target_Lobby.BP_Target_Lobby_C.Down
	 * 		Flags  -> ()
	 */
	void ABP_Target_Lobby_C::Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Target_Lobby.BP_Target_Lobby_C.Down");
		
		ABP_Target_Lobby_C_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Target_Lobby.BP_Target_Lobby_C.Up
	 * 		Flags  -> ()
	 */
	void ABP_Target_Lobby_C::Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Target_Lobby.BP_Target_Lobby_C.Up");
		
		ABP_Target_Lobby_C_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Target_Lobby.BP_Target_Lobby_C.MoveForward
	 * 		Flags  -> ()
	 */
	void ABP_Target_Lobby_C::MoveForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Target_Lobby.BP_Target_Lobby_C.MoveForward");
		
		ABP_Target_Lobby_C_MoveForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Target_Lobby.BP_Target_Lobby_C.MoveBack
	 * 		Flags  -> ()
	 */
	void ABP_Target_Lobby_C::MoveBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Target_Lobby.BP_Target_Lobby_C.MoveBack");
		
		ABP_Target_Lobby_C_MoveBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Target_Lobby.BP_Target_Lobby_C.Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Target_Lobby_C::Damage(const struct FGameplayEffectSpec& Spec, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Target_Lobby.BP_Target_Lobby_C.Damage");
		
		ABP_Target_Lobby_C_Damage_Params params {};
		params.Spec = Spec;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Target_Lobby.BP_Target_Lobby_C.ExecuteUbergraph_BP_Target_Lobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Target_Lobby_C::ExecuteUbergraph_BP_Target_Lobby(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Target_Lobby.BP_Target_Lobby_C.ExecuteUbergraph_BP_Target_Lobby");
		
		ABP_Target_Lobby_C_ExecuteUbergraph_BP_Target_Lobby_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Target_Lobby.BP_Target_Lobby_C.TargetDown__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Target_Lobby_C::TargetDown__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Target_Lobby.BP_Target_Lobby_C.TargetDown__DelegateSignature");
		
		ABP_Target_Lobby_C_TargetDown__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Target_Lobby_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Target_Lobby_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Target_Lobby.BP_Target_Lobby_C");
		return ptr;
	}

}


