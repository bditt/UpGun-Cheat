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
	 * Function GC_Bouh.GC_Bouh_C.GetColor
	 */
	struct AGC_Bouh_C_GetColor_Params
	{	};

	/**
	 * Function GC_Bouh.GC_Bouh_C.FadePP__FinishedFunc
	 */
	struct AGC_Bouh_C_FadePP__FinishedFunc_Params
	{	};

	/**
	 * Function GC_Bouh.GC_Bouh_C.FadePP__UpdateFunc
	 */
	struct AGC_Bouh_C_FadePP__UpdateFunc_Params
	{	};

	/**
	 * Function GC_Bouh.GC_Bouh_C.K2_HandleGameplayCue
	 */
	struct AGC_Bouh_C_K2_HandleGameplayCue_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGameplayCueEvent                                          EventType;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9UL1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0010(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function GC_Bouh.GC_Bouh_C.ExecuteUbergraph_GC_Bouh
	 */
	struct AGC_Bouh_C_ExecuteUbergraph_GC_Bouh_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
