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
// System.Collections.Generic.Dictionary`2<GS.CoinPackage,System.String>
struct Dictionary_2_t1483599767;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GS.PaymentFB
struct  PaymentFB_t4268681990  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct PaymentFB_t4268681990_StaticFields
{
public:
	// System.String GS.PaymentFB::PaymentObjectURL
	String_t* ___PaymentObjectURL_2;
	// System.Collections.Generic.Dictionary`2<GS.CoinPackage,System.String> GS.PaymentFB::PaymentObjects
	Dictionary_2_t1483599767 * ___PaymentObjects_3;

public:
	inline static int32_t get_offset_of_PaymentObjectURL_2() { return static_cast<int32_t>(offsetof(PaymentFB_t4268681990_StaticFields, ___PaymentObjectURL_2)); }
	inline String_t* get_PaymentObjectURL_2() const { return ___PaymentObjectURL_2; }
	inline String_t** get_address_of_PaymentObjectURL_2() { return &___PaymentObjectURL_2; }
	inline void set_PaymentObjectURL_2(String_t* value)
	{
		___PaymentObjectURL_2 = value;
		Il2CppCodeGenWriteBarrier(&___PaymentObjectURL_2, value);
	}

	inline static int32_t get_offset_of_PaymentObjects_3() { return static_cast<int32_t>(offsetof(PaymentFB_t4268681990_StaticFields, ___PaymentObjects_3)); }
	inline Dictionary_2_t1483599767 * get_PaymentObjects_3() const { return ___PaymentObjects_3; }
	inline Dictionary_2_t1483599767 ** get_address_of_PaymentObjects_3() { return &___PaymentObjects_3; }
	inline void set_PaymentObjects_3(Dictionary_2_t1483599767 * value)
	{
		___PaymentObjects_3 = value;
		Il2CppCodeGenWriteBarrier(&___PaymentObjects_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
