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
	 * 		Name   -> PredefinedFunction AMap_airsoft_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMap_airsoft_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Map_airsoft.Map_airsoft_C");
		return ptr;
	}

}


