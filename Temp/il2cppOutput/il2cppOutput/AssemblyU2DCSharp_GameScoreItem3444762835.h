#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameScoreItem
struct  GameScoreItem_t3444762835  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text GameScoreItem::txtName
	Text_t3286458198 * ___txtName_2;
	// UnityEngine.UI.Text GameScoreItem::txtScore
	Text_t3286458198 * ___txtScore_3;

public:
	inline static int32_t get_offset_of_txtName_2() { return static_cast<int32_t>(offsetof(GameScoreItem_t3444762835, ___txtName_2)); }
	inline Text_t3286458198 * get_txtName_2() const { return ___txtName_2; }
	inline Text_t3286458198 ** get_address_of_txtName_2() { return &___txtName_2; }
	inline void set_txtName_2(Text_t3286458198 * value)
	{
		___txtName_2 = value;
		Il2CppCodeGenWriteBarrier(&___txtName_2, value);
	}

	inline static int32_t get_offset_of_txtScore_3() { return static_cast<int32_t>(offsetof(GameScoreItem_t3444762835, ___txtScore_3)); }
	inline Text_t3286458198 * get_txtScore_3() const { return ___txtScore_3; }
	inline Text_t3286458198 ** get_address_of_txtScore_3() { return &___txtScore_3; }
	inline void set_txtScore_3(Text_t3286458198 * value)
	{
		___txtScore_3 = value;
		Il2CppCodeGenWriteBarrier(&___txtScore_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
