#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlatformFall
struct  PlatformFall_t3714567854  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D PlatformFall::rb2d
	Rigidbody2D_t502193897 * ___rb2d_2;
	// System.Single PlatformFall::fallDelay
	float ___fallDelay_3;

public:
	inline static int32_t get_offset_of_rb2d_2() { return static_cast<int32_t>(offsetof(PlatformFall_t3714567854, ___rb2d_2)); }
	inline Rigidbody2D_t502193897 * get_rb2d_2() const { return ___rb2d_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb2d_2() { return &___rb2d_2; }
	inline void set_rb2d_2(Rigidbody2D_t502193897 * value)
	{
		___rb2d_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_2, value);
	}

	inline static int32_t get_offset_of_fallDelay_3() { return static_cast<int32_t>(offsetof(PlatformFall_t3714567854, ___fallDelay_3)); }
	inline float get_fallDelay_3() const { return ___fallDelay_3; }
	inline float* get_address_of_fallDelay_3() { return &___fallDelay_3; }
	inline void set_fallDelay_3(float value)
	{
		___fallDelay_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
