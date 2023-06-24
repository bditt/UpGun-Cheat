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
	 * Function GC_Boosters.GC_Boosters_C.PlaySound
	 */
	struct AGC_Boosters_C_PlaySound_Params
	{	};

	/**
	 * Function GC_Boosters.GC_Boosters_C.WhileActive
	 */
	struct AGC_Boosters_C_WhileActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_50NF[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GC_Boosters.GC_Boosters_C.OnPlayerRespawned
	 */
	struct AGC_Boosters_C_OnPlayerRespawned_Params
	{	};

	/**
	 * Function GC_Boosters.GC_Boosters_C.SpawnComponents
	 */
	struct AGC_Boosters_C_SpawnComponents_Params
	{	};

	/**
	 * Function GC_Boosters.GC_Boosters_C.Size__FinishedFunc
	 */
	struct AGC_Boosters_C_Size__FinishedFunc_Params
	{	};

	/**
	 * Function GC_Boosters.GC_Boosters_C.Size__UpdateFunc
	 */
	struct AGC_Boosters_C_Size__UpdateFunc_Params
	{	};

	/**
	 * Function GC_Boosters.GC_Boosters_C.K2_HandleGameplayCue
	 */
	struct AGC_Boosters_C_K2_HandleGameplayCue_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGameplayCueEvent                                          EventType;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6FIT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0010(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function GC_Boosters.GC_Boosters_C.ExecuteUbergraph_GC_Boosters
	 */
	struct AGC_Boosters_C_ExecuteUbergraph_GC_Boosters_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
