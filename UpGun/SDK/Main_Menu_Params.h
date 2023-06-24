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
	 * Function Main_Menu.Main_Menu_C.DLC_Promotion
	 */
	struct UMain_Menu_C_DLC_Promotion_Params
	{
	public:
		int32_t                                                    Reduction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KY9J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Main_Menu.Main_Menu_C.CollectDefaultCosmeticsItems
	 */
	struct UMain_Menu_C_CollectDefaultCosmeticsItems_Params
	{
	public:
		TArray<struct FUpGunInventoryItem>                         Out;                                                     // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Main_Menu.Main_Menu_C.HasNewItems
	 */
	struct UMain_Menu_C_HasNewItems_Params
	{
	public:
		bool                                                       ShouldNotify;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R8AC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_U66G[0x57];                                  // 0x0001(0x0057) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Main_Menu.Main_Menu_C.SwitchToIndexOnce
	 */
	struct UMain_Menu_C_SwitchToIndexOnce_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DesiredCameraView;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasSwitched;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GWQP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Main_Menu.Main_Menu_C.Construct
	 */
	struct UMain_Menu_C_Construct_Params
	{	};

	/**
	 * Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
	 */
	struct UMain_Menu_C_BndEvt__Main_Menu_ButtonMenuBase_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Credits_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
	 */
	struct UMain_Menu_C_BndEvt__Main_Menu_ButtonMenuBase_Credits_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Customisation_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
	 */
	struct UMain_Menu_C_BndEvt__Main_Menu_ButtonMenuBase_Customisation_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Options_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature
	 */
	struct UMain_Menu_C_BndEvt__Main_Menu_ButtonMenuBase_Options_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Quit_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature
	 */
	struct UMain_Menu_C_BndEvt__Main_Menu_ButtonMenuBase_Quit_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_Stats_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature
	 */
	struct UMain_Menu_C_BndEvt__Main_Menu_ButtonMenuBase_Stats_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_Button_discord_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMain_Menu_C_BndEvt__Main_Menu_Button_discord_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Main_Menu.Main_Menu_C.BndEvt__Main_Menu_ButtonMenuBase_DLC_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature
	 */
	struct UMain_Menu_C_BndEvt__Main_Menu_ButtonMenuBase_DLC_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Main_Menu.Main_Menu_C.ExecuteUbergraph_Main_Menu
	 */
	struct UMain_Menu_C_ExecuteUbergraph_Main_Menu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L6H1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
