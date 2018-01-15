#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_BGScroller
struct  Done_BGScroller_t1955972008  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Done_BGScroller::scrollSpeed
	float ___scrollSpeed_2;
	// System.Single Done_BGScroller::tileSizeZ
	float ___tileSizeZ_3;
	// UnityEngine.Vector3 Done_BGScroller::startPosition
	Vector3_t2243707580  ___startPosition_4;

public:
	inline static int32_t get_offset_of_scrollSpeed_2() { return static_cast<int32_t>(offsetof(Done_BGScroller_t1955972008, ___scrollSpeed_2)); }
	inline float get_scrollSpeed_2() const { return ___scrollSpeed_2; }
	inline float* get_address_of_scrollSpeed_2() { return &___scrollSpeed_2; }
	inline void set_scrollSpeed_2(float value)
	{
		___scrollSpeed_2 = value;
	}

	inline static int32_t get_offset_of_tileSizeZ_3() { return static_cast<int32_t>(offsetof(Done_BGScroller_t1955972008, ___tileSizeZ_3)); }
	inline float get_tileSizeZ_3() const { return ___tileSizeZ_3; }
	inline float* get_address_of_tileSizeZ_3() { return &___tileSizeZ_3; }
	inline void set_tileSizeZ_3(float value)
	{
		___tileSizeZ_3 = value;
	}

	inline static int32_t get_offset_of_startPosition_4() { return static_cast<int32_t>(offsetof(Done_BGScroller_t1955972008, ___startPosition_4)); }
	inline Vector3_t2243707580  get_startPosition_4() const { return ___startPosition_4; }
	inline Vector3_t2243707580 * get_address_of_startPosition_4() { return &___startPosition_4; }
	inline void set_startPosition_4(Vector3_t2243707580  value)
	{
		___startPosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
