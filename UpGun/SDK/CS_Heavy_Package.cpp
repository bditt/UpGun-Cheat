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
	 * 		Name   -> PredefinedFunction UCS_Heavy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_Heavy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CS_Heavy.CS_Heavy_C");
		return ptr;
	}

}


