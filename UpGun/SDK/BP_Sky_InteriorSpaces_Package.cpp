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
	 * 		Name   -> Function BP_Sky_InteriorSpaces.BP_Sky_InteriorSpaces_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Sky_InteriorSpaces_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_InteriorSpaces.BP_Sky_InteriorSpaces_C.UserConstructionScript");
		
		ABP_Sky_InteriorSpaces_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_InteriorSpaces.BP_Sky_InteriorSpaces_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Sky_InteriorSpaces_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_InteriorSpaces.BP_Sky_InteriorSpaces_C.ReceiveBeginPlay");
		
		ABP_Sky_InteriorSpaces_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_InteriorSpaces.BP_Sky_InteriorSpaces_C.ExecuteUbergraph_BP_Sky_InteriorSpaces
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sky_InteriorSpaces_C::ExecuteUbergraph_BP_Sky_InteriorSpaces(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_InteriorSpaces.BP_Sky_InteriorSpaces_C.ExecuteUbergraph_BP_Sky_InteriorSpaces");
		
		ABP_Sky_InteriorSpaces_C_ExecuteUbergraph_BP_Sky_InteriorSpaces_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Sky_InteriorSpaces_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Sky_InteriorSpaces_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sky_InteriorSpaces.BP_Sky_InteriorSpaces_C");
		return ptr;
	}

}


