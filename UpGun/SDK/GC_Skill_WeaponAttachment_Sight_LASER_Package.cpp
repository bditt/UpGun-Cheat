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
	 * 		Name   -> Function GC_Skill_WeaponAttachment_Sight_LASER.GC_Skill_WeaponAttachment_Sight_LASER_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGC_Skill_WeaponAttachment_Sight_LASER_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Skill_WeaponAttachment_Sight_LASER.GC_Skill_WeaponAttachment_Sight_LASER_C.ReceiveTick");
		
		AGC_Skill_WeaponAttachment_Sight_LASER_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Skill_WeaponAttachment_Sight_LASER.GC_Skill_WeaponAttachment_Sight_LASER_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGC_Skill_WeaponAttachment_Sight_LASER_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Skill_WeaponAttachment_Sight_LASER.GC_Skill_WeaponAttachment_Sight_LASER_C.ReceiveBeginPlay");
		
		AGC_Skill_WeaponAttachment_Sight_LASER_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Skill_WeaponAttachment_Sight_LASER.GC_Skill_WeaponAttachment_Sight_LASER_C.OnCharacterKilled_
	 * 		Flags  -> ()
	 */
	void AGC_Skill_WeaponAttachment_Sight_LASER_C::OnCharacterKilled_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Skill_WeaponAttachment_Sight_LASER.GC_Skill_WeaponAttachment_Sight_LASER_C.OnCharacterKilled_");
		
		AGC_Skill_WeaponAttachment_Sight_LASER_C_OnCharacterKilled__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Skill_WeaponAttachment_Sight_LASER.GC_Skill_WeaponAttachment_Sight_LASER_C.ExecuteUbergraph_GC_Skill_WeaponAttachment_Sight_LASER
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGC_Skill_WeaponAttachment_Sight_LASER_C::ExecuteUbergraph_GC_Skill_WeaponAttachment_Sight_LASER(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Skill_WeaponAttachment_Sight_LASER.GC_Skill_WeaponAttachment_Sight_LASER_C.ExecuteUbergraph_GC_Skill_WeaponAttachment_Sight_LASER");
		
		AGC_Skill_WeaponAttachment_Sight_LASER_C_ExecuteUbergraph_GC_Skill_WeaponAttachment_Sight_LASER_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGC_Skill_WeaponAttachment_Sight_LASER_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Skill_WeaponAttachment_Sight_LASER_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Skill_WeaponAttachment_Sight_LASER.GC_Skill_WeaponAttachment_Sight_LASER_C");
		return ptr;
	}

}


