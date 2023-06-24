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
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.Events
	 */
	struct ABP_Sky_Sphere_C_Events_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.Check Interior Boxes
	 */
	struct ABP_Sky_Sphere_C_CheckInteriorBoxes_Params
	{
	public:
		bool                                                       IsInInterior;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7XIN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DarknessLevel;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.OnRep_MoonPhase
	 */
	struct ABP_Sky_Sphere_C_OnRep_MoonPhase_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.OnRep_EasterEggSun
	 */
	struct ABP_Sky_Sphere_C_OnRep_EasterEggSun_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.OnRep_StartTimeServer
	 */
	struct ABP_Sky_Sphere_C_OnRep_StartTimeServer_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateDirLight
	 */
	struct ABP_Sky_Sphere_C_UpdateDirLight_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.SetMoon&Sun
	 */
	struct ABP_Sky_Sphere_C_SetMoonSun_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateFog
	 */
	struct ABP_Sky_Sphere_C_UpdateFog_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSkyLightIntensity
	 */
	struct ABP_Sky_Sphere_C_UpdateSkyLightIntensity_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.SunHeigh
	 */
	struct ABP_Sky_Sphere_C_SunHeigh_Params
	{
	public:
		float                                                      Sunheight;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.IsDay
	 */
	struct ABP_Sky_Sphere_C_IsDay_Params
	{
	public:
		bool                                                       Day;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6SA7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AlphaDay;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial
	 */
	struct ABP_Sky_Sphere_C_RefreshMaterial_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection
	 */
	struct ABP_Sky_Sphere_C_UpdateSunDirection_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript
	 */
	struct ABP_Sky_Sphere_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.ReceiveBeginPlay
	 */
	struct ABP_Sky_Sphere_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.ReceiveTick
	 */
	struct ABP_Sky_Sphere_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.refresh
	 */
	struct ABP_Sky_Sphere_C_refresh_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.InitiateTime
	 */
	struct ABP_Sky_Sphere_C_InitiateTime_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.GetLocalPlayer
	 */
	struct ABP_Sky_Sphere_C_GetLocalPlayer_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.RPC_Moon
	 */
	struct ABP_Sky_Sphere_C_RPC_Moon_Params
	{	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.ExecuteUbergraph_BP_Sky_Sphere
	 */
	struct ABP_Sky_Sphere_C_ExecuteUbergraph_BP_Sky_Sphere_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sky_Sphere.BP_Sky_Sphere_C.ChangeTime__DelegateSignature
	 */
	struct ABP_Sky_Sphere_C_ChangeTime__DelegateSignature_Params
	{
	public:
		bool                                                       IsDay;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
