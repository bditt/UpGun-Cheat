#pragma once

/**
 * Name: UpGun
 * Version: Live
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GC_Skill_SecondaryWeapon_Laser.GC_Skill_SecondaryWeapon_Laser_C.SpawnDecal
	 */
	struct UGC_Skill_SecondaryWeapon_Laser_C_SpawnDecal_Params
	{
	public:
		bool                                                       Spawn;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NGQ3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     AttachToComponent;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AttachPointName;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Normal;                                                  // 0x0024(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GC_Skill_SecondaryWeapon_Laser.GC_Skill_SecondaryWeapon_Laser_C.Get Weapon
	 */
	struct UGC_Skill_SecondaryWeapon_Laser_C_GetWeapon_Params
	{
	public:
		struct FGameplayCueParameters                              Parameters;                                              // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		class UPrimitiveComponent*                                 Weapon;                                                  // 0x00B8(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GC_Skill_SecondaryWeapon_Laser.GC_Skill_SecondaryWeapon_Laser_C.OnExecute
	 */
	struct UGC_Skill_SecondaryWeapon_Laser_C_OnExecute_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4TAS[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GC_Skill_SecondaryWeapon_Laser.GC_Skill_SecondaryWeapon_Laser_C.SpawnProjectile
	 */
	struct UGC_Skill_SecondaryWeapon_Laser_C_SpawnProjectile_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
