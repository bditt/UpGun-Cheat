﻿/**
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
	 * 		Name   -> PredefinedFunction UGE_Weapon_Rifle_Damage_ChargedSpray_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Weapon_Rifle_Damage_ChargedSpray_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Weapon_Rifle_Damage_ChargedSpray.GE_Weapon_Rifle_Damage_ChargedSpray_C");
		return ptr;
	}

}


