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
	 * 		Name   -> Function GC_Skill_SecondaryWeapon_Laser.GC_Skill_SecondaryWeapon_Laser_C.SpawnDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Spawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             AttachToComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AttachPointName                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Normal                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGC_Skill_SecondaryWeapon_Laser_C::SpawnDecal(bool* Spawn, class USceneComponent** AttachToComponent, class FName* AttachPointName, struct FVector* Location, const struct FVector& Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Skill_SecondaryWeapon_Laser.GC_Skill_SecondaryWeapon_Laser_C.SpawnDecal");
		
		UGC_Skill_SecondaryWeapon_Laser_C_SpawnDecal_Params params {};
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Spawn != nullptr)
			*Spawn = params.Spawn;
		if (AttachToComponent != nullptr)
			*AttachToComponent = params.AttachToComponent;
		if (AttachPointName != nullptr)
			*AttachPointName = params.AttachPointName;
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Skill_SecondaryWeapon_Laser.GC_Skill_SecondaryWeapon_Laser_C.Get Weapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayCueParameters                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		class UPrimitiveComponent*                         Weapon                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGC_Skill_SecondaryWeapon_Laser_C::GetWeapon(const struct FGameplayCueParameters& Parameters, class UPrimitiveComponent** Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Skill_SecondaryWeapon_Laser.GC_Skill_SecondaryWeapon_Laser_C.Get Weapon");
		
		UGC_Skill_SecondaryWeapon_Laser_C_GetWeapon_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Weapon != nullptr)
			*Weapon = params.Weapon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Skill_SecondaryWeapon_Laser.GC_Skill_SecondaryWeapon_Laser_C.OnExecute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	bool UGC_Skill_SecondaryWeapon_Laser_C::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Skill_SecondaryWeapon_Laser.GC_Skill_SecondaryWeapon_Laser_C.OnExecute");
		
		UGC_Skill_SecondaryWeapon_Laser_C_OnExecute_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GC_Skill_SecondaryWeapon_Laser.GC_Skill_SecondaryWeapon_Laser_C.SpawnProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     End                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGC_Skill_SecondaryWeapon_Laser_C::SpawnProjectile(const struct FVector& Start, const struct FVector& End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GC_Skill_SecondaryWeapon_Laser.GC_Skill_SecondaryWeapon_Laser_C.SpawnProjectile");
		
		UGC_Skill_SecondaryWeapon_Laser_C_SpawnProjectile_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGC_Skill_SecondaryWeapon_Laser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Skill_SecondaryWeapon_Laser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Skill_SecondaryWeapon_Laser.GC_Skill_SecondaryWeapon_Laser_C");
		return ptr;
	}

}


