﻿#pragma once

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
	 * Function GC_Grappin.GC_Grappin_C.CableManagement
	 */
	struct AGC_Grappin_C_CableManagement_Params
	{	};

	/**
	 * Function GC_Grappin.GC_Grappin_C.Timeline_0__FinishedFunc
	 */
	struct AGC_Grappin_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function GC_Grappin.GC_Grappin_C.Timeline_0__UpdateFunc
	 */
	struct AGC_Grappin_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function GC_Grappin.GC_Grappin_C.MoveGrappin
	 */
	struct AGC_Grappin_C_MoveGrappin_Params
	{	};

	/**
	 * Function GC_Grappin.GC_Grappin_C.K2_HandleGameplayCue
	 */
	struct AGC_Grappin_C_K2_HandleGameplayCue_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGameplayCueEvent                                          EventType;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AYQ7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0010(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function GC_Grappin.GC_Grappin_C.ExecuteUbergraph_GC_Grappin
	 */
	struct AGC_Grappin_C_ExecuteUbergraph_GC_Grappin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
