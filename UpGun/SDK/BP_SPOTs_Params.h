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
	 * Function BP_SPOTs.BP_SPOTs_C.Season
	 */
	struct ABP_SPOTs_C_Season_Params
	{	};

	/**
	 * Function BP_SPOTs.BP_SPOTs_C.ChangeLight
	 */
	struct ABP_SPOTs_C_ChangeLight_Params
	{
	public:
		bool                                                       PlaySound;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsDay;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SPOTs.BP_SPOTs_C.UserConstructionScript
	 */
	struct ABP_SPOTs_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_SPOTs.BP_SPOTs_C.ReceiveBeginPlay
	 */
	struct ABP_SPOTs_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SPOTs.BP_SPOTs_C.Time
	 */
	struct ABP_SPOTs_C_Time_Params
	{
	public:
		bool                                                       IsDay;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SPOTs.BP_SPOTs_C.ExecuteUbergraph_BP_SPOTs
	 */
	struct ABP_SPOTs_C_ExecuteUbergraph_BP_SPOTs_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
