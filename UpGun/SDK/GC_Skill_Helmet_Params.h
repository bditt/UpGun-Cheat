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
	 * Function GC_Skill_Helmet.GC_Skill_Helmet_C.SpawnComponent
	 */
	struct AGC_Skill_Helmet_C_SpawnComponent_Params
	{	};

	/**
	 * Function GC_Skill_Helmet.GC_Skill_Helmet_C.OnPlayerRespawned
	 */
	struct AGC_Skill_Helmet_C_OnPlayerRespawned_Params
	{	};

	/**
	 * Function GC_Skill_Helmet.GC_Skill_Helmet_C.WhileActive
	 */
	struct AGC_Skill_Helmet_C_WhileActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S8A2[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
