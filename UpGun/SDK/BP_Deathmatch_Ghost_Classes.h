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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Deathmatch_Ghost.BP_Deathmatch_Ghost_C
	 * Size -> 0x0010 (FullSize[0x0510] - InheritedSize[0x0500])
	 */
	class ABP_Deathmatch_Ghost_C : public AUpGunDeathmatchGhost
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0500(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Ghost_Teeth;                                             // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Deathmatch_Ghost(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
