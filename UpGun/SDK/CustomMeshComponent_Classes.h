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
	 * Class CustomMeshComponent.CustomMeshComponent
	 * Size -> 0x0018 (FullSize[0x0480] - InheritedSize[0x0468])
	 */
	class UCustomMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_0LNL[0x8];                                   // 0x0468(0x0008) Fix Super Size
		unsigned char                                              UnknownData_AV0R[0x10];                                  // 0x0470(0x0010) MISSED OFFSET (PADDING)

	public:
		bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
		void ClearCustomMeshTriangles();
		void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
