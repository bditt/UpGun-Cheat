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
	 * Function BP_Weather.BP_Weather_C.SpawnSnow
	 */
	struct ABP_Weather_C_SpawnSnow_Params
	{	};

	/**
	 * Function BP_Weather.BP_Weather_C.OnRep_Snow
	 */
	struct ABP_Weather_C_OnRep_Snow_Params
	{	};

	/**
	 * Function BP_Weather.BP_Weather_C.ReceiveBeginPlay
	 */
	struct ABP_Weather_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Weather.BP_Weather_C.ExecuteUbergraph_BP_Weather
	 */
	struct ABP_Weather_C_ExecuteUbergraph_BP_Weather_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GZYQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
