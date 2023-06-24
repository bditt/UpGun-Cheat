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
	 * Function BP_Target_Lobby.BP_Target_Lobby_C.OnRep_IsDown
	 */
	struct ABP_Target_Lobby_C_OnRep_IsDown_Params
	{	};

	/**
	 * Function BP_Target_Lobby.BP_Target_Lobby_C.OnRep_IsTargetMoving
	 */
	struct ABP_Target_Lobby_C_OnRep_IsTargetMoving_Params
	{	};

	/**
	 * Function BP_Target_Lobby.BP_Target_Lobby_C.Anim__FinishedFunc
	 */
	struct ABP_Target_Lobby_C_Anim__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Target_Lobby.BP_Target_Lobby_C.Anim__UpdateFunc
	 */
	struct ABP_Target_Lobby_C_Anim__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Target_Lobby.BP_Target_Lobby_C.ReceiveBeginPlay
	 */
	struct ABP_Target_Lobby_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Target_Lobby.BP_Target_Lobby_C.Down
	 */
	struct ABP_Target_Lobby_C_Down_Params
	{	};

	/**
	 * Function BP_Target_Lobby.BP_Target_Lobby_C.Up
	 */
	struct ABP_Target_Lobby_C_Up_Params
	{	};

	/**
	 * Function BP_Target_Lobby.BP_Target_Lobby_C.MoveForward
	 */
	struct ABP_Target_Lobby_C_MoveForward_Params
	{	};

	/**
	 * Function BP_Target_Lobby.BP_Target_Lobby_C.MoveBack
	 */
	struct ABP_Target_Lobby_C_MoveBack_Params
	{	};

	/**
	 * Function BP_Target_Lobby.BP_Target_Lobby_C.Damage
	 */
	struct ABP_Target_Lobby_C_Damage_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x0298)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Amount;                                                  // 0x0298(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Target_Lobby.BP_Target_Lobby_C.ExecuteUbergraph_BP_Target_Lobby
	 */
	struct ABP_Target_Lobby_C_ExecuteUbergraph_BP_Target_Lobby_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Target_Lobby.BP_Target_Lobby_C.TargetDown__DelegateSignature
	 */
	struct ABP_Target_Lobby_C_TargetDown__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
