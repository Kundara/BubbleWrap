#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Facebook.Unity.Canvas.ICanvasJSWrapper
struct ICanvasJSWrapper_t1740207084;
// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>
struct Callback_1_t1746511022;

#include "AssemblyU2DCSharp_Facebook_Unity_FacebookBase2319813814.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Canvas.CanvasFacebook
struct  CanvasFacebook_t943264545  : public FacebookBase_t2319813814
{
public:
	// System.String Facebook.Unity.Canvas.CanvasFacebook::appId
	String_t* ___appId_12;
	// System.String Facebook.Unity.Canvas.CanvasFacebook::appLinkUrl
	String_t* ___appLinkUrl_13;
	// Facebook.Unity.Canvas.ICanvasJSWrapper Facebook.Unity.Canvas.CanvasFacebook::canvasJSWrapper
	Il2CppObject * ___canvasJSWrapper_14;
	// System.Boolean Facebook.Unity.Canvas.CanvasFacebook::<LimitEventUsage>k__BackingField
	bool ___U3CLimitEventUsageU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_appId_12() { return static_cast<int32_t>(offsetof(CanvasFacebook_t943264545, ___appId_12)); }
	inline String_t* get_appId_12() const { return ___appId_12; }
	inline String_t** get_address_of_appId_12() { return &___appId_12; }
	inline void set_appId_12(String_t* value)
	{
		___appId_12 = value;
		Il2CppCodeGenWriteBarrier(&___appId_12, value);
	}

	inline static int32_t get_offset_of_appLinkUrl_13() { return static_cast<int32_t>(offsetof(CanvasFacebook_t943264545, ___appLinkUrl_13)); }
	inline String_t* get_appLinkUrl_13() const { return ___appLinkUrl_13; }
	inline String_t** get_address_of_appLinkUrl_13() { return &___appLinkUrl_13; }
	inline void set_appLinkUrl_13(String_t* value)
	{
		___appLinkUrl_13 = value;
		Il2CppCodeGenWriteBarrier(&___appLinkUrl_13, value);
	}

	inline static int32_t get_offset_of_canvasJSWrapper_14() { return static_cast<int32_t>(offsetof(CanvasFacebook_t943264545, ___canvasJSWrapper_14)); }
	inline Il2CppObject * get_canvasJSWrapper_14() const { return ___canvasJSWrapper_14; }
	inline Il2CppObject ** get_address_of_canvasJSWrapper_14() { return &___canvasJSWrapper_14; }
	inline void set_canvasJSWrapper_14(Il2CppObject * value)
	{
		___canvasJSWrapper_14 = value;
		Il2CppCodeGenWriteBarrier(&___canvasJSWrapper_14, value);
	}

	inline static int32_t get_offset_of_U3CLimitEventUsageU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(CanvasFacebook_t943264545, ___U3CLimitEventUsageU3Ek__BackingField_15)); }
	inline bool get_U3CLimitEventUsageU3Ek__BackingField_15() const { return ___U3CLimitEventUsageU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CLimitEventUsageU3Ek__BackingField_15() { return &___U3CLimitEventUsageU3Ek__BackingField_15; }
	inline void set_U3CLimitEventUsageU3Ek__BackingField_15(bool value)
	{
		___U3CLimitEventUsageU3Ek__BackingField_15 = value;
	}
};

struct CanvasFacebook_t943264545_StaticFields
{
public:
	// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer> Facebook.Unity.Canvas.CanvasFacebook::<>f__am$cache4
	Callback_1_t1746511022 * ___U3CU3Ef__amU24cache4_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_16() { return static_cast<int32_t>(offsetof(CanvasFacebook_t943264545_StaticFields, ___U3CU3Ef__amU24cache4_16)); }
	inline Callback_1_t1746511022 * get_U3CU3Ef__amU24cache4_16() const { return ___U3CU3Ef__amU24cache4_16; }
	inline Callback_1_t1746511022 ** get_address_of_U3CU3Ef__amU24cache4_16() { return &___U3CU3Ef__amU24cache4_16; }
	inline void set_U3CU3Ef__amU24cache4_16(Callback_1_t1746511022 * value)
	{
		___U3CU3Ef__amU24cache4_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
