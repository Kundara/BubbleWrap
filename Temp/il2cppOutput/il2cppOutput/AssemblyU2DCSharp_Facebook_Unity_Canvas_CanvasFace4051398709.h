#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.Unity.Canvas.CanvasFacebook
struct CanvasFacebook_t943264545;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Facebook_Unity_MethodCall_1_gen2121494416.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Canvas.CanvasFacebook/CanvasUIMethodCall`1<System.Object>
struct  CanvasUIMethodCall_1_t4051398709  : public MethodCall_1_t2121494416
{
public:
	// Facebook.Unity.Canvas.CanvasFacebook Facebook.Unity.Canvas.CanvasFacebook/CanvasUIMethodCall`1::canvasImpl
	CanvasFacebook_t943264545 * ___canvasImpl_4;
	// System.String Facebook.Unity.Canvas.CanvasFacebook/CanvasUIMethodCall`1::callbackMethod
	String_t* ___callbackMethod_5;

public:
	inline static int32_t get_offset_of_canvasImpl_4() { return static_cast<int32_t>(offsetof(CanvasUIMethodCall_1_t4051398709, ___canvasImpl_4)); }
	inline CanvasFacebook_t943264545 * get_canvasImpl_4() const { return ___canvasImpl_4; }
	inline CanvasFacebook_t943264545 ** get_address_of_canvasImpl_4() { return &___canvasImpl_4; }
	inline void set_canvasImpl_4(CanvasFacebook_t943264545 * value)
	{
		___canvasImpl_4 = value;
		Il2CppCodeGenWriteBarrier(&___canvasImpl_4, value);
	}

	inline static int32_t get_offset_of_callbackMethod_5() { return static_cast<int32_t>(offsetof(CanvasUIMethodCall_1_t4051398709, ___callbackMethod_5)); }
	inline String_t* get_callbackMethod_5() const { return ___callbackMethod_5; }
	inline String_t** get_address_of_callbackMethod_5() { return &___callbackMethod_5; }
	inline void set_callbackMethod_5(String_t* value)
	{
		___callbackMethod_5 = value;
		Il2CppCodeGenWriteBarrier(&___callbackMethod_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
