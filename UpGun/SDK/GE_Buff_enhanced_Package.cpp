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
	 * 		Name   -> PredefinedFunction UGE_Buff_enhanced_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Buff_enhanced_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Buff_enhanced.GE_Buff_enhanced_C");
		return ptr;
	}

}


