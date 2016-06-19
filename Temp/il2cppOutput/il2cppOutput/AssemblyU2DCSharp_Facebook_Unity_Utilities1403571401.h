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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// System.Func`2<System.Object,System.String>
struct Func_2_t2267165834;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Utilities
struct  Utilities_t1403571401  : public Il2CppObject
{
public:

public:
};

struct Utilities_t1403571401_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.Unity.Utilities::commandLineArguments
	Dictionary_2_t2606186806 * ___commandLineArguments_1;
	// System.Func`2<System.Object,System.String> Facebook.Unity.Utilities::<>f__am$cache1
	Func_2_t2267165834 * ___U3CU3Ef__amU24cache1_2;

public:
	inline static int32_t get_offset_of_commandLineArguments_1() { return static_cast<int32_t>(offsetof(Utilities_t1403571401_StaticFields, ___commandLineArguments_1)); }
	inline Dictionary_2_t2606186806 * get_commandLineArguments_1() const { return ___commandLineArguments_1; }
	inline Dictionary_2_t2606186806 ** get_address_of_commandLineArguments_1() { return &___commandLineArguments_1; }
	inline void set_commandLineArguments_1(Dictionary_2_t2606186806 * value)
	{
		___commandLineArguments_1 = value;
		Il2CppCodeGenWriteBarrier(&___commandLineArguments_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_2() { return static_cast<int32_t>(offsetof(Utilities_t1403571401_StaticFields, ___U3CU3Ef__amU24cache1_2)); }
	inline Func_2_t2267165834 * get_U3CU3Ef__amU24cache1_2() const { return ___U3CU3Ef__amU24cache1_2; }
	inline Func_2_t2267165834 ** get_address_of_U3CU3Ef__amU24cache1_2() { return &___U3CU3Ef__amU24cache1_2; }
	inline void set_U3CU3Ef__amU24cache1_2(Func_2_t2267165834 * value)
	{
		___U3CU3Ef__amU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
