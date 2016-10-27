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
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CheckPointController
struct  CheckPointController_t3659897110  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform CheckPointController::_transform
	Transform_t3275118058 * ____transform_2;
	// UnityEngine.GameObject CheckPointController::SpawnPoint
	GameObject_t1756533147 * ___SpawnPoint_3;

public:
	inline static int32_t get_offset_of__transform_2() { return static_cast<int32_t>(offsetof(CheckPointController_t3659897110, ____transform_2)); }
	inline Transform_t3275118058 * get__transform_2() const { return ____transform_2; }
	inline Transform_t3275118058 ** get_address_of__transform_2() { return &____transform_2; }
	inline void set__transform_2(Transform_t3275118058 * value)
	{
		____transform_2 = value;
		Il2CppCodeGenWriteBarrier(&____transform_2, value);
	}

	inline static int32_t get_offset_of_SpawnPoint_3() { return static_cast<int32_t>(offsetof(CheckPointController_t3659897110, ___SpawnPoint_3)); }
	inline GameObject_t1756533147 * get_SpawnPoint_3() const { return ___SpawnPoint_3; }
	inline GameObject_t1756533147 ** get_address_of_SpawnPoint_3() { return &___SpawnPoint_3; }
	inline void set_SpawnPoint_3(GameObject_t1756533147 * value)
	{
		___SpawnPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___SpawnPoint_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
