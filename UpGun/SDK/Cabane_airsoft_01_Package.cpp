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
	 * 		Name   -> PredefinedFunction ACabane_airsoft_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACabane_airsoft_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cabane_airsoft_01.Cabane_airsoft_01_C");
		return ptr;
	}

}


