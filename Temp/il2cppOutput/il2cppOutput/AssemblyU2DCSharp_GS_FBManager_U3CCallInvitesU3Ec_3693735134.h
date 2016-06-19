#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// GS.FBManager
struct FBManager_t1944751413;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GS.FBManager/<CallInvites>c__AnonStorey7
struct  U3CCallInvitesU3Ec__AnonStorey7_t3693735134  : public Il2CppObject
{
public:
	// System.Int32 GS.FBManager/<CallInvites>c__AnonStorey7::dialogCount
	int32_t ___dialogCount_0;
	// System.Collections.Generic.List`1<System.String> GS.FBManager/<CallInvites>c__AnonStorey7::lstToSend
	List_1_t1765447871 * ___lstToSend_1;
	// GS.FBManager GS.FBManager/<CallInvites>c__AnonStorey7::<>f__this
	FBManager_t1944751413 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_dialogCount_0() { return static_cast<int32_t>(offsetof(U3CCallInvitesU3Ec__AnonStorey7_t3693735134, ___dialogCount_0)); }
	inline int32_t get_dialogCount_0() const { return ___dialogCount_0; }
	inline int32_t* get_address_of_dialogCount_0() { return &___dialogCount_0; }
	inline void set_dialogCount_0(int32_t value)
	{
		___dialogCount_0 = value;
	}

	inline static int32_t get_offset_of_lstToSend_1() { return static_cast<int32_t>(offsetof(U3CCallInvitesU3Ec__AnonStorey7_t3693735134, ___lstToSend_1)); }
	inline List_1_t1765447871 * get_lstToSend_1() const { return ___lstToSend_1; }
	inline List_1_t1765447871 ** get_address_of_lstToSend_1() { return &___lstToSend_1; }
	inline void set_lstToSend_1(List_1_t1765447871 * value)
	{
		___lstToSend_1 = value;
		Il2CppCodeGenWriteBarrier(&___lstToSend_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CCallInvitesU3Ec__AnonStorey7_t3693735134, ___U3CU3Ef__this_2)); }
	inline FBManager_t1944751413 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline FBManager_t1944751413 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(FBManager_t1944751413 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
