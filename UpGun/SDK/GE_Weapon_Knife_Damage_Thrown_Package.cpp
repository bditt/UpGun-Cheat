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
	 * 		Name   -> PredefinedFunction UGE_Weapon_Knife_Damage_Thrown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Weapon_Knife_Damage_Thrown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Weapon_Knife_Damage_Thrown.GE_Weapon_Knife_Damage_Thrown_C");
		return ptr;
	}

}


