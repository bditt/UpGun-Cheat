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
	// # Enums
	// --------------------------------------------------
	/**
	 * BoneSkeletalMesh Robot_finalRig.Robot_finalRig
	 */
	enum class EBone_Robot_finalRig : uint8_t
	{
		Root                    = 0,
		Pelvis                  = 1,
		spine_01                = 2,
		spine_02                = 3,
		spine_03                = 4,
		clavicle_l              = 5,
		upperarm_l              = 6,
		lowerarm_l              = 7,
		hand_l                  = 8,
		index_01_l              = 9,
		index_02_l              = 10,
		index_03_l              = 11,
		middle_01_l             = 12,
		middle_02_l             = 13,
		middle_03_l             = 14,
		pinky_01_l              = 15,
		pinky_02_l              = 16,
		pinky_03_l              = 17,
		ring_01_l               = 18,
		ring_02_l               = 19,
		ring_03_l               = 20,
		thumb_01_l              = 21,
		thumb_02_l              = 22,
		thumb_03_l              = 23,
		lowerarm_twist_01_l     = 24,
		upperarm_twist_01_l     = 25,
		clavicle_r              = 26,
		upperarm_r              = 27,
		lowerarm_r              = 28,
		Hand_r                  = 29,
		index_01_r              = 30,
		index_02_r              = 31,
		index_03_r              = 32,
		middle_01_r             = 33,
		middle_02_r             = 34,
		middle_03_r             = 35,
		pinky_01_r              = 36,
		pinky_02_r              = 37,
		pinky_03_r              = 38,
		ring_01_r               = 39,
		ring_02_r               = 40,
		ring_03_r               = 41,
		thumb_01_r              = 42,
		thumb_02_r              = 43,
		thumb_03_r              = 44,
		lowerarm_twist_01_r     = 45,
		upperarm_twist_01_r     = 46,
		neck_01                 = 47,
		head                    = 48,
		Thigh_L                 = 49,
		calf_l                  = 50,
		calf_twist_01_l         = 51,
		Foot_L                  = 52,
		ball_l                  = 53,
		thigh_twist_01_l        = 54,
		Thigh_R                 = 55,
		calf_r                  = 56,
		calf_twist_01_r         = 57,
		Foot_R                  = 58,
		ball_r                  = 59,
		thigh_twist_01_r        = 60,
		ik_foot_root            = 61,
		ik_foot_l               = 62,
		ik_foot_r               = 63,
		ik_hand_root            = 64,
		ik_hand_gun             = 65,
		ik_hand_l               = 66,
		ik_hand_r               = 67,
		head_end                = 68,
		index_03_l_end          = 69,
		middle_03_l_end         = 70,
		pinky_03_l_end          = 71,
		ring_03_l_end           = 72,
		thumb_03_l_end          = 73,
		lowerarm_twist_01_l_end = 74,
		upperarm_twist_01_l_end = 75,
		index_03_r_end          = 76,
		middle_03_r_end         = 77,
		pinky_03_r_end          = 78,
		ring_03_r_end           = 79,
		thumb_03_r_end          = 80,
		lowerarm_twist_01_r_end = 81,
		upperarm_twist_01_r_end = 82,
		ball_r_end              = 83,
		calf_twist_01_r_end     = 84,
		thigh_twist_01_r_end    = 85,
		ball_l_end              = 86,
		calf_twist_01_l_end     = 87,
		thigh_twist_01_l_end    = 88,
		Circle_012              = 89
	};

	/**
	 * BoneSkeletalMesh VueFPS_Rig_Robot_01.VueFPS_Rig_Robot_01
	 */
	enum class EBone_VueFPS_Rig_Robot_01 : uint8_t
	{
		Rig_Bras            = 0,
		clavicle_l          = 1,
		upperarm_l          = 2,
		lowerarm_l          = 3,
		lowerarm_twist_01_l = 4,
		hand_l              = 5,
		middle_01_l         = 6,
		middle_02_l         = 7,
		middle_03_l         = 8,
		index_01_l          = 9,
		index_02_l          = 10,
		index_03_l          = 11,
		ring_01_l           = 12,
		ring_02_l           = 13,
		ring_03_l           = 14,
		pinky_01_l          = 15,
		pinky_02_l          = 16,
		pinky_03_l          = 17,
		thumb_01_l          = 18,
		thumb_02_l          = 19,
		thumb_03_l          = 20,
		clavicle_r          = 21,
		upperarm_r          = 22,
		lowerarm_r          = 23,
		lowerarm_twist_01_r = 24,
		Hand_r              = 25,
		middle_01_r         = 26,
		middle_02_r         = 27,
		middle_03_r         = 28,
		index_01_r          = 29,
		index_02_r          = 30,
		index_03_r          = 31,
		ring_01_r           = 32,
		ring_02_r           = 33,
		ring_03_r           = 34,
		pinky_01_r          = 35,
		pinky_02_r          = 36,
		pinky_03_r          = 37,
		thumb_01_r          = 38,
		thumb_02_r          = 39,
		thumb_03_r          = 40
	};

	/**
	 * BoneSkeletalMesh Knife_base_rig_skin_tournevis_jaune.Knife_base_rig_skin_tournevis_jaune
	 */
	enum class EBone_Knife_base_rig_skin_tournevis_jaune : uint8_t
	{
		RIG_BaseKnife = 0,
		Body          = 1,
		Lame          = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
