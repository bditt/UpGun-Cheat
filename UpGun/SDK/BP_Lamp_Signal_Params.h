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
	 * Function BP_Lamp_Signal.BP_Lamp_Signal_C.SelectColor
	 */
	struct ABP_Lamp_Signal_C_SelectColor_Params
	{
	public:
		class UStaticMesh*                                         SM;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lamp_Signal.BP_Lamp_Signal_C.UpdateVisuals
	 */
	struct ABP_Lamp_Signal_C_UpdateVisuals_Params
	{
	public:
		bool                                                       IsDay;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X07T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Lamp_Signal.BP_Lamp_Signal_C.UserConstructionScript
	 */
	struct ABP_Lamp_Signal_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Lamp_Signal.BP_Lamp_Signal_C.ReceiveBeginPlay
	 */
	struct ABP_Lamp_Signal_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Lamp_Signal.BP_Lamp_Signal_C.Update
	 */
	struct ABP_Lamp_Signal_C_Update_Params
	{
	public:
		bool                                                       IsDay;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Lamp_Signal.BP_Lamp_Signal_C.ExecuteUbergraph_BP_Lamp_Signal
	 */
	struct ABP_Lamp_Signal_C_ExecuteUbergraph_BP_Lamp_Signal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
