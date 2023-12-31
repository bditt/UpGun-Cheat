﻿#pragma once

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
	 * Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.UpdateArenas
	 */
	struct UWID_Lobby_MatchSettings_C_UpdateArenas_Params
	{	};

	/**
	 * Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.OnGameModeUpdated
	 */
	struct UWID_Lobby_MatchSettings_C_OnGameModeUpdated_Params
	{
	public:
		class UUpGunGameModeEntry*                                 GameMode;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AUpGunGameModeSettings*                              Settings;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.UpdateGameModeList
	 */
	struct UWID_Lobby_MatchSettings_C_UpdateGameModeList_Params
	{	};

	/**
	 * Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.Construct
	 */
	struct UWID_Lobby_MatchSettings_C_Construct_Params
	{	};

	/**
	 * Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.ScrollShowMap
	 */
	struct UWID_Lobby_MatchSettings_C_ScrollShowMap_Params
	{	};

	/**
	 * Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.Tick
	 */
	struct UWID_Lobby_MatchSettings_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WID_Lobby_MatchSettings.WID_Lobby_MatchSettings_C.ExecuteUbergraph_WID_Lobby_MatchSettings
	 */
	struct UWID_Lobby_MatchSettings_C_ExecuteUbergraph_WID_Lobby_MatchSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
