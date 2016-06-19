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
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "AssemblyU2DCSharp_Facebook_Unity_Example_MenuBase3407912323.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.GraphRequest
struct  GraphRequest_t2704153108  : public MenuBase_t3407912323
{
public:
	// System.String Facebook.Unity.Example.GraphRequest::apiQuery
	String_t* ___apiQuery_14;
	// UnityEngine.Texture2D Facebook.Unity.Example.GraphRequest::profilePic
	Texture2D_t2509538522 * ___profilePic_15;

public:
	inline static int32_t get_offset_of_apiQuery_14() { return static_cast<int32_t>(offsetof(GraphRequest_t2704153108, ___apiQuery_14)); }
	inline String_t* get_apiQuery_14() const { return ___apiQuery_14; }
	inline String_t** get_address_of_apiQuery_14() { return &___apiQuery_14; }
	inline void set_apiQuery_14(String_t* value)
	{
		___apiQuery_14 = value;
		Il2CppCodeGenWriteBarrier(&___apiQuery_14, value);
	}

	inline static int32_t get_offset_of_profilePic_15() { return static_cast<int32_t>(offsetof(GraphRequest_t2704153108, ___profilePic_15)); }
	inline Texture2D_t2509538522 * get_profilePic_15() const { return ___profilePic_15; }
	inline Texture2D_t2509538522 ** get_address_of_profilePic_15() { return &___profilePic_15; }
	inline void set_profilePic_15(Texture2D_t2509538522 * value)
	{
		___profilePic_15 = value;
		Il2CppCodeGenWriteBarrier(&___profilePic_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
