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
	 * Function GC_WeaponAttachement.GC_WeaponAttachement_C.OnCharacterKilled
	 */
	struct AGC_WeaponAttachement_C_OnCharacterKilled_Params
	{	};

	/**
	 * Function GC_WeaponAttachement.GC_WeaponAttachement_C.OnPlayerRespawned
	 */
	struct AGC_WeaponAttachement_C_OnPlayerRespawned_Params
	{	};

	/**
	 * Function GC_WeaponAttachement.GC_WeaponAttachement_C.WhileActive
	 */
	struct AGC_WeaponAttachement_C_WhileActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W9QA[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GC_WeaponAttachement.GC_WeaponAttachement_C.Attach
	 */
	struct AGC_WeaponAttachement_C_Attach_Params
	{	};

	/**
	 * Function GC_WeaponAttachement.GC_WeaponAttachement_C.ReceiveTick
	 */
	struct AGC_WeaponAttachement_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GC_WeaponAttachement.GC_WeaponAttachement_C.ExecuteUbergraph_GC_WeaponAttachement
	 */
	struct AGC_WeaponAttachement_C_ExecuteUbergraph_GC_WeaponAttachement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
