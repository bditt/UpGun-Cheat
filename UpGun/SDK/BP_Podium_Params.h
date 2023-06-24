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
	 * Function BP_Podium.BP_Podium_C.SpawnPlayers
	 */
	struct ABP_Podium_C_SpawnPlayers_Params
	{	};

	/**
	 * Function BP_Podium.BP_Podium_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Podium_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Podium.BP_Podium_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Podium_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Podium.BP_Podium_C.SwitchToPodium
	 */
	struct ABP_Podium_C_SwitchToPodium_Params
	{
	public:
		TArray<struct FUpGunPodiumPlayerInfos>                     InPlayers;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Podium.BP_Podium_C.ExecuteUbergraph_BP_Podium
	 */
	struct ABP_Podium_C_ExecuteUbergraph_BP_Podium_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
