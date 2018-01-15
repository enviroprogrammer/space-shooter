#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomRotator
struct  RandomRotator_t1977862972  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RandomRotator::tumble
	float ___tumble_2;
	// UnityEngine.Rigidbody RandomRotator::rb
	Rigidbody_t4233889191 * ___rb_3;

public:
	inline static int32_t get_offset_of_tumble_2() { return static_cast<int32_t>(offsetof(RandomRotator_t1977862972, ___tumble_2)); }
	inline float get_tumble_2() const { return ___tumble_2; }
	inline float* get_address_of_tumble_2() { return &___tumble_2; }
	inline void set_tumble_2(float value)
	{
		___tumble_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(RandomRotator_t1977862972, ___rb_3)); }
	inline Rigidbody_t4233889191 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t4233889191 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
