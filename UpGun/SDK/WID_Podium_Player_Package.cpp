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
	 * 		Name   -> Function WID_Podium_Player.WID_Podium_Player_C.SetColor
	 * 		Flags  -> ()
	 */
	void UWID_Podium_Player_C::SetColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Podium_Player.WID_Podium_Player_C.SetColor");
		
		UWID_Podium_Player_C_SetColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WID_Podium_Player.WID_Podium_Player_C.UpdateUI
	 * 		Flags  -> ()
	 */
	void UWID_Podium_Player_C::UpdateUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WID_Podium_Player.WID_Podium_Player_C.UpdateUI");
		
		UWID_Podium_Player_C_UpdateUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWID_Podium_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWID_Podium_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WID_Podium_Player.WID_Podium_Player_C");
		return ptr;
	}

}


