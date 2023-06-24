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
	 * Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.OnRep_IsOpen
	 */
	struct ABP_MovableWall_Lobby_C_OnRep_IsOpen_Params
	{	};

	/**
	 * Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.UserConstructionScript
	 */
	struct ABP_MovableWall_Lobby_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Timeline_0__FinishedFunc
	 */
	struct ABP_MovableWall_Lobby_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Timeline_0__UpdateFunc
	 */
	struct ABP_MovableWall_Lobby_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.ReceiveBeginPlay
	 */
	struct ABP_MovableWall_Lobby_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Open
	 */
	struct ABP_MovableWall_Lobby_C_Open_Params
	{	};

	/**
	 * Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Close
	 */
	struct ABP_MovableWall_Lobby_C_Close_Params
	{	};

	/**
	 * Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.Damage
	 */
	struct ABP_MovableWall_Lobby_C_Damage_Params
	{
	public:
		struct FGameplayEffectSpec                                 Spec;                                                    // 0x0000(0x0298)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      Amount;                                                  // 0x0298(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MovableWall_Lobby.BP_MovableWall_Lobby_C.ExecuteUbergraph_BP_MovableWall_Lobby
	 */
	struct ABP_MovableWall_Lobby_C_ExecuteUbergraph_BP_MovableWall_Lobby_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
