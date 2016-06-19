#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.Unity.Mobile.Android.AndroidFacebook
struct AndroidFacebook_t1604313921;

#include "AssemblyU2DCSharp_Facebook_Unity_MethodCall_1_gen2316813377.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Mobile.Android.AndroidFacebook/JavaMethodCall`1<Facebook.Unity.IResult>
struct  JavaMethodCall_1_t3988932780  : public MethodCall_1_t2316813377
{
public:
	// Facebook.Unity.Mobile.Android.AndroidFacebook Facebook.Unity.Mobile.Android.AndroidFacebook/JavaMethodCall`1::androidImpl
	AndroidFacebook_t1604313921 * ___androidImpl_4;

public:
	inline static int32_t get_offset_of_androidImpl_4() { return static_cast<int32_t>(offsetof(JavaMethodCall_1_t3988932780, ___androidImpl_4)); }
	inline AndroidFacebook_t1604313921 * get_androidImpl_4() const { return ___androidImpl_4; }
	inline AndroidFacebook_t1604313921 ** get_address_of_androidImpl_4() { return &___androidImpl_4; }
	inline void set_androidImpl_4(AndroidFacebook_t1604313921 * value)
	{
		___androidImpl_4 = value;
		Il2CppCodeGenWriteBarrier(&___androidImpl_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
