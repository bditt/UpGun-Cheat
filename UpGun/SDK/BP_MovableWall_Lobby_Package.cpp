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
	 * 		Name   -> Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.OnRep_IsOpen
	 * 		Flags  -> ()
	 */
	void ABP_MovableWall_Lobby_C::OnRep_IsOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.OnRep_IsOpen");
		
		ABP_MovableWall_Lobby_C_OnRep_IsOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_MovableWall_Lobby_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.UserConstructionScript");
		
		ABP_MovableWall_Lobby_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_MovableWall_Lobby_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Timeline_0__FinishedFunc");
		
		ABP_MovableWall_Lobby_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_MovableWall_Lobby_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Timeline_0__UpdateFunc");
		
		ABP_MovableWall_Lobby_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MovableWall_Lobby_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.ReceiveBeginPlay");
		
		ABP_MovableWall_Lobby_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Open
	 * 		Flags  -> ()
	 */
	void ABP_MovableWall_Lobby_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Open");
		
		ABP_MovableWall_Lobby_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Close
	 * 		Flags  -> ()
	 */
	void ABP_MovableWall_Lobby_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Close");
		
		ABP_MovableWall_Lobby_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MovableWall_Lobby_C::Damage(const struct FGameplayEffectSpec& Spec, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Damage");
		
		ABP_MovableWall_Lobby_C_Damage_Params params {};
		params.Spec = Spec;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.ExecuteUbergraph_BP_MovableWall_Lobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MovableWall_Lobby_C::ExecuteUbergraph_BP_MovableWall_Lobby(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.ExecuteUbergraph_BP_MovableWall_Lobby");
		
		ABP_MovableWall_Lobby_C_ExecuteUbergraph_BP_MovableWall_Lobby_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MovableWall_Lobby_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MovableWall_Lobby_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MovableWall_Lobby.BP_MovableWall_Lobby_C");
		return ptr;
	}

}


