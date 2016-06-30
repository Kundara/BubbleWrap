#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3317474837;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vibrator
struct  Vibrator_t1170382393  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector2 Vibrator::startPos
	Vector2_t3525329788  ___startPos_2;
	// UnityEngine.Vector3 Vibrator::vel
	Vector3_t3525329789  ___vel_3;
	// System.Single Vibrator::smoothTime
	float ___smoothTime_4;
	// System.Single Vibrator::powerMultiplier
	float ___powerMultiplier_5;
	// UnityEngine.RectTransform Vibrator::ourRect
	RectTransform_t3317474837 * ___ourRect_6;

public:
	inline static int32_t get_offset_of_startPos_2() { return static_cast<int32_t>(offsetof(Vibrator_t1170382393, ___startPos_2)); }
	inline Vector2_t3525329788  get_startPos_2() const { return ___startPos_2; }
	inline Vector2_t3525329788 * get_address_of_startPos_2() { return &___startPos_2; }
	inline void set_startPos_2(Vector2_t3525329788  value)
	{
		___startPos_2 = value;
	}

	inline static int32_t get_offset_of_vel_3() { return static_cast<int32_t>(offsetof(Vibrator_t1170382393, ___vel_3)); }
	inline Vector3_t3525329789  get_vel_3() const { return ___vel_3; }
	inline Vector3_t3525329789 * get_address_of_vel_3() { return &___vel_3; }
	inline void set_vel_3(Vector3_t3525329789  value)
	{
		___vel_3 = value;
	}

	inline static int32_t get_offset_of_smoothTime_4() { return static_cast<int32_t>(offsetof(Vibrator_t1170382393, ___smoothTime_4)); }
	inline float get_smoothTime_4() const { return ___smoothTime_4; }
	inline float* get_address_of_smoothTime_4() { return &___smoothTime_4; }
	inline void set_smoothTime_4(float value)
	{
		___smoothTime_4 = value;
	}

	inline static int32_t get_offset_of_powerMultiplier_5() { return static_cast<int32_t>(offsetof(Vibrator_t1170382393, ___powerMultiplier_5)); }
	inline float get_powerMultiplier_5() const { return ___powerMultiplier_5; }
	inline float* get_address_of_powerMultiplier_5() { return &___powerMultiplier_5; }
	inline void set_powerMultiplier_5(float value)
	{
		___powerMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_ourRect_6() { return static_cast<int32_t>(offsetof(Vibrator_t1170382393, ___ourRect_6)); }
	inline RectTransform_t3317474837 * get_ourRect_6() const { return ___ourRect_6; }
	inline RectTransform_t3317474837 ** get_address_of_ourRect_6() { return &___ourRect_6; }
	inline void set_ourRect_6(RectTransform_t3317474837 * value)
	{
		___ourRect_6 = value;
		Il2CppCodeGenWriteBarrier(&___ourRect_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
