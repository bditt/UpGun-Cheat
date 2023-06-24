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
	 * 		Name   -> PredefinedFunction AForteresse_Quart_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AForteresse_Quart_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Forteresse_Quart.Forteresse_Quart_C");
		return ptr;
	}

}


