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
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2889538658;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// GS.FBManager
struct FBManager_t1944751413;
// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// System.String[]
struct StringU5BU5D_t2956870243;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// System.String
struct String_t;

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
	// UnityEngine.GameObject ScoreManager::swipeInstruction
	GameObject_t4012695102 * ___swipeInstruction_7;
	// UnityEngine.Animator ScoreManager::animator
	Animator_t792326996 * ___animator_8;
	// UnityEngine.AudioClip[] ScoreManager::complimentSounds
	AudioClipU5BU5D_t2889538658* ___complimentSounds_9;
	// UnityEngine.AudioClip ScoreManager::gameStartSound
	AudioClip_t3714538611 * ___gameStartSound_10;
	// UnityEngine.AudioClip ScoreManager::superMode
	AudioClip_t3714538611 * ___superMode_11;
	// UnityEngine.AudioClip ScoreManager::superModeFinishSound
	AudioClip_t3714538611 * ___superModeFinishSound_12;
	// System.Int32 ScoreManager::minScoreToCompliment
	int32_t ___minScoreToCompliment_13;
	// System.Int32 ScoreManager::maxScoreToCompliment
	int32_t ___maxScoreToCompliment_14;
	// System.Single ScoreManager::complimentShowTimePerChar
	float ___complimentShowTimePerChar_15;
	// GS.FBManager ScoreManager::fbManager
	FBManager_t1944751413 * ___fbManager_16;
	// UnityEngine.Color ScoreManager::backgroundColor
	Color_t1588175760  ___backgroundColor_17;
	// UnityEngine.Color ScoreManager::backgroundSuperColor
	Color_t1588175760  ___backgroundSuperColor_18;
	// System.Single ScoreManager::showAdEvery
	float ___showAdEvery_19;
	// System.Single ScoreManager::timeOfAd
	float ___timeOfAd_20;
	// System.Single ScoreManager::superFillOnPop
	float ___superFillOnPop_21;
	// System.Single ScoreManager::superTime
	float ___superTime_22;
	// System.Single ScoreManager::superDropRate
	float ___superDropRate_23;
	// System.Single ScoreManager::superAmount
	float ___superAmount_24;
	// System.Boolean ScoreManager::isSuperActive
	bool ___isSuperActive_25;
	// System.Single ScoreManager::timeOfSuper
	float ___timeOfSuper_26;
	// UnityEngine.ParticleSystem ScoreManager::part
	ParticleSystem_t56787138 * ___part_27;
	// System.String[] ScoreManager::compliments
	StringU5BU5D_t2956870243* ___compliments_28;
	// System.String[] ScoreManager::rareCompliments
	StringU5BU5D_t2956870243* ___rareCompliments_29;
	// System.Int32 ScoreManager::score
	int32_t ___score_30;
	// System.Int32 ScoreManager::nextComplimentMilestone
	int32_t ___nextComplimentMilestone_31;
	// UnityEngine.AudioSource ScoreManager::audioSource
	AudioSource_t3628549054 * ___audioSource_32;
	// System.Single ScoreManager::lastPop
	float ___lastPop_33;
	// System.String ScoreManager::lastCompliment
	String_t* ___lastCompliment_34;
	// System.Boolean ScoreManager::started
	bool ___started_35;

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

	inline static int32_t get_offset_of_swipeInstruction_7() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___swipeInstruction_7)); }
	inline GameObject_t4012695102 * get_swipeInstruction_7() const { return ___swipeInstruction_7; }
	inline GameObject_t4012695102 ** get_address_of_swipeInstruction_7() { return &___swipeInstruction_7; }
	inline void set_swipeInstruction_7(GameObject_t4012695102 * value)
	{
		___swipeInstruction_7 = value;
		Il2CppCodeGenWriteBarrier(&___swipeInstruction_7, value);
	}

	inline static int32_t get_offset_of_animator_8() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___animator_8)); }
	inline Animator_t792326996 * get_animator_8() const { return ___animator_8; }
	inline Animator_t792326996 ** get_address_of_animator_8() { return &___animator_8; }
	inline void set_animator_8(Animator_t792326996 * value)
	{
		___animator_8 = value;
		Il2CppCodeGenWriteBarrier(&___animator_8, value);
	}

	inline static int32_t get_offset_of_complimentSounds_9() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___complimentSounds_9)); }
	inline AudioClipU5BU5D_t2889538658* get_complimentSounds_9() const { return ___complimentSounds_9; }
	inline AudioClipU5BU5D_t2889538658** get_address_of_complimentSounds_9() { return &___complimentSounds_9; }
	inline void set_complimentSounds_9(AudioClipU5BU5D_t2889538658* value)
	{
		___complimentSounds_9 = value;
		Il2CppCodeGenWriteBarrier(&___complimentSounds_9, value);
	}

	inline static int32_t get_offset_of_gameStartSound_10() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___gameStartSound_10)); }
	inline AudioClip_t3714538611 * get_gameStartSound_10() const { return ___gameStartSound_10; }
	inline AudioClip_t3714538611 ** get_address_of_gameStartSound_10() { return &___gameStartSound_10; }
	inline void set_gameStartSound_10(AudioClip_t3714538611 * value)
	{
		___gameStartSound_10 = value;
		Il2CppCodeGenWriteBarrier(&___gameStartSound_10, value);
	}

	inline static int32_t get_offset_of_superMode_11() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___superMode_11)); }
	inline AudioClip_t3714538611 * get_superMode_11() const { return ___superMode_11; }
	inline AudioClip_t3714538611 ** get_address_of_superMode_11() { return &___superMode_11; }
	inline void set_superMode_11(AudioClip_t3714538611 * value)
	{
		___superMode_11 = value;
		Il2CppCodeGenWriteBarrier(&___superMode_11, value);
	}

	inline static int32_t get_offset_of_superModeFinishSound_12() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___superModeFinishSound_12)); }
	inline AudioClip_t3714538611 * get_superModeFinishSound_12() const { return ___superModeFinishSound_12; }
	inline AudioClip_t3714538611 ** get_address_of_superModeFinishSound_12() { return &___superModeFinishSound_12; }
	inline void set_superModeFinishSound_12(AudioClip_t3714538611 * value)
	{
		___superModeFinishSound_12 = value;
		Il2CppCodeGenWriteBarrier(&___superModeFinishSound_12, value);
	}

	inline static int32_t get_offset_of_minScoreToCompliment_13() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___minScoreToCompliment_13)); }
	inline int32_t get_minScoreToCompliment_13() const { return ___minScoreToCompliment_13; }
	inline int32_t* get_address_of_minScoreToCompliment_13() { return &___minScoreToCompliment_13; }
	inline void set_minScoreToCompliment_13(int32_t value)
	{
		___minScoreToCompliment_13 = value;
	}

	inline static int32_t get_offset_of_maxScoreToCompliment_14() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___maxScoreToCompliment_14)); }
	inline int32_t get_maxScoreToCompliment_14() const { return ___maxScoreToCompliment_14; }
	inline int32_t* get_address_of_maxScoreToCompliment_14() { return &___maxScoreToCompliment_14; }
	inline void set_maxScoreToCompliment_14(int32_t value)
	{
		___maxScoreToCompliment_14 = value;
	}

	inline static int32_t get_offset_of_complimentShowTimePerChar_15() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___complimentShowTimePerChar_15)); }
	inline float get_complimentShowTimePerChar_15() const { return ___complimentShowTimePerChar_15; }
	inline float* get_address_of_complimentShowTimePerChar_15() { return &___complimentShowTimePerChar_15; }
	inline void set_complimentShowTimePerChar_15(float value)
	{
		___complimentShowTimePerChar_15 = value;
	}

	inline static int32_t get_offset_of_fbManager_16() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___fbManager_16)); }
	inline FBManager_t1944751413 * get_fbManager_16() const { return ___fbManager_16; }
	inline FBManager_t1944751413 ** get_address_of_fbManager_16() { return &___fbManager_16; }
	inline void set_fbManager_16(FBManager_t1944751413 * value)
	{
		___fbManager_16 = value;
		Il2CppCodeGenWriteBarrier(&___fbManager_16, value);
	}

	inline static int32_t get_offset_of_backgroundColor_17() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___backgroundColor_17)); }
	inline Color_t1588175760  get_backgroundColor_17() const { return ___backgroundColor_17; }
	inline Color_t1588175760 * get_address_of_backgroundColor_17() { return &___backgroundColor_17; }
	inline void set_backgroundColor_17(Color_t1588175760  value)
	{
		___backgroundColor_17 = value;
	}

	inline static int32_t get_offset_of_backgroundSuperColor_18() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___backgroundSuperColor_18)); }
	inline Color_t1588175760  get_backgroundSuperColor_18() const { return ___backgroundSuperColor_18; }
	inline Color_t1588175760 * get_address_of_backgroundSuperColor_18() { return &___backgroundSuperColor_18; }
	inline void set_backgroundSuperColor_18(Color_t1588175760  value)
	{
		___backgroundSuperColor_18 = value;
	}

	inline static int32_t get_offset_of_showAdEvery_19() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___showAdEvery_19)); }
	inline float get_showAdEvery_19() const { return ___showAdEvery_19; }
	inline float* get_address_of_showAdEvery_19() { return &___showAdEvery_19; }
	inline void set_showAdEvery_19(float value)
	{
		___showAdEvery_19 = value;
	}

	inline static int32_t get_offset_of_timeOfAd_20() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___timeOfAd_20)); }
	inline float get_timeOfAd_20() const { return ___timeOfAd_20; }
	inline float* get_address_of_timeOfAd_20() { return &___timeOfAd_20; }
	inline void set_timeOfAd_20(float value)
	{
		___timeOfAd_20 = value;
	}

	inline static int32_t get_offset_of_superFillOnPop_21() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___superFillOnPop_21)); }
	inline float get_superFillOnPop_21() const { return ___superFillOnPop_21; }
	inline float* get_address_of_superFillOnPop_21() { return &___superFillOnPop_21; }
	inline void set_superFillOnPop_21(float value)
	{
		___superFillOnPop_21 = value;
	}

	inline static int32_t get_offset_of_superTime_22() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___superTime_22)); }
	inline float get_superTime_22() const { return ___superTime_22; }
	inline float* get_address_of_superTime_22() { return &___superTime_22; }
	inline void set_superTime_22(float value)
	{
		___superTime_22 = value;
	}

	inline static int32_t get_offset_of_superDropRate_23() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___superDropRate_23)); }
	inline float get_superDropRate_23() const { return ___superDropRate_23; }
	inline float* get_address_of_superDropRate_23() { return &___superDropRate_23; }
	inline void set_superDropRate_23(float value)
	{
		___superDropRate_23 = value;
	}

	inline static int32_t get_offset_of_superAmount_24() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___superAmount_24)); }
	inline float get_superAmount_24() const { return ___superAmount_24; }
	inline float* get_address_of_superAmount_24() { return &___superAmount_24; }
	inline void set_superAmount_24(float value)
	{
		___superAmount_24 = value;
	}

	inline static int32_t get_offset_of_isSuperActive_25() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___isSuperActive_25)); }
	inline bool get_isSuperActive_25() const { return ___isSuperActive_25; }
	inline bool* get_address_of_isSuperActive_25() { return &___isSuperActive_25; }
	inline void set_isSuperActive_25(bool value)
	{
		___isSuperActive_25 = value;
	}

	inline static int32_t get_offset_of_timeOfSuper_26() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___timeOfSuper_26)); }
	inline float get_timeOfSuper_26() const { return ___timeOfSuper_26; }
	inline float* get_address_of_timeOfSuper_26() { return &___timeOfSuper_26; }
	inline void set_timeOfSuper_26(float value)
	{
		___timeOfSuper_26 = value;
	}

	inline static int32_t get_offset_of_part_27() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___part_27)); }
	inline ParticleSystem_t56787138 * get_part_27() const { return ___part_27; }
	inline ParticleSystem_t56787138 ** get_address_of_part_27() { return &___part_27; }
	inline void set_part_27(ParticleSystem_t56787138 * value)
	{
		___part_27 = value;
		Il2CppCodeGenWriteBarrier(&___part_27, value);
	}

	inline static int32_t get_offset_of_compliments_28() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___compliments_28)); }
	inline StringU5BU5D_t2956870243* get_compliments_28() const { return ___compliments_28; }
	inline StringU5BU5D_t2956870243** get_address_of_compliments_28() { return &___compliments_28; }
	inline void set_compliments_28(StringU5BU5D_t2956870243* value)
	{
		___compliments_28 = value;
		Il2CppCodeGenWriteBarrier(&___compliments_28, value);
	}

	inline static int32_t get_offset_of_rareCompliments_29() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___rareCompliments_29)); }
	inline StringU5BU5D_t2956870243* get_rareCompliments_29() const { return ___rareCompliments_29; }
	inline StringU5BU5D_t2956870243** get_address_of_rareCompliments_29() { return &___rareCompliments_29; }
	inline void set_rareCompliments_29(StringU5BU5D_t2956870243* value)
	{
		___rareCompliments_29 = value;
		Il2CppCodeGenWriteBarrier(&___rareCompliments_29, value);
	}

	inline static int32_t get_offset_of_score_30() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___score_30)); }
	inline int32_t get_score_30() const { return ___score_30; }
	inline int32_t* get_address_of_score_30() { return &___score_30; }
	inline void set_score_30(int32_t value)
	{
		___score_30 = value;
	}

	inline static int32_t get_offset_of_nextComplimentMilestone_31() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___nextComplimentMilestone_31)); }
	inline int32_t get_nextComplimentMilestone_31() const { return ___nextComplimentMilestone_31; }
	inline int32_t* get_address_of_nextComplimentMilestone_31() { return &___nextComplimentMilestone_31; }
	inline void set_nextComplimentMilestone_31(int32_t value)
	{
		___nextComplimentMilestone_31 = value;
	}

	inline static int32_t get_offset_of_audioSource_32() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___audioSource_32)); }
	inline AudioSource_t3628549054 * get_audioSource_32() const { return ___audioSource_32; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_32() { return &___audioSource_32; }
	inline void set_audioSource_32(AudioSource_t3628549054 * value)
	{
		___audioSource_32 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_32, value);
	}

	inline static int32_t get_offset_of_lastPop_33() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___lastPop_33)); }
	inline float get_lastPop_33() const { return ___lastPop_33; }
	inline float* get_address_of_lastPop_33() { return &___lastPop_33; }
	inline void set_lastPop_33(float value)
	{
		___lastPop_33 = value;
	}

	inline static int32_t get_offset_of_lastCompliment_34() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___lastCompliment_34)); }
	inline String_t* get_lastCompliment_34() const { return ___lastCompliment_34; }
	inline String_t** get_address_of_lastCompliment_34() { return &___lastCompliment_34; }
	inline void set_lastCompliment_34(String_t* value)
	{
		___lastCompliment_34 = value;
		Il2CppCodeGenWriteBarrier(&___lastCompliment_34, value);
	}

	inline static int32_t get_offset_of_started_35() { return static_cast<int32_t>(offsetof(ScoreManager_t2519962843, ___started_35)); }
	inline bool get_started_35() const { return ___started_35; }
	inline bool* get_address_of_started_35() { return &___started_35; }
	inline void set_started_35(bool value)
	{
		___started_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
