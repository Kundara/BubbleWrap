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
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GS.ListItemLeaderboard
struct  ListItemLeaderboard_t51753904  : public MonoBehaviour_t3012272455
{
public:
	// System.String GS.ListItemLeaderboard::fId
	String_t* ___fId_2;
	// System.String GS.ListItemLeaderboard::picUrl
	String_t* ___picUrl_3;
	// UnityEngine.UI.Text GS.ListItemLeaderboard::txtName
	Text_t3286458198 * ___txtName_4;
	// UnityEngine.UI.Text GS.ListItemLeaderboard::txtScore
	Text_t3286458198 * ___txtScore_5;
	// UnityEngine.UI.Text GS.ListItemLeaderboard::txtRank
	Text_t3286458198 * ___txtRank_6;
	// UnityEngine.UI.Image GS.ListItemLeaderboard::imgPic
	Image_t3354615620 * ___imgPic_7;

public:
	inline static int32_t get_offset_of_fId_2() { return static_cast<int32_t>(offsetof(ListItemLeaderboard_t51753904, ___fId_2)); }
	inline String_t* get_fId_2() const { return ___fId_2; }
	inline String_t** get_address_of_fId_2() { return &___fId_2; }
	inline void set_fId_2(String_t* value)
	{
		___fId_2 = value;
		Il2CppCodeGenWriteBarrier(&___fId_2, value);
	}

	inline static int32_t get_offset_of_picUrl_3() { return static_cast<int32_t>(offsetof(ListItemLeaderboard_t51753904, ___picUrl_3)); }
	inline String_t* get_picUrl_3() const { return ___picUrl_3; }
	inline String_t** get_address_of_picUrl_3() { return &___picUrl_3; }
	inline void set_picUrl_3(String_t* value)
	{
		___picUrl_3 = value;
		Il2CppCodeGenWriteBarrier(&___picUrl_3, value);
	}

	inline static int32_t get_offset_of_txtName_4() { return static_cast<int32_t>(offsetof(ListItemLeaderboard_t51753904, ___txtName_4)); }
	inline Text_t3286458198 * get_txtName_4() const { return ___txtName_4; }
	inline Text_t3286458198 ** get_address_of_txtName_4() { return &___txtName_4; }
	inline void set_txtName_4(Text_t3286458198 * value)
	{
		___txtName_4 = value;
		Il2CppCodeGenWriteBarrier(&___txtName_4, value);
	}

	inline static int32_t get_offset_of_txtScore_5() { return static_cast<int32_t>(offsetof(ListItemLeaderboard_t51753904, ___txtScore_5)); }
	inline Text_t3286458198 * get_txtScore_5() const { return ___txtScore_5; }
	inline Text_t3286458198 ** get_address_of_txtScore_5() { return &___txtScore_5; }
	inline void set_txtScore_5(Text_t3286458198 * value)
	{
		___txtScore_5 = value;
		Il2CppCodeGenWriteBarrier(&___txtScore_5, value);
	}

	inline static int32_t get_offset_of_txtRank_6() { return static_cast<int32_t>(offsetof(ListItemLeaderboard_t51753904, ___txtRank_6)); }
	inline Text_t3286458198 * get_txtRank_6() const { return ___txtRank_6; }
	inline Text_t3286458198 ** get_address_of_txtRank_6() { return &___txtRank_6; }
	inline void set_txtRank_6(Text_t3286458198 * value)
	{
		___txtRank_6 = value;
		Il2CppCodeGenWriteBarrier(&___txtRank_6, value);
	}

	inline static int32_t get_offset_of_imgPic_7() { return static_cast<int32_t>(offsetof(ListItemLeaderboard_t51753904, ___imgPic_7)); }
	inline Image_t3354615620 * get_imgPic_7() const { return ___imgPic_7; }
	inline Image_t3354615620 ** get_address_of_imgPic_7() { return &___imgPic_7; }
	inline void set_imgPic_7(Image_t3354615620 * value)
	{
		___imgPic_7 = value;
		Il2CppCodeGenWriteBarrier(&___imgPic_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
