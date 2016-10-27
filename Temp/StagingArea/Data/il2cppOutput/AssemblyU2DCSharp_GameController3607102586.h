#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 GameController::_livesValue
	int32_t ____livesValue_2;
	// System.Int32 GameController::_scoreValue
	int32_t ____scoreValue_3;
	// UnityEngine.GameObject GameController::player
	GameObject_t1756533147 * ___player_4;
	// UnityEngine.UI.Text GameController::GameOverLabel
	Text_t356221433 * ___GameOverLabel_5;
	// UnityEngine.UI.Text GameController::FinalScoreLabel
	Text_t356221433 * ___FinalScoreLabel_6;
	// UnityEngine.UI.Button GameController::RestartButton
	Button_t2872111280 * ___RestartButton_7;
	// UnityEngine.UI.Text GameController::LivesLabel
	Text_t356221433 * ___LivesLabel_8;
	// UnityEngine.UI.Text GameController::ScoreLabel
	Text_t356221433 * ___ScoreLabel_9;
	// UnityEngine.AudioSource GameController::gameOverSound
	AudioSource_t1135106623 * ___gameOverSound_10;

public:
	inline static int32_t get_offset_of__livesValue_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ____livesValue_2)); }
	inline int32_t get__livesValue_2() const { return ____livesValue_2; }
	inline int32_t* get_address_of__livesValue_2() { return &____livesValue_2; }
	inline void set__livesValue_2(int32_t value)
	{
		____livesValue_2 = value;
	}

	inline static int32_t get_offset_of__scoreValue_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ____scoreValue_3)); }
	inline int32_t get__scoreValue_3() const { return ____scoreValue_3; }
	inline int32_t* get_address_of__scoreValue_3() { return &____scoreValue_3; }
	inline void set__scoreValue_3(int32_t value)
	{
		____scoreValue_3 = value;
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___player_4)); }
	inline GameObject_t1756533147 * get_player_4() const { return ___player_4; }
	inline GameObject_t1756533147 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1756533147 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_GameOverLabel_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___GameOverLabel_5)); }
	inline Text_t356221433 * get_GameOverLabel_5() const { return ___GameOverLabel_5; }
	inline Text_t356221433 ** get_address_of_GameOverLabel_5() { return &___GameOverLabel_5; }
	inline void set_GameOverLabel_5(Text_t356221433 * value)
	{
		___GameOverLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&___GameOverLabel_5, value);
	}

	inline static int32_t get_offset_of_FinalScoreLabel_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___FinalScoreLabel_6)); }
	inline Text_t356221433 * get_FinalScoreLabel_6() const { return ___FinalScoreLabel_6; }
	inline Text_t356221433 ** get_address_of_FinalScoreLabel_6() { return &___FinalScoreLabel_6; }
	inline void set_FinalScoreLabel_6(Text_t356221433 * value)
	{
		___FinalScoreLabel_6 = value;
		Il2CppCodeGenWriteBarrier(&___FinalScoreLabel_6, value);
	}

	inline static int32_t get_offset_of_RestartButton_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___RestartButton_7)); }
	inline Button_t2872111280 * get_RestartButton_7() const { return ___RestartButton_7; }
	inline Button_t2872111280 ** get_address_of_RestartButton_7() { return &___RestartButton_7; }
	inline void set_RestartButton_7(Button_t2872111280 * value)
	{
		___RestartButton_7 = value;
		Il2CppCodeGenWriteBarrier(&___RestartButton_7, value);
	}

	inline static int32_t get_offset_of_LivesLabel_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___LivesLabel_8)); }
	inline Text_t356221433 * get_LivesLabel_8() const { return ___LivesLabel_8; }
	inline Text_t356221433 ** get_address_of_LivesLabel_8() { return &___LivesLabel_8; }
	inline void set_LivesLabel_8(Text_t356221433 * value)
	{
		___LivesLabel_8 = value;
		Il2CppCodeGenWriteBarrier(&___LivesLabel_8, value);
	}

	inline static int32_t get_offset_of_ScoreLabel_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___ScoreLabel_9)); }
	inline Text_t356221433 * get_ScoreLabel_9() const { return ___ScoreLabel_9; }
	inline Text_t356221433 ** get_address_of_ScoreLabel_9() { return &___ScoreLabel_9; }
	inline void set_ScoreLabel_9(Text_t356221433 * value)
	{
		___ScoreLabel_9 = value;
		Il2CppCodeGenWriteBarrier(&___ScoreLabel_9, value);
	}

	inline static int32_t get_offset_of_gameOverSound_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___gameOverSound_10)); }
	inline AudioSource_t1135106623 * get_gameOverSound_10() const { return ___gameOverSound_10; }
	inline AudioSource_t1135106623 ** get_address_of_gameOverSound_10() { return &___gameOverSound_10; }
	inline void set_gameOverSound_10(AudioSource_t1135106623 * value)
	{
		___gameOverSound_10 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverSound_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
