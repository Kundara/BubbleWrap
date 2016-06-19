#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pump
struct  Pump_t2499208  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Pump::alpha
	float ___alpha_2;
	// UnityEngine.UI.Image Pump::image
	Image_t3354615620 * ___image_3;
	// System.Single Pump::pumpAmount
	float ___pumpAmount_4;
	// System.Single Pump::dropAmount
	float ___dropAmount_5;

public:
	inline static int32_t get_offset_of_alpha_2() { return static_cast<int32_t>(offsetof(Pump_t2499208, ___alpha_2)); }
	inline float get_alpha_2() const { return ___alpha_2; }
	inline float* get_address_of_alpha_2() { return &___alpha_2; }
	inline void set_alpha_2(float value)
	{
		___alpha_2 = value;
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(Pump_t2499208, ___image_3)); }
	inline Image_t3354615620 * get_image_3() const { return ___image_3; }
	inline Image_t3354615620 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(Image_t3354615620 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier(&___image_3, value);
	}

	inline static int32_t get_offset_of_pumpAmount_4() { return static_cast<int32_t>(offsetof(Pump_t2499208, ___pumpAmount_4)); }
	inline float get_pumpAmount_4() const { return ___pumpAmount_4; }
	inline float* get_address_of_pumpAmount_4() { return &___pumpAmount_4; }
	inline void set_pumpAmount_4(float value)
	{
		___pumpAmount_4 = value;
	}

	inline static int32_t get_offset_of_dropAmount_5() { return static_cast<int32_t>(offsetof(Pump_t2499208, ___dropAmount_5)); }
	inline float get_dropAmount_5() const { return ___dropAmount_5; }
	inline float* get_address_of_dropAmount_5() { return &___dropAmount_5; }
	inline void set_dropAmount_5(float value)
	{
		___dropAmount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
