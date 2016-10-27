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
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// GameController
struct GameController_t3607102586;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform PlayerController::_transform
	Transform_t3275118058 * ____transform_2;
	// UnityEngine.Rigidbody2D PlayerController::_rigidbody
	Rigidbody2D_t502193897 * ____rigidbody_3;
	// UnityEngine.Animator PlayerController::_animator
	Animator_t69676727 * ____animator_4;
	// UnityEngine.GameObject PlayerController::_camera
	GameObject_t1756533147 * ____camera_5;
	// UnityEngine.GameObject PlayerController::_spawnPoint
	GameObject_t1756533147 * ____spawnPoint_6;
	// UnityEngine.GameObject PlayerController::_gameControllerObject
	GameObject_t1756533147 * ____gameControllerObject_7;
	// GameController PlayerController::_gameController
	GameController_t3607102586 * ____gameController_8;
	// System.Single PlayerController::_move
	float ____move_9;
	// System.Single PlayerController::_jump
	float ____jump_10;
	// System.Boolean PlayerController::_isFacingRight
	bool ____isFacingRight_11;
	// System.Boolean PlayerController::_isGrounded
	bool ____isGrounded_12;
	// System.Single PlayerController::Velocity
	float ___Velocity_13;
	// System.Single PlayerController::JumpForce
	float ___JumpForce_14;
	// UnityEngine.AudioSource PlayerController::JumpSound
	AudioSource_t1135106623 * ___JumpSound_15;
	// UnityEngine.AudioSource PlayerController::DeathSound
	AudioSource_t1135106623 * ___DeathSound_16;
	// UnityEngine.AudioSource PlayerController::CoinSound
	AudioSource_t1135106623 * ___CoinSound_17;
	// UnityEngine.AudioSource PlayerController::HurtSound
	AudioSource_t1135106623 * ___HurtSound_18;
	// UnityEngine.AudioSource PlayerController::EnemyDeadSound
	AudioSource_t1135106623 * ___EnemyDeadSound_19;
	// UnityEngine.AudioSource PlayerController::BackgroundSound
	AudioSource_t1135106623 * ___BackgroundSound_20;

public:
	inline static int32_t get_offset_of__transform_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ____transform_2)); }
	inline Transform_t3275118058 * get__transform_2() const { return ____transform_2; }
	inline Transform_t3275118058 ** get_address_of__transform_2() { return &____transform_2; }
	inline void set__transform_2(Transform_t3275118058 * value)
	{
		____transform_2 = value;
		Il2CppCodeGenWriteBarrier(&____transform_2, value);
	}

	inline static int32_t get_offset_of__rigidbody_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ____rigidbody_3)); }
	inline Rigidbody2D_t502193897 * get__rigidbody_3() const { return ____rigidbody_3; }
	inline Rigidbody2D_t502193897 ** get_address_of__rigidbody_3() { return &____rigidbody_3; }
	inline void set__rigidbody_3(Rigidbody2D_t502193897 * value)
	{
		____rigidbody_3 = value;
		Il2CppCodeGenWriteBarrier(&____rigidbody_3, value);
	}

	inline static int32_t get_offset_of__animator_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ____animator_4)); }
	inline Animator_t69676727 * get__animator_4() const { return ____animator_4; }
	inline Animator_t69676727 ** get_address_of__animator_4() { return &____animator_4; }
	inline void set__animator_4(Animator_t69676727 * value)
	{
		____animator_4 = value;
		Il2CppCodeGenWriteBarrier(&____animator_4, value);
	}

	inline static int32_t get_offset_of__camera_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ____camera_5)); }
	inline GameObject_t1756533147 * get__camera_5() const { return ____camera_5; }
	inline GameObject_t1756533147 ** get_address_of__camera_5() { return &____camera_5; }
	inline void set__camera_5(GameObject_t1756533147 * value)
	{
		____camera_5 = value;
		Il2CppCodeGenWriteBarrier(&____camera_5, value);
	}

	inline static int32_t get_offset_of__spawnPoint_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ____spawnPoint_6)); }
	inline GameObject_t1756533147 * get__spawnPoint_6() const { return ____spawnPoint_6; }
	inline GameObject_t1756533147 ** get_address_of__spawnPoint_6() { return &____spawnPoint_6; }
	inline void set__spawnPoint_6(GameObject_t1756533147 * value)
	{
		____spawnPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&____spawnPoint_6, value);
	}

	inline static int32_t get_offset_of__gameControllerObject_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ____gameControllerObject_7)); }
	inline GameObject_t1756533147 * get__gameControllerObject_7() const { return ____gameControllerObject_7; }
	inline GameObject_t1756533147 ** get_address_of__gameControllerObject_7() { return &____gameControllerObject_7; }
	inline void set__gameControllerObject_7(GameObject_t1756533147 * value)
	{
		____gameControllerObject_7 = value;
		Il2CppCodeGenWriteBarrier(&____gameControllerObject_7, value);
	}

	inline static int32_t get_offset_of__gameController_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ____gameController_8)); }
	inline GameController_t3607102586 * get__gameController_8() const { return ____gameController_8; }
	inline GameController_t3607102586 ** get_address_of__gameController_8() { return &____gameController_8; }
	inline void set__gameController_8(GameController_t3607102586 * value)
	{
		____gameController_8 = value;
		Il2CppCodeGenWriteBarrier(&____gameController_8, value);
	}

	inline static int32_t get_offset_of__move_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ____move_9)); }
	inline float get__move_9() const { return ____move_9; }
	inline float* get_address_of__move_9() { return &____move_9; }
	inline void set__move_9(float value)
	{
		____move_9 = value;
	}

	inline static int32_t get_offset_of__jump_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ____jump_10)); }
	inline float get__jump_10() const { return ____jump_10; }
	inline float* get_address_of__jump_10() { return &____jump_10; }
	inline void set__jump_10(float value)
	{
		____jump_10 = value;
	}

	inline static int32_t get_offset_of__isFacingRight_11() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ____isFacingRight_11)); }
	inline bool get__isFacingRight_11() const { return ____isFacingRight_11; }
	inline bool* get_address_of__isFacingRight_11() { return &____isFacingRight_11; }
	inline void set__isFacingRight_11(bool value)
	{
		____isFacingRight_11 = value;
	}

	inline static int32_t get_offset_of__isGrounded_12() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ____isGrounded_12)); }
	inline bool get__isGrounded_12() const { return ____isGrounded_12; }
	inline bool* get_address_of__isGrounded_12() { return &____isGrounded_12; }
	inline void set__isGrounded_12(bool value)
	{
		____isGrounded_12 = value;
	}

	inline static int32_t get_offset_of_Velocity_13() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___Velocity_13)); }
	inline float get_Velocity_13() const { return ___Velocity_13; }
	inline float* get_address_of_Velocity_13() { return &___Velocity_13; }
	inline void set_Velocity_13(float value)
	{
		___Velocity_13 = value;
	}

	inline static int32_t get_offset_of_JumpForce_14() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___JumpForce_14)); }
	inline float get_JumpForce_14() const { return ___JumpForce_14; }
	inline float* get_address_of_JumpForce_14() { return &___JumpForce_14; }
	inline void set_JumpForce_14(float value)
	{
		___JumpForce_14 = value;
	}

	inline static int32_t get_offset_of_JumpSound_15() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___JumpSound_15)); }
	inline AudioSource_t1135106623 * get_JumpSound_15() const { return ___JumpSound_15; }
	inline AudioSource_t1135106623 ** get_address_of_JumpSound_15() { return &___JumpSound_15; }
	inline void set_JumpSound_15(AudioSource_t1135106623 * value)
	{
		___JumpSound_15 = value;
		Il2CppCodeGenWriteBarrier(&___JumpSound_15, value);
	}

	inline static int32_t get_offset_of_DeathSound_16() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___DeathSound_16)); }
	inline AudioSource_t1135106623 * get_DeathSound_16() const { return ___DeathSound_16; }
	inline AudioSource_t1135106623 ** get_address_of_DeathSound_16() { return &___DeathSound_16; }
	inline void set_DeathSound_16(AudioSource_t1135106623 * value)
	{
		___DeathSound_16 = value;
		Il2CppCodeGenWriteBarrier(&___DeathSound_16, value);
	}

	inline static int32_t get_offset_of_CoinSound_17() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___CoinSound_17)); }
	inline AudioSource_t1135106623 * get_CoinSound_17() const { return ___CoinSound_17; }
	inline AudioSource_t1135106623 ** get_address_of_CoinSound_17() { return &___CoinSound_17; }
	inline void set_CoinSound_17(AudioSource_t1135106623 * value)
	{
		___CoinSound_17 = value;
		Il2CppCodeGenWriteBarrier(&___CoinSound_17, value);
	}

	inline static int32_t get_offset_of_HurtSound_18() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___HurtSound_18)); }
	inline AudioSource_t1135106623 * get_HurtSound_18() const { return ___HurtSound_18; }
	inline AudioSource_t1135106623 ** get_address_of_HurtSound_18() { return &___HurtSound_18; }
	inline void set_HurtSound_18(AudioSource_t1135106623 * value)
	{
		___HurtSound_18 = value;
		Il2CppCodeGenWriteBarrier(&___HurtSound_18, value);
	}

	inline static int32_t get_offset_of_EnemyDeadSound_19() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___EnemyDeadSound_19)); }
	inline AudioSource_t1135106623 * get_EnemyDeadSound_19() const { return ___EnemyDeadSound_19; }
	inline AudioSource_t1135106623 ** get_address_of_EnemyDeadSound_19() { return &___EnemyDeadSound_19; }
	inline void set_EnemyDeadSound_19(AudioSource_t1135106623 * value)
	{
		___EnemyDeadSound_19 = value;
		Il2CppCodeGenWriteBarrier(&___EnemyDeadSound_19, value);
	}

	inline static int32_t get_offset_of_BackgroundSound_20() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___BackgroundSound_20)); }
	inline AudioSource_t1135106623 * get_BackgroundSound_20() const { return ___BackgroundSound_20; }
	inline AudioSource_t1135106623 ** get_address_of_BackgroundSound_20() { return &___BackgroundSound_20; }
	inline void set_BackgroundSound_20(AudioSource_t1135106623 * value)
	{
		___BackgroundSound_20 = value;
		Il2CppCodeGenWriteBarrier(&___BackgroundSound_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
