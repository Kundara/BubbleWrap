#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Slider
struct Slider_t1468074762;
// Pump
struct Pump_t2499208;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2279835437;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2889538658;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// GS.FBManager
struct FBManager_t1944751413;
// System.String[]
struct StringU5BU5D_t2956870243;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreManager
struct  ScoreManager_t2519962843  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text ScoreManager::scoreText
	Text_t3286458198 * ___scoreText_2;
	// UnityEngine.UI.Text ScoreManager::complimentText
	Text_t3286458198 * ___complimentText_3;
	// UnityEngine.UI.Slider ScoreManager::superSlider
	Slider_t1468074762 * ___superSlider_4;
	// Pump ScoreManager::powerPumper
	Pump_t2499208 * ___powerPumper_5;
	// UnityEngine.UI.Image[] ScoreManager::backgrounds
	ImageU5BU5D_t2279835437* ___backgrounds_6;
	// UnityEngine.AudioClip[] ScoreManager::complimentSounds
	AudioClipU5BU5D_t2889538658* ___complimentSounds_7;
	// UnityEngine.AudioClip ScoreManager::gameStartSound
	AudioClip_t3714538611 * ___gameStartSound_8;
	// UnityEngine.AudioClip ScoreManager::superMode
	AudioClip_t3714538611 * ___superMode_9;
	// UnityEngine.AudioClip ScoreManager::superModeFinishSound
	AudioClip_t3714538611 * ___superModeFinishSound_10;
	// System.Int32 ScoreManager::minScoreToCompliment
	int32_t ___minScoreToCompliment_11;
	// System.Int32 ScoreManager::maxScoreToCompliment
	int32_t ___maxScoreToCompliment_12;
	// System.Single ScoreManager::complimentShowTimePerChar
	float ___complimentShowTimePerChar_13;
	// GS.FBManager ScoreManager::fbManager
	FBManager_t1944751413 * ___fbManager_14;
	// UnityEngine.Color ScoreManager::backgroundColor
	Color_t1588175760  ___backgroundColor_15;
	// UnityEngine.Color ScoreManager::backgroundSuperColor
	Color_t1588175760  ___backgroundSuperColor_16;
	// System.Single ScoreManager::superFillOnPop
	float ___superFillOnPop_17;
	// System.Single ScoreManager::superTime
	float ___superTime_18;
	// System.Single ScoreManager::superDropRate
	float ___superDropRate_19;
	// System.Single ScoreManager::superAmount
	float ___superAmount_20;
	// System.Boolean ScoreManager::isSuperActive
	bool ___isSuperActive_21;
	// System.Single ScoreManager::timeOfSuper
	float ___timeOfSuper_22;
	// System.String[] ScoreManager::compliments
	StringU5BU5D_t2956870243* ___compliments_23;
	// System.Int32 ScoreManager::score
	int32_t ___score_24;
	// System.Int32 ScoreManager::nextComplimentMilestone
	int32_t ___nextComplimentMilestone_25;
	// UnityEngine.AudioSource ScoreManager::audioSource
	AudioSource_t3628549054 * ___audioSource_26;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___scoreText_2)); }
	inline Text_t3286458198 * get_scoreText_2() const { return ___scoreText_2; }
	inline Text_t3286458198 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(Text_t3286458198 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_2, value);
	}

	inline static int32_t get_offset_of_complimentText_3() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___complimentText_3)); }
	inline Text_t3286458198 * get_complimentText_3() const { return ___complimentText_3; }
	inline Text_t3286458198 ** get_address_of_complimentText_3() { return &___complimentText_3; }
	inline void set_complimentText_3(Text_t3286458198 * value)
	{
		___complimentText_3 = value;
		Il2CppCodeGenWriteBarrier(&___complimentText_3, value);
	}

	inline static int32_t get_offset_of_superSlider_4() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___superSlider_4)); }
	inline Slider_t1468074762 * get_superSlider_4() const { return ___superSlider_4; }
	inline Slider_t1468074762 ** get_address_of_superSlider_4() { return &___superSlider_4; }
	inline void set_superSlider_4(Slider_t1468074762 * value)
	{
		___superSlider_4 = value;
		Il2CppCodeGenWriteBarrier(&___superSlider_4, value);
	}

	inline static int32_t get_offset_of_powerPumper_5() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___powerPumper_5)); }
	inline Pump_t2499208 * get_powerPumper_5() const { return ___powerPumper_5; }
	inline Pump_t2499208 ** get_address_of_powerPumper_5() { return &___powerPumper_5; }
	inline void set_powerPumper_5(Pump_t2499208 * value)
	{
		___powerPumper_5 = value;
		Il2CppCodeGenWriteBarrier(&___powerPumper_5, value);
	}

	inline static int32_t get_offset_of_backgrounds_6() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___backgrounds_6)); }
	inline ImageU5BU5D_t2279835437* get_backgrounds_6() const { return ___backgrounds_6; }
	inline ImageU5BU5D_t2279835437** get_address_of_backgrounds_6() { return &___backgrounds_6; }
	inline void set_backgrounds_6(ImageU5BU5D_t2279835437* value)
	{
		___backgrounds_6 = value;
		Il2CppCodeGenWriteBarrier(&___backgrounds_6, value);
	}

	inline static int32_t get_offset_of_complimentSounds_7() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___complimentSounds_7)); }
	inline AudioClipU5BU5D_t2889538658* get_complimentSounds_7() const { return ___complimentSounds_7; }
	inline AudioClipU5BU5D_t2889538658** get_address_of_complimentSounds_7() { return &___complimentSounds_7; }
	inline void set_complimentSounds_7(AudioClipU5BU5D_t2889538658* value)
	{
		___complimentSounds_7 = value;
		Il2CppCodeGenWriteBarrier(&___complimentSounds_7, value);
	}

	inline static int32_t get_offset_of_gameStartSound_8() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___gameStartSound_8)); }
	inline AudioClip_t3714538611 * get_gameStartSound_8() const { return ___gameStartSound_8; }
	inline AudioClip_t3714538611 ** get_address_of_gameStartSound_8() { return &___gameStartSound_8; }
	inline void set_gameStartSound_8(AudioClip_t3714538611 * value)
	{
		___gameStartSound_8 = value;
		Il2CppCodeGenWriteBarrier(&___gameStartSound_8, value);
	}

	inline static int32_t get_offset_of_superMode_9() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___superMode_9)); }
	inline AudioClip_t3714538611 * get_superMode_9() const { return ___superMode_9; }
	inline AudioClip_t3714538611 ** get_address_of_superMode_9() { return &___superMode_9; }
	inline void set_superMode_9(AudioClip_t3714538611 * value)
	{
		___superMode_9 = value;
		Il2CppCodeGenWriteBarrier(&___superMode_9, value);
	}

	inline static int32_t get_offset_of_superModeFinishSound_10() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___superModeFinishSound_10)); }
	inline AudioClip_t3714538611 * get_superModeFinishSound_10() const { return ___superModeFinishSound_10; }
	inline AudioClip_t3714538611 ** get_address_of_superModeFinishSound_10() { return &___superModeFinishSound_10; }
	inline void set_superModeFinishSound_10(AudioClip_t3714538611 * value)
	{
		___superModeFinishSound_10 = value;
		Il2CppCodeGenWriteBarrier(&___superModeFinishSound_10, value);
	}

	inline static int32_t get_offset_of_minScoreToCompliment_11() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___minScoreToCompliment_11)); }
	inline int32_t get_minScoreToCompliment_11() const { return ___minScoreToCompliment_11; }
	inline int32_t* get_address_of_minScoreToCompliment_11() { return &___minScoreToCompliment_11; }
	inline void set_minScoreToCompliment_11(int32_t value)
	{
		___minScoreToCompliment_11 = value;
	}

	inline static int32_t get_offset_of_maxScoreToCompliment_12() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___maxScoreToCompliment_12)); }
	inline int32_t get_maxScoreToCompliment_12() const { return ___maxScoreToCompliment_12; }
	inline int32_t* get_address_of_maxScoreToCompliment_12() { return &___maxScoreToCompliment_12; }
	inline void set_maxScoreToCompliment_12(int32_t value)
	{
		___maxScoreToCompliment_12 = value;
	}

	inline static int32_t get_offset_of_complimentShowTimePerChar_13() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___complimentShowTimePerChar_13)); }
	inline float get_complimentShowTimePerChar_13() const { return ___complimentShowTimePerChar_13; }
	inline float* get_address_of_complimentShowTimePerChar_13() { return &___complimentShowTimePerChar_13; }
	inline void set_complimentShowTimePerChar_13(float value)
	{
		___complimentShowTimePerChar_13 = value;
	}

	inline static int32_t get_offset_of_fbManager_14() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___fbManager_14)); }
	inline FBManager_t1944751413 * get_fbManager_14() const { return ___fbManager_14; }
	inline FBManager_t1944751413 ** get_address_of_fbManager_14() { return &___fbManager_14; }
	inline void set_fbManager_14(FBManager_t1944751413 * value)
	{
		___fbManager_14 = value;
		Il2CppCodeGenWriteBarrier(&___fbManager_14, value);
	}

	inline static int32_t get_offset_of_backgroundColor_15() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___backgroundColor_15)); }
	inline Color_t1588175760  get_backgroundColor_15() const { return ___backgroundColor_15; }
	inline Color_t1588175760 * get_address_of_backgroundColor_15() { return &___backgroundColor_15; }
	inline void set_backgroundColor_15(Color_t1588175760  value)
	{
		___backgroundColor_15 = value;
	}

	inline static int32_t get_offset_of_backgroundSuperColor_16() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___backgroundSuperColor_16)); }
	inline Color_t1588175760  get_backgroundSuperColor_16() const { return ___backgroundSuperColor_16; }
	inline Color_t1588175760 * get_address_of_backgroundSuperColor_16() { return &___backgroundSuperColor_16; }
	inline void set_backgroundSuperColor_16(Color_t1588175760  value)
	{
		___backgroundSuperColor_16 = value;
	}

	inline static int32_t get_offset_of_superFillOnPop_17() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___superFillOnPop_17)); }
	inline float get_superFillOnPop_17() const { return ___superFillOnPop_17; }
	inline float* get_address_of_superFillOnPop_17() { return &___superFillOnPop_17; }
	inline void set_superFillOnPop_17(float value)
	{
		___superFillOnPop_17 = value;
	}

	inline static int32_t get_offset_of_superTime_18() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___superTime_18)); }
	inline float get_superTime_18() const { return ___superTime_18; }
	inline float* get_address_of_superTime_18() { return &___superTime_18; }
	inline void set_superTime_18(float value)
	{
		___superTime_18 = value;
	}

	inline static int32_t get_offset_of_superDropRate_19() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___superDropRate_19)); }
	inline float get_superDropRate_19() const { return ___superDropRate_19; }
	inline float* get_address_of_superDropRate_19() { return &___superDropRate_19; }
	inline void set_superDropRate_19(float value)
	{
		___superDropRate_19 = value;
	}

	inline static int32_t get_offset_of_superAmount_20() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___superAmount_20)); }
	inline float get_superAmount_20() const { return ___superAmount_20; }
	inline float* get_address_of_superAmount_20() { return &___superAmount_20; }
	inline void set_superAmount_20(float value)
	{
		___superAmount_20 = value;
	}

	inline static int32_t get_offset_of_isSuperActive_21() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___isSuperActive_21)); }
	inline bool get_isSuperActive_21() const { return ___isSuperActive_21; }
	inline bool* get_address_of_isSuperActive_21() { return &___isSuperActive_21; }
	inline void set_isSuperActive_21(bool value)
	{
		___isSuperActive_21 = value;
	}

	inline static int32_t get_offset_of_timeOfSuper_22() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___timeOfSuper_22)); }
	inline float get_timeOfSuper_22() const { return ___timeOfSuper_22; }
	inline float* get_address_of_timeOfSuper_22() { return &___timeOfSuper_22; }
	inline void set_timeOfSuper_22(float value)
	{
		___timeOfSuper_22 = value;
	}

	inline static int32_t get_offset_of_compliments_23() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___compliments_23)); }
	inline StringU5BU5D_t2956870243* get_compliments_23() const { return ___compliments_23; }
	inline StringU5BU5D_t2956870243** get_address_of_compliments_23() { return &___compliments_23; }
	inline void set_compliments_23(StringU5BU5D_t2956870243* value)
	{
		___compliments_23 = value;
		Il2CppCodeGenWriteBarrier(&___compliments_23, value);
	}

	inline static int32_t get_offset_of_score_24() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___score_24)); }
	inline int32_t get_score_24() const { return ___score_24; }
	inline int32_t* get_address_of_score_24() { return &___score_24; }
	inline void set_score_24(int32_t value)
	{
		___score_24 = value;
	}

	inline static int32_t get_offset_of_nextComplimentMilestone_25() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___nextComplimentMilestone_25)); }
	inline int32_t get_nextComplimentMilestone_25() const { return ___nextComplimentMilestone_25; }
	inline int32_t* get_address_of_nextComplimentMilestone_25() { return &___nextComplimentMilestone_25; }
	inline void set_nextComplimentMilestone_25(int32_t value)
	{
		___nextComplimentMilestone_25 = value;
	}

	inline static int32_t get_offset_of_audioSource_26() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___audioSource_26)); }
	inline AudioSource_t3628549054 * get_audioSource_26() const { return ___audioSource_26; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_26() { return &___audioSource_26; }
	inline void set_audioSource_26(AudioSource_t3628549054 * value)
	{
		___audioSource_26 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
