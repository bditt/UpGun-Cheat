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
	 * 		Name   -> Function BP_Extinguisher.BP_Extinguisher_C.Stats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectContextHandle                Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Extinguisher_C::Stats(struct FGameplayEffectContextHandle* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Extinguisher.BP_Extinguisher_C.Stats");
		
		ABP_Extinguisher_C_Stats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Extinguisher.BP_Extinguisher_C.RemoveBurningTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SphereRadius                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Extinguisher_C::RemoveBurningTag(float SphereRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Extinguisher.BP_Extinguisher_C.RemoveBurningTag");
		
		ABP_Extinguisher_C_RemoveBurningTag_Params params {};
		params.SphereRadius = SphereRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Extinguisher.BP_Extinguisher_C.CollectFire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_Fire_Zone_C*>                     OutActors                                                  (Parm, OutParm)
	 */
	void ABP_Extinguisher_C::CollectFire(float Radius, TArray<class ABP_Fire_Zone_C*>* OutActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Extinguisher.BP_Extinguisher_C.CollectFire");
		
		ABP_Extinguisher_C_CollectFire_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Extinguisher.BP_Extinguisher_C.OnRep_HasExploded
	 * 		Flags  -> ()
	 */
	void ABP_Extinguisher_C::OnRep_HasExploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Extinguisher.BP_Extinguisher_C.OnRep_HasExploded");
		
		ABP_Extinguisher_C_OnRep_HasExploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Extinguisher.BP_Extinguisher_C.Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Extinguisher_C::Damage(const struct FGameplayEffectSpec& Spec, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Extinguisher.BP_Extinguisher_C.Damage");
		
		ABP_Extinguisher_C_Damage_Params params {};
		params.Spec = Spec;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Extinguisher.BP_Extinguisher_C.Explosion_RPC
	 * 		Flags  -> ()
	 */
	void ABP_Extinguisher_C::Explosion_RPC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Extinguisher.BP_Extinguisher_C.Explosion_RPC");
		
		ABP_Extinguisher_C_Explosion_RPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Extinguisher.BP_Extinguisher_C.ExtiguishFire
	 * 		Flags  -> ()
	 */
	void ABP_Extinguisher_C::ExtiguishFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Extinguisher.BP_Extinguisher_C.ExtiguishFire");
		
		ABP_Extinguisher_C_ExtiguishFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Extinguisher.BP_Extinguisher_C.SpawnLeak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Extinguisher_C::SpawnLeak(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Extinguisher.BP_Extinguisher_C.SpawnLeak");
		
		ABP_Extinguisher_C_SpawnLeak_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Extinguisher.BP_Extinguisher_C.BndEvt__BP_Extinguisher_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRoundWithChance__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Extinguisher_C::BndEvt__BP_Extinguisher_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRoundWithChance__DelegateSignature(unsigned char Round)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Extinguisher.BP_Extinguisher_C.BndEvt__BP_Extinguisher_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRoundWithChance__DelegateSignature");
		
		ABP_Extinguisher_C_BndEvt__BP_Extinguisher_BPC_ShouldDispawn_K2Node_ComponentBoundEvent_0_OnNewRoundWithChance__DelegateSignature_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Extinguisher.BP_Extinguisher_C.ResetDoOnce
	 * 		Flags  -> ()
	 */
	void ABP_Extinguisher_C::ResetDoOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Extinguisher.BP_Extinguisher_C.ResetDoOnce");
		
		ABP_Extinguisher_C_ResetDoOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Extinguisher.BP_Extinguisher_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Extinguisher_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Extinguisher.BP_Extinguisher_C.ReceiveBeginPlay");
		
		ABP_Extinguisher_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Extinguisher.BP_Extinguisher_C.ExecuteUbergraph_BP_Extinguisher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Extinguisher_C::ExecuteUbergraph_BP_Extinguisher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Extinguisher.BP_Extinguisher_C.ExecuteUbergraph_BP_Extinguisher");
		
		ABP_Extinguisher_C_ExecuteUbergraph_BP_Extinguisher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Extinguisher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Extinguisher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Extinguisher.BP_Extinguisher_C");
		return ptr;
	}

}


