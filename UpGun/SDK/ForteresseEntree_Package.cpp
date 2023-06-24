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
	 * 		Name   -> PredefinedFunction AForteresseEntree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AForteresseEntree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ForteresseEntree.ForteresseEntree_C");
		return ptr;
	}

}


