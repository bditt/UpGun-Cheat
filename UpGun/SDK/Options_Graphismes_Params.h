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
	 * Function Options_Graphismes.Options_Graphismes_C.GetResolutions
	 */
	struct UOptions_Graphismes_C_GetResolutions_Params
	{	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.GenTexte
	 */
	struct UOptions_Graphismes_C_GenTexte_Params
	{	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.SetDaltonisme
	 */
	struct UOptions_Graphismes_C_SetDaltonisme_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.Génération nom pc rigolo
	 */
	struct UOptions_Graphismes_C_Gnrationnompcrigolo_Params
	{	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.Set antialiasing
	 */
	struct UOptions_Graphismes_C_Setantialiasing_Params
	{
	public:
		int32_t                                                    AliasingLevel;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JFTA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.Generate combobox
	 */
	struct UOptions_Graphismes_C_Generatecombobox_Params
	{
	public:
		class UComboBoxString*                                     NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        Options;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.SetMotionBlur
	 */
	struct UOptions_Graphismes_C_SetMotionBlur_Params
	{
	public:
		bool                                                       _bool_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.SetVsync
	 */
	struct UOptions_Graphismes_C_SetVsync_Params
	{
	public:
		bool                                                       _bool_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RI74[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.ExecuteConsoleCommand
	 */
	struct UOptions_Graphismes_C_ExecuteConsoleCommand_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       _bool_;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0EO5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Default;                                                 // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Patatetrue;                                              // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.SetSettings
	 */
	struct UOptions_Graphismes_C_SetSettings_Params
	{
	public:
		class UGameUserSettings*                                   Settings;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.Regen comboboxes
	 */
	struct UOptions_Graphismes_C_Regencomboboxes_Params
	{	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.Construct
	 */
	struct UOptions_Graphismes_C_Construct_Params
	{	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Patate_K2Node_ComponentBoundEvent_16_UpdatedEntry__DelegateSignature
	 */
	struct UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_Patate_K2Node_ComponentBoundEvent_16_UpdatedEntry__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_425R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SelectedIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SliderValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_blur_K2Node_ComponentBoundEvent_17_UpdatedEntry__DelegateSignature
	 */
	struct UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_blur_K2Node_ComponentBoundEvent_17_UpdatedEntry__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UOGH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SelectedIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SliderValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Vsync_K2Node_ComponentBoundEvent_18_UpdatedEntry__DelegateSignature
	 */
	struct UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_Vsync_K2Node_ComponentBoundEvent_18_UpdatedEntry__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RK33[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SelectedIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SliderValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_HDR_K2Node_ComponentBoundEvent_19_UpdatedEntry__DelegateSignature
	 */
	struct UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_HDR_K2Node_ComponentBoundEvent_19_UpdatedEntry__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4AXI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SelectedIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SliderValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Resolution_K2Node_ComponentBoundEvent_0_UpdatedEntry__DelegateSignature
	 */
	struct UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_Resolution_K2Node_ComponentBoundEvent_0_UpdatedEntry__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XVDM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SelectedIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SliderValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Display_K2Node_ComponentBoundEvent_5_UpdatedEntry__DelegateSignature
	 */
	struct UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_Display_K2Node_ComponentBoundEvent_5_UpdatedEntry__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8H9Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SelectedIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SliderValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_W_button_Apply_K2Node_ComponentBoundEvent_7_Clicked_Btn__DelegateSignature
	 */
	struct UOptions_Graphismes_C_BndEvt__Options_Graphismes_W_button_Apply_K2Node_ComponentBoundEvent_7_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Aliasing_K2Node_ComponentBoundEvent_14_UpdatedEntry__DelegateSignature
	 */
	struct UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_Aliasing_K2Node_ComponentBoundEvent_14_UpdatedEntry__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9QOZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SelectedIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SliderValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Quality_K2Node_ComponentBoundEvent_20_UpdatedEntry__DelegateSignature
	 */
	struct UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_Quality_K2Node_ComponentBoundEvent_20_UpdatedEntry__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JJMR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SelectedIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SliderValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_Colorblinf_K2Node_ComponentBoundEvent_21_UpdatedEntry__DelegateSignature
	 */
	struct UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_Colorblinf_K2Node_ComponentBoundEvent_21_UpdatedEntry__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VL9M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SelectedIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SliderValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_FPS_K2Node_ComponentBoundEvent_23_StoppedSlider__DelegateSignature
	 */
	struct UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_FPS_K2Node_ComponentBoundEvent_23_StoppedSlider__DelegateSignature_Params
	{
	public:
		float                                                      SliderValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_W_button_AutoSettings_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature
	 */
	struct UOptions_Graphismes_C_BndEvt__Options_Graphismes_W_button_AutoSettings_K2Node_ComponentBoundEvent_1_Clicked_Btn__DelegateSignature_Params
	{	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.BndEvt__Options_Graphismes_Options_Graphismes_OptionnalLights_K2Node_ComponentBoundEvent_2_UpdatedEntry__DelegateSignature
	 */
	struct UOptions_Graphismes_C_BndEvt__Options_Graphismes_Options_Graphismes_OptionnalLights_K2Node_ComponentBoundEvent_2_UpdatedEntry__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DYEX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SelectedIndex;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SliderValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_Graphismes.Options_Graphismes_C.ExecuteUbergraph_Options_Graphismes
	 */
	struct UOptions_Graphismes_C_ExecuteUbergraph_Options_Graphismes_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SEMT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
