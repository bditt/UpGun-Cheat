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
	 * Function BP_Fireflies.BP_Fireflies_C.Time
	 */
	struct ABP_Fireflies_C_Time_Params
	{
	public:
		bool                                                       IsDay;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Fireflies.BP_Fireflies_C.ReceiveBeginPlay
	 */
	struct ABP_Fireflies_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Fireflies.BP_Fireflies_C.BndEvt__BP_Fireflies_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature
	 */
	struct ABP_Fireflies_C_BndEvt__BP_Fireflies_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRound__DelegateSignature_Params
	{
	public:
		unsigned char                                              Round;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Fireflies.BP_Fireflies_C.ExecuteUbergraph_BP_Fireflies
	 */
	struct ABP_Fireflies_C_ExecuteUbergraph_BP_Fireflies_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
