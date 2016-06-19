#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GS.FBManager
struct FBManager_t1944751413;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_GS_CoinPackage365455929.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GS.PaymentFB/<BuyCoins>c__AnonStorey9
struct  U3CBuyCoinsU3Ec__AnonStorey9_t680619736  : public Il2CppObject
{
public:
	// GS.FBManager GS.PaymentFB/<BuyCoins>c__AnonStorey9::fbM
	FBManager_t1944751413 * ___fbM_0;
	// GS.CoinPackage GS.PaymentFB/<BuyCoins>c__AnonStorey9::cPackage
	int32_t ___cPackage_1;

public:
	inline static int32_t get_offset_of_fbM_0() { return static_cast<int32_t>(offsetof(U3CBuyCoinsU3Ec__AnonStorey9_t680619736, ___fbM_0)); }
	inline FBManager_t1944751413 * get_fbM_0() const { return ___fbM_0; }
	inline FBManager_t1944751413 ** get_address_of_fbM_0() { return &___fbM_0; }
	inline void set_fbM_0(FBManager_t1944751413 * value)
	{
		___fbM_0 = value;
		Il2CppCodeGenWriteBarrier(&___fbM_0, value);
	}

	inline static int32_t get_offset_of_cPackage_1() { return static_cast<int32_t>(offsetof(U3CBuyCoinsU3Ec__AnonStorey9_t680619736, ___cPackage_1)); }
	inline int32_t get_cPackage_1() const { return ___cPackage_1; }
	inline int32_t* get_address_of_cPackage_1() { return &___cPackage_1; }
	inline void set_cPackage_1(int32_t value)
	{
		___cPackage_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
