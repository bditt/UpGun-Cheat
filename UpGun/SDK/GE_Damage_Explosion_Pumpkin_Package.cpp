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
	 * 		Name   -> PredefinedFunction UGE_Damage_Explosion_Pumpkin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Damage_Explosion_Pumpkin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Damage_Explosion_Pumpkin.GE_Damage_Explosion_Pumpkin_C");
		return ptr;
	}

}


