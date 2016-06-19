#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t503173063;
// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// BubbleGrid
struct BubbleGrid_t2156423698;
// ScoreManager
struct ScoreManager_t2519962843;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// SoundLibrary
struct SoundLibrary_t1775290572;
// System.Action`1<System.Int32>
struct Action_1_t2995867492;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bubble
struct  Bubble_t2000593068  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Sprite[] Bubble::bubbleImages
	SpriteU5BU5D_t503173063* ___bubbleImages_2;
	// UnityEngine.Sprite[] Bubble::poppedImages
	SpriteU5BU5D_t503173063* ___poppedImages_3;
	// UnityEngine.ParticleSystem Bubble::popParticles
	ParticleSystem_t56787138 * ___popParticles_4;
	// System.Int32 Bubble::value
	int32_t ___value_5;
	// System.Boolean Bubble::isPopped
	bool ___isPopped_6;
	// System.Int32 Bubble::row
	int32_t ___row_7;
	// System.Single Bubble::fadeOutTime
	float ___fadeOutTime_8;
	// BubbleGrid Bubble::grid
	BubbleGrid_t2156423698 * ___grid_9;
	// ScoreManager Bubble::scoreManager
	ScoreManager_t2519962843 * ___scoreManager_10;
	// UnityEngine.UI.Image Bubble::ourImage
	Image_t3354615620 * ___ourImage_11;
	// UnityEngine.AudioSource Bubble::audiosource
	AudioSource_t3628549054 * ___audiosource_12;
	// UnityEngine.AudioClip Bubble::clip
	AudioClip_t3714538611 * ___clip_13;
	// SoundLibrary Bubble::soundLibrary
	SoundLibrary_t1775290572 * ___soundLibrary_14;
	// System.Single Bubble::timeOfPop
	float ___timeOfPop_15;
	// System.Action`1<System.Int32> Bubble::OnPop
	Action_1_t2995867492 * ___OnPop_16;

public:
	inline static int32_t get_offset_of_bubbleImages_2() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___bubbleImages_2)); }
	inline SpriteU5BU5D_t503173063* get_bubbleImages_2() const { return ___bubbleImages_2; }
	inline SpriteU5BU5D_t503173063** get_address_of_bubbleImages_2() { return &___bubbleImages_2; }
	inline void set_bubbleImages_2(SpriteU5BU5D_t503173063* value)
	{
		___bubbleImages_2 = value;
		Il2CppCodeGenWriteBarrier(&___bubbleImages_2, value);
	}

	inline static int32_t get_offset_of_poppedImages_3() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___poppedImages_3)); }
	inline SpriteU5BU5D_t503173063* get_poppedImages_3() const { return ___poppedImages_3; }
	inline SpriteU5BU5D_t503173063** get_address_of_poppedImages_3() { return &___poppedImages_3; }
	inline void set_poppedImages_3(SpriteU5BU5D_t503173063* value)
	{
		___poppedImages_3 = value;
		Il2CppCodeGenWriteBarrier(&___poppedImages_3, value);
	}

	inline static int32_t get_offset_of_popParticles_4() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___popParticles_4)); }
	inline ParticleSystem_t56787138 * get_popParticles_4() const { return ___popParticles_4; }
	inline ParticleSystem_t56787138 ** get_address_of_popParticles_4() { return &___popParticles_4; }
	inline void set_popParticles_4(ParticleSystem_t56787138 * value)
	{
		___popParticles_4 = value;
		Il2CppCodeGenWriteBarrier(&___popParticles_4, value);
	}

	inline static int32_t get_offset_of_value_5() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___value_5)); }
	inline int32_t get_value_5() const { return ___value_5; }
	inline int32_t* get_address_of_value_5() { return &___value_5; }
	inline void set_value_5(int32_t value)
	{
		___value_5 = value;
	}

	inline static int32_t get_offset_of_isPopped_6() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___isPopped_6)); }
	inline bool get_isPopped_6() const { return ___isPopped_6; }
	inline bool* get_address_of_isPopped_6() { return &___isPopped_6; }
	inline void set_isPopped_6(bool value)
	{
		___isPopped_6 = value;
	}

	inline static int32_t get_offset_of_row_7() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___row_7)); }
	inline int32_t get_row_7() const { return ___row_7; }
	inline int32_t* get_address_of_row_7() { return &___row_7; }
	inline void set_row_7(int32_t value)
	{
		___row_7 = value;
	}

	inline static int32_t get_offset_of_fadeOutTime_8() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___fadeOutTime_8)); }
	inline float get_fadeOutTime_8() const { return ___fadeOutTime_8; }
	inline float* get_address_of_fadeOutTime_8() { return &___fadeOutTime_8; }
	inline void set_fadeOutTime_8(float value)
	{
		___fadeOutTime_8 = value;
	}

	inline static int32_t get_offset_of_grid_9() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___grid_9)); }
	inline BubbleGrid_t2156423698 * get_grid_9() const { return ___grid_9; }
	inline BubbleGrid_t2156423698 ** get_address_of_grid_9() { return &___grid_9; }
	inline void set_grid_9(BubbleGrid_t2156423698 * value)
	{
		___grid_9 = value;
		Il2CppCodeGenWriteBarrier(&___grid_9, value);
	}

	inline static int32_t get_offset_of_scoreManager_10() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___scoreManager_10)); }
	inline ScoreManager_t2519962843 * get_scoreManager_10() const { return ___scoreManager_10; }
	inline ScoreManager_t2519962843 ** get_address_of_scoreManager_10() { return &___scoreManager_10; }
	inline void set_scoreManager_10(ScoreManager_t2519962843 * value)
	{
		___scoreManager_10 = value;
		Il2CppCodeGenWriteBarrier(&___scoreManager_10, value);
	}

	inline static int32_t get_offset_of_ourImage_11() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___ourImage_11)); }
	inline Image_t3354615620 * get_ourImage_11() const { return ___ourImage_11; }
	inline Image_t3354615620 ** get_address_of_ourImage_11() { return &___ourImage_11; }
	inline void set_ourImage_11(Image_t3354615620 * value)
	{
		___ourImage_11 = value;
		Il2CppCodeGenWriteBarrier(&___ourImage_11, value);
	}

	inline static int32_t get_offset_of_audiosource_12() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___audiosource_12)); }
	inline AudioSource_t3628549054 * get_audiosource_12() const { return ___audiosource_12; }
	inline AudioSource_t3628549054 ** get_address_of_audiosource_12() { return &___audiosource_12; }
	inline void set_audiosource_12(AudioSource_t3628549054 * value)
	{
		___audiosource_12 = value;
		Il2CppCodeGenWriteBarrier(&___audiosource_12, value);
	}

	inline static int32_t get_offset_of_clip_13() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___clip_13)); }
	inline AudioClip_t3714538611 * get_clip_13() const { return ___clip_13; }
	inline AudioClip_t3714538611 ** get_address_of_clip_13() { return &___clip_13; }
	inline void set_clip_13(AudioClip_t3714538611 * value)
	{
		___clip_13 = value;
		Il2CppCodeGenWriteBarrier(&___clip_13, value);
	}

	inline static int32_t get_offset_of_soundLibrary_14() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___soundLibrary_14)); }
	inline SoundLibrary_t1775290572 * get_soundLibrary_14() const { return ___soundLibrary_14; }
	inline SoundLibrary_t1775290572 ** get_address_of_soundLibrary_14() { return &___soundLibrary_14; }
	inline void set_soundLibrary_14(SoundLibrary_t1775290572 * value)
	{
		___soundLibrary_14 = value;
		Il2CppCodeGenWriteBarrier(&___soundLibrary_14, value);
	}

	inline static int32_t get_offset_of_timeOfPop_15() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___timeOfPop_15)); }
	inline float get_timeOfPop_15() const { return ___timeOfPop_15; }
	inline float* get_address_of_timeOfPop_15() { return &___timeOfPop_15; }
	inline void set_timeOfPop_15(float value)
	{
		___timeOfPop_15 = value;
	}

	inline static int32_t get_offset_of_OnPop_16() { return static_cast<int32_t>(offsetof(Bubble_t2000593068, ___OnPop_16)); }
	inline Action_1_t2995867492 * get_OnPop_16() const { return ___OnPop_16; }
	inline Action_1_t2995867492 ** get_address_of_OnPop_16() { return &___OnPop_16; }
	inline void set_OnPop_16(Action_1_t2995867492 * value)
	{
		___OnPop_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnPop_16, value);
	}
};

struct Bubble_t2000593068_StaticFields
{
public:
	// System.Action`1<System.Int32> Bubble::<>f__am$cacheF
	Action_1_t2995867492 * ___U3CU3Ef__amU24cacheF_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_17() { return static_cast<int32_t>(offsetof(Bubble_t2000593068_StaticFields, ___U3CU3Ef__amU24cacheF_17)); }
	inline Action_1_t2995867492 * get_U3CU3Ef__amU24cacheF_17() const { return ___U3CU3Ef__amU24cacheF_17; }
	inline Action_1_t2995867492 ** get_address_of_U3CU3Ef__amU24cacheF_17() { return &___U3CU3Ef__amU24cacheF_17; }
	inline void set_U3CU3Ef__amU24cacheF_17(Action_1_t2995867492 * value)
	{
		___U3CU3Ef__amU24cacheF_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheF_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
