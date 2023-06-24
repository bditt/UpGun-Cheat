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
	 * BlueprintGeneratedClass GC_Skill_SecondaryWeapon_Laser.GC_Skill_SecondaryWeapon_Laser_C
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UGC_Skill_SecondaryWeapon_Laser_C : public UGameplayCueNotify_Static
	{
	public:
		void SpawnDecal(bool* Spawn, class USceneComponent** AttachToComponent, class FName* AttachPointName, struct FVector* Location, const struct FVector& Normal);
		void GetWeapon(const struct FGameplayCueParameters& Parameters, class UPrimitiveComponent** Weapon);
		bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		void SpawnProjectile(const struct FVector& Start, const struct FVector& End);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
