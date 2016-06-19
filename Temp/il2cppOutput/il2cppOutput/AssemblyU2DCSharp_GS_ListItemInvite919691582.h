#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Toggle
struct Toggle_t1499417981;
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

// GS.ListItemInvite
struct  ListItemInvite_t919691582  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Toggle GS.ListItemInvite::tglBtn
	Toggle_t1499417981 * ___tglBtn_2;
	// System.String GS.ListItemInvite::fId
	String_t* ___fId_3;
	// System.String GS.ListItemInvite::picUrl
	String_t* ___picUrl_4;
	// UnityEngine.UI.Text GS.ListItemInvite::txtName
	Text_t3286458198 * ___txtName_5;
	// UnityEngine.UI.Image GS.ListItemInvite::imgPic
	Image_t3354615620 * ___imgPic_6;

public:
	inline static int32_t get_offset_of_tglBtn_2() { return static_cast<int32_t>(offsetof(ListItemInvite_t919691582, ___tglBtn_2)); }
	inline Toggle_t1499417981 * get_tglBtn_2() const { return ___tglBtn_2; }
	inline Toggle_t1499417981 ** get_address_of_tglBtn_2() { return &___tglBtn_2; }
	inline void set_tglBtn_2(Toggle_t1499417981 * value)
	{
		___tglBtn_2 = value;
		Il2CppCodeGenWriteBarrier(&___tglBtn_2, value);
	}

	inline static int32_t get_offset_of_fId_3() { return static_cast<int32_t>(offsetof(ListItemInvite_t919691582, ___fId_3)); }
	inline String_t* get_fId_3() const { return ___fId_3; }
	inline String_t** get_address_of_fId_3() { return &___fId_3; }
	inline void set_fId_3(String_t* value)
	{
		___fId_3 = value;
		Il2CppCodeGenWriteBarrier(&___fId_3, value);
	}

	inline static int32_t get_offset_of_picUrl_4() { return static_cast<int32_t>(offsetof(ListItemInvite_t919691582, ___picUrl_4)); }
	inline String_t* get_picUrl_4() const { return ___picUrl_4; }
	inline String_t** get_address_of_picUrl_4() { return &___picUrl_4; }
	inline void set_picUrl_4(String_t* value)
	{
		___picUrl_4 = value;
		Il2CppCodeGenWriteBarrier(&___picUrl_4, value);
	}

	inline static int32_t get_offset_of_txtName_5() { return static_cast<int32_t>(offsetof(ListItemInvite_t919691582, ___txtName_5)); }
	inline Text_t3286458198 * get_txtName_5() const { return ___txtName_5; }
	inline Text_t3286458198 ** get_address_of_txtName_5() { return &___txtName_5; }
	inline void set_txtName_5(Text_t3286458198 * value)
	{
		___txtName_5 = value;
		Il2CppCodeGenWriteBarrier(&___txtName_5, value);
	}

	inline static int32_t get_offset_of_imgPic_6() { return static_cast<int32_t>(offsetof(ListItemInvite_t919691582, ___imgPic_6)); }
	inline Image_t3354615620 * get_imgPic_6() const { return ___imgPic_6; }
	inline Image_t3354615620 ** get_address_of_imgPic_6() { return &___imgPic_6; }
	inline void set_imgPic_6(Image_t3354615620 * value)
	{
		___imgPic_6 = value;
		Il2CppCodeGenWriteBarrier(&___imgPic_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
