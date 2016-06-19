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
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;

#include "AssemblyU2DCSharp_Facebook_Unity_ResultBase3940793997.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.AppRequestResult
struct  AppRequestResult_t2113826026  : public ResultBase_t3940793997
{
public:
	// System.String Facebook.Unity.AppRequestResult::<RequestID>k__BackingField
	String_t* ___U3CRequestIDU3Ek__BackingField_11;
	// System.Collections.Generic.IEnumerable`1<System.String> Facebook.Unity.AppRequestResult::<To>k__BackingField
	Il2CppObject* ___U3CToU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CRequestIDU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(AppRequestResult_t2113826026, ___U3CRequestIDU3Ek__BackingField_11)); }
	inline String_t* get_U3CRequestIDU3Ek__BackingField_11() const { return ___U3CRequestIDU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CRequestIDU3Ek__BackingField_11() { return &___U3CRequestIDU3Ek__BackingField_11; }
	inline void set_U3CRequestIDU3Ek__BackingField_11(String_t* value)
	{
		___U3CRequestIDU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRequestIDU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CToU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(AppRequestResult_t2113826026, ___U3CToU3Ek__BackingField_12)); }
	inline Il2CppObject* get_U3CToU3Ek__BackingField_12() const { return ___U3CToU3Ek__BackingField_12; }
	inline Il2CppObject** get_address_of_U3CToU3Ek__BackingField_12() { return &___U3CToU3Ek__BackingField_12; }
	inline void set_U3CToU3Ek__BackingField_12(Il2CppObject* value)
	{
		___U3CToU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CToU3Ek__BackingField_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
