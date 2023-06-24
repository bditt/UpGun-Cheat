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
	 * Function CrossHair_list.CrossHair_list_C.SequenceEvent__ENTRYPOINTCrossHair_list_1
	 */
	struct UCrossHair_list_C_SequenceEvent__ENTRYPOINTCrossHair_list_1_Params
	{	};

	/**
	 * Function CrossHair_list.CrossHair_list_C.SpawnColors
	 */
	struct UCrossHair_list_C_SpawnColors_Params
	{
	public:
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CrossHair_list.CrossHair_list_C.UpdateSavedData
	 */
	struct UCrossHair_list_C_UpdateSavedData_Params
	{	};

	/**
	 * Function CrossHair_list.CrossHair_list_C.ChangeCrossColor
	 */
	struct UCrossHair_list_C_ChangeCrossColor_Params
	{
	public:
		struct FLinearColor                                        CouleurCrosshair;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CrossHair_list.CrossHair_list_C.IndexChange
	 */
	struct UCrossHair_list_C_IndexChange_Params
	{
	public:
		bool                                                       Add;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CRBS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CrossHair_list.CrossHair_list_C.SwitchDisplayedCrosshair
	 */
	struct UCrossHair_list_C_SwitchDisplayedCrosshair_Params
	{	};

	/**
	 * Function CrossHair_list.CrossHair_list_C.Construct
	 */
	struct UCrossHair_list_C_Construct_Params
	{	};

	/**
	 * Function CrossHair_list.CrossHair_list_C.BndEvt__ListCrossHair_Button_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCrossHair_list_C_BndEvt__ListCrossHair_Button_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CrossHair_list.CrossHair_list_C.BndEvt__ListCrossHair_Button_Prec_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UCrossHair_list_C_BndEvt__ListCrossHair_Button_Prec_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CrossHair_list.CrossHair_list_C.ChangeColorWidget
	 */
	struct UCrossHair_list_C_ChangeColorWidget_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CrossHair_list.CrossHair_list_C.PreConstruct
	 */
	struct UCrossHair_list_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrossHair_list.CrossHair_list_C.BndEvt__CrossHair_list_Options_Graphismes_Entry_K2Node_ComponentBoundEvent_2_UpdatedEntry__DelegateSignature
	 */
	struct UCrossHair_list_C_BndEvt__CrossHair_list_Options_Graphismes_Entry_K2Node_ComponentBoundEvent_2_UpdatedEntry__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NPCJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SelectedIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SliderValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CrossHair_list.CrossHair_list_C.BndEvt__CrossHair_list_Options_Graphismes_Entry_K2Node_ComponentBoundEvent_3_StoppedSlider__DelegateSignature
	 */
	struct UCrossHair_list_C_BndEvt__CrossHair_list_Options_Graphismes_Entry_K2Node_ComponentBoundEvent_3_StoppedSlider__DelegateSignature_Params
	{
	public:
		float                                                      SliderValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CrossHair_list.CrossHair_list_C.ExecuteUbergraph_CrossHair_list
	 */
	struct UCrossHair_list_C_ExecuteUbergraph_CrossHair_list_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
