#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2889538658;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundLibrary
struct  SoundLibrary_t1775290572  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioClip[] SoundLibrary::popSounds
	AudioClipU5BU5D_t2889538658* ___popSounds_2;
	// UnityEngine.AudioClip[] SoundLibrary::releaseSounds
	AudioClipU5BU5D_t2889538658* ___releaseSounds_3;

public:
	inline static int32_t get_offset_of_popSounds_2() { return static_cast<int32_t>(offsetof(SoundLibrary_t1775290572, ___popSounds_2)); }
	inline AudioClipU5BU5D_t2889538658* get_popSounds_2() const { return ___popSounds_2; }
	inline AudioClipU5BU5D_t2889538658** get_address_of_popSounds_2() { return &___popSounds_2; }
	inline void set_popSounds_2(AudioClipU5BU5D_t2889538658* value)
	{
		___popSounds_2 = value;
		Il2CppCodeGenWriteBarrier(&___popSounds_2, value);
	}

	inline static int32_t get_offset_of_releaseSounds_3() { return static_cast<int32_t>(offsetof(SoundLibrary_t1775290572, ___releaseSounds_3)); }
	inline AudioClipU5BU5D_t2889538658* get_releaseSounds_3() const { return ___releaseSounds_3; }
	inline AudioClipU5BU5D_t2889538658** get_address_of_releaseSounds_3() { return &___releaseSounds_3; }
	inline void set_releaseSounds_3(AudioClipU5BU5D_t2889538658* value)
	{
		___releaseSounds_3 = value;
		Il2CppCodeGenWriteBarrier(&___releaseSounds_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
