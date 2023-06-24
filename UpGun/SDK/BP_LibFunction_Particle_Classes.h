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
	 * BlueprintGeneratedClass BP_LibFunction_Particle.BP_LibFunction_Particle_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_LibFunction_Particle_C : public UBlueprintFunctionLibrary
	{
	public:
		void ParticleSpawnLOOP(class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& Location, class UMaterialInterface* ParticleMat, const struct FLinearColor& Color, float ParticleSize, int32_t ParticleRate, int32_t SpawnRadius, int32_t SystemLifeTime, class UObject* __WorldContext);
		void ParticleSpawnCircle(class USceneComponent* AttachtoComponent, const struct FVector& Location, const struct FLinearColor& Color, float Size, float speed, float SystemLifeTime, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
