/**
 * Name: UpGun
 * Version: Live
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.Events
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::Events()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.Events");
		
		ABP_Sky_Sphere_C_Events_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.Check Interior Boxes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInInterior                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DarknessLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sky_Sphere_C::CheckInteriorBoxes(bool* IsInInterior, float* DarknessLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.Check Interior Boxes");
		
		ABP_Sky_Sphere_C_CheckInteriorBoxes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInInterior != nullptr)
			*IsInInterior = params.IsInInterior;
		if (DarknessLevel != nullptr)
			*DarknessLevel = params.DarknessLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.OnRep_MoonPhase
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::OnRep_MoonPhase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.OnRep_MoonPhase");
		
		ABP_Sky_Sphere_C_OnRep_MoonPhase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.OnRep_EasterEggSun
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::OnRep_EasterEggSun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.OnRep_EasterEggSun");
		
		ABP_Sky_Sphere_C_OnRep_EasterEggSun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.OnRep_StartTimeServer
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::OnRep_StartTimeServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.OnRep_StartTimeServer");
		
		ABP_Sky_Sphere_C_OnRep_StartTimeServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateDirLight
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::UpdateDirLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateDirLight");
		
		ABP_Sky_Sphere_C_UpdateDirLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.SetMoon&Sun
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::SetMoonSun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.SetMoon&Sun");
		
		ABP_Sky_Sphere_C_SetMoonSun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateFog
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::UpdateFog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateFog");
		
		ABP_Sky_Sphere_C_UpdateFog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSkyLightIntensity
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::UpdateSkyLightIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSkyLightIntensity");
		
		ABP_Sky_Sphere_C_UpdateSkyLightIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.SunHeigh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Sunheight                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sky_Sphere_C::SunHeigh(float* Sunheight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.SunHeigh");
		
		ABP_Sky_Sphere_C_SunHeigh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sunheight != nullptr)
			*Sunheight = params.Sunheight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.IsDay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Day                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AlphaDay                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sky_Sphere_C::IsDay(bool* Day, float* AlphaDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.IsDay");
		
		ABP_Sky_Sphere_C_IsDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Day != nullptr)
			*Day = params.Day;
		if (AlphaDay != nullptr)
			*AlphaDay = params.AlphaDay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::RefreshMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial");
		
		ABP_Sky_Sphere_C_RefreshMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::UpdateSunDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection");
		
		ABP_Sky_Sphere_C_UpdateSunDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript");
		
		ABP_Sky_Sphere_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.ReceiveBeginPlay");
		
		ABP_Sky_Sphere_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sky_Sphere_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.ReceiveTick");
		
		ABP_Sky_Sphere_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.refresh
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.refresh");
		
		ABP_Sky_Sphere_C_refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.InitiateTime
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::InitiateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.InitiateTime");
		
		ABP_Sky_Sphere_C_InitiateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.GetLocalPlayer
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::GetLocalPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.GetLocalPlayer");
		
		ABP_Sky_Sphere_C_GetLocalPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.RPC_Moon
	 * 		Flags  -> ()
	 */
	void ABP_Sky_Sphere_C::RPC_Moon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.RPC_Moon");
		
		ABP_Sky_Sphere_C_RPC_Moon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.ExecuteUbergraph_BP_Sky_Sphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sky_Sphere_C::ExecuteUbergraph_BP_Sky_Sphere(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.ExecuteUbergraph_BP_Sky_Sphere");
		
		ABP_Sky_Sphere_C_ExecuteUbergraph_BP_Sky_Sphere_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sky_Sphere.BP_Sky_Sphere_C.ChangeTime__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Sky_Sphere_C::ChangeTime__DelegateSignature(bool IsDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Sky_Sphere.BP_Sky_Sphere_C.ChangeTime__DelegateSignature");
		
		ABP_Sky_Sphere_C_ChangeTime__DelegateSignature_Params params {};
		params.IsDay = IsDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Sky_Sphere_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Sky_Sphere_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C");
		return ptr;
	}

}


