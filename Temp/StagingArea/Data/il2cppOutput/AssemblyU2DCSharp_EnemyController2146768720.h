#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController
struct  EnemyController_t2146768720  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform EnemyController::_transform
	Transform_t3275118058 * ____transform_2;
	// UnityEngine.Rigidbody2D EnemyController::_rigidbody
	Rigidbody2D_t502193897 * ____rigidbody_3;
	// System.Boolean EnemyController::_isGrounded
	bool ____isGrounded_4;
	// System.Boolean EnemyController::_isGroundAhead
	bool ____isGroundAhead_5;
	// System.Boolean EnemyController::_isPlayerDetected
	bool ____isPlayerDetected_6;
	// System.Single EnemyController::Speed
	float ___Speed_7;
	// System.Single EnemyController::MaximumSpeed
	float ___MaximumSpeed_8;
	// UnityEngine.Transform EnemyController::SightStart
	Transform_t3275118058 * ___SightStart_9;
	// UnityEngine.Transform EnemyController::SightEnd
	Transform_t3275118058 * ___SightEnd_10;
	// UnityEngine.Transform EnemyController::LineOfSight
	Transform_t3275118058 * ___LineOfSight_11;

public:
	inline static int32_t get_offset_of__transform_2() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ____transform_2)); }
	inline Transform_t3275118058 * get__transform_2() const { return ____transform_2; }
	inline Transform_t3275118058 ** get_address_of__transform_2() { return &____transform_2; }
	inline void set__transform_2(Transform_t3275118058 * value)
	{
		____transform_2 = value;
		Il2CppCodeGenWriteBarrier(&____transform_2, value);
	}

	inline static int32_t get_offset_of__rigidbody_3() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ____rigidbody_3)); }
	inline Rigidbody2D_t502193897 * get__rigidbody_3() const { return ____rigidbody_3; }
	inline Rigidbody2D_t502193897 ** get_address_of__rigidbody_3() { return &____rigidbody_3; }
	inline void set__rigidbody_3(Rigidbody2D_t502193897 * value)
	{
		____rigidbody_3 = value;
		Il2CppCodeGenWriteBarrier(&____rigidbody_3, value);
	}

	inline static int32_t get_offset_of__isGrounded_4() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ____isGrounded_4)); }
	inline bool get__isGrounded_4() const { return ____isGrounded_4; }
	inline bool* get_address_of__isGrounded_4() { return &____isGrounded_4; }
	inline void set__isGrounded_4(bool value)
	{
		____isGrounded_4 = value;
	}

	inline static int32_t get_offset_of__isGroundAhead_5() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ____isGroundAhead_5)); }
	inline bool get__isGroundAhead_5() const { return ____isGroundAhead_5; }
	inline bool* get_address_of__isGroundAhead_5() { return &____isGroundAhead_5; }
	inline void set__isGroundAhead_5(bool value)
	{
		____isGroundAhead_5 = value;
	}

	inline static int32_t get_offset_of__isPlayerDetected_6() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ____isPlayerDetected_6)); }
	inline bool get__isPlayerDetected_6() const { return ____isPlayerDetected_6; }
	inline bool* get_address_of__isPlayerDetected_6() { return &____isPlayerDetected_6; }
	inline void set__isPlayerDetected_6(bool value)
	{
		____isPlayerDetected_6 = value;
	}

	inline static int32_t get_offset_of_Speed_7() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___Speed_7)); }
	inline float get_Speed_7() const { return ___Speed_7; }
	inline float* get_address_of_Speed_7() { return &___Speed_7; }
	inline void set_Speed_7(float value)
	{
		___Speed_7 = value;
	}

	inline static int32_t get_offset_of_MaximumSpeed_8() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___MaximumSpeed_8)); }
	inline float get_MaximumSpeed_8() const { return ___MaximumSpeed_8; }
	inline float* get_address_of_MaximumSpeed_8() { return &___MaximumSpeed_8; }
	inline void set_MaximumSpeed_8(float value)
	{
		___MaximumSpeed_8 = value;
	}

	inline static int32_t get_offset_of_SightStart_9() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___SightStart_9)); }
	inline Transform_t3275118058 * get_SightStart_9() const { return ___SightStart_9; }
	inline Transform_t3275118058 ** get_address_of_SightStart_9() { return &___SightStart_9; }
	inline void set_SightStart_9(Transform_t3275118058 * value)
	{
		___SightStart_9 = value;
		Il2CppCodeGenWriteBarrier(&___SightStart_9, value);
	}

	inline static int32_t get_offset_of_SightEnd_10() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___SightEnd_10)); }
	inline Transform_t3275118058 * get_SightEnd_10() const { return ___SightEnd_10; }
	inline Transform_t3275118058 ** get_address_of_SightEnd_10() { return &___SightEnd_10; }
	inline void set_SightEnd_10(Transform_t3275118058 * value)
	{
		___SightEnd_10 = value;
		Il2CppCodeGenWriteBarrier(&___SightEnd_10, value);
	}

	inline static int32_t get_offset_of_LineOfSight_11() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___LineOfSight_11)); }
	inline Transform_t3275118058 * get_LineOfSight_11() const { return ___LineOfSight_11; }
	inline Transform_t3275118058 ** get_address_of_LineOfSight_11() { return &___LineOfSight_11; }
	inline void set_LineOfSight_11(Transform_t3275118058 * value)
	{
		___LineOfSight_11 = value;
		Il2CppCodeGenWriteBarrier(&___LineOfSight_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
