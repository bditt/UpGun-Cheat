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
	 * 		Name   -> PredefinedFunction AForteresseSemiTour_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AForteresseSemiTour_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ForteresseSemiTour.ForteresseSemiTour_C");
		return ptr;
	}

}


