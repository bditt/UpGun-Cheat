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
	 * 		Name   -> PredefinedFunction AGC_Skill_Boosters_Slide_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Skill_Boosters_Slide_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Skill_Boosters_Slide.GC_Skill_Boosters_Slide_C");
		return ptr;
	}

}


