#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Done_Boundary
struct Done_Boundary_t381809497;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_PlayerController
struct  Done_PlayerController_t1238573128  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Done_PlayerController::speed
	float ___speed_2;
	// System.Single Done_PlayerController::tilt
	float ___tilt_3;
	// Done_Boundary Done_PlayerController::boundary
	Done_Boundary_t381809497 * ___boundary_4;
	// UnityEngine.GameObject Done_PlayerController::shot
	GameObject_t1756533147 * ___shot_5;
	// UnityEngine.Transform Done_PlayerController::shotSpawn
	Transform_t3275118058 * ___shotSpawn_6;
	// System.Single Done_PlayerController::fireRate
	float ___fireRate_7;
	// System.Single Done_PlayerController::nextFire
	float ___nextFire_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1238573128, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_tilt_3() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1238573128, ___tilt_3)); }
	inline float get_tilt_3() const { return ___tilt_3; }
	inline float* get_address_of_tilt_3() { return &___tilt_3; }
	inline void set_tilt_3(float value)
	{
		___tilt_3 = value;
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1238573128, ___boundary_4)); }
	inline Done_Boundary_t381809497 * get_boundary_4() const { return ___boundary_4; }
	inline Done_Boundary_t381809497 ** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(Done_Boundary_t381809497 * value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_4, value);
	}

	inline static int32_t get_offset_of_shot_5() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1238573128, ___shot_5)); }
	inline GameObject_t1756533147 * get_shot_5() const { return ___shot_5; }
	inline GameObject_t1756533147 ** get_address_of_shot_5() { return &___shot_5; }
	inline void set_shot_5(GameObject_t1756533147 * value)
	{
		___shot_5 = value;
		Il2CppCodeGenWriteBarrier(&___shot_5, value);
	}

	inline static int32_t get_offset_of_shotSpawn_6() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1238573128, ___shotSpawn_6)); }
	inline Transform_t3275118058 * get_shotSpawn_6() const { return ___shotSpawn_6; }
	inline Transform_t3275118058 ** get_address_of_shotSpawn_6() { return &___shotSpawn_6; }
	inline void set_shotSpawn_6(Transform_t3275118058 * value)
	{
		___shotSpawn_6 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_6, value);
	}

	inline static int32_t get_offset_of_fireRate_7() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1238573128, ___fireRate_7)); }
	inline float get_fireRate_7() const { return ___fireRate_7; }
	inline float* get_address_of_fireRate_7() { return &___fireRate_7; }
	inline void set_fireRate_7(float value)
	{
		___fireRate_7 = value;
	}

	inline static int32_t get_offset_of_nextFire_8() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1238573128, ___nextFire_8)); }
	inline float get_nextFire_8() const { return ___nextFire_8; }
	inline float* get_address_of_nextFire_8() { return &___nextFire_8; }
	inline void set_nextFire_8(float value)
	{
		___nextFire_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
