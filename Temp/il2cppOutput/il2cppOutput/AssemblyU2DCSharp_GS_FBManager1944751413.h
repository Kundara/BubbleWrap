#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t503173063;
// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Image
struct Image_t3354615620;
// System.Collections.Generic.List`1<GS.ListItemInvite>
struct List_1_t1716650551;
// System.Collections.Generic.List`1<GS.ListItemLeaderboard>
struct List_1_t848712873;
// System.Collections.Generic.List`1<GameScoreItem>
struct List_1_t4241721804;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// GS.ListItemInvite
struct ListItemInvite_t919691582;
// GS.ListItemLeaderboard
struct ListItemLeaderboard_t51753904;
// GameScoreItem
struct GameScoreItem_t3444762835;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.String
struct String_t;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.UI.InputField
struct InputField_t2345609593;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_GS_ToggleState3362500449.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GS.FBManager
struct  FBManager_t1944751413  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Sprite[] GS.FBManager::stateSprites
	SpriteU5BU5D_t503173063* ___stateSprites_2;
	// GS.ToggleState GS.FBManager::tglStateSlctAll
	int32_t ___tglStateSlctAll_3;
	// UnityEngine.UI.Button GS.FBManager::btnSlctAll
	Button_t990034267 * ___btnSlctAll_4;
	// UnityEngine.UI.Button GS.FBManager::btnInviteDialog
	Button_t990034267 * ___btnInviteDialog_5;
	// UnityEngine.UI.Button GS.FBManager::btnPostScoreDialog
	Button_t990034267 * ___btnPostScoreDialog_6;
	// UnityEngine.UI.Button GS.FBManager::btnBuyCoinDialog
	Button_t990034267 * ___btnBuyCoinDialog_7;
	// UnityEngine.UI.Button GS.FBManager::btnShareGraphDialog
	Button_t990034267 * ___btnShareGraphDialog_8;
	// UnityEngine.UI.Text GS.FBManager::playerName
	Text_t3286458198 * ___playerName_9;
	// UnityEngine.UI.Text GS.FBManager::playerScore
	Text_t3286458198 * ___playerScore_10;
	// UnityEngine.UI.Text GS.FBManager::countFriends
	Text_t3286458198 * ___countFriends_11;
	// UnityEngine.UI.Text GS.FBManager::countInstalledFriends
	Text_t3286458198 * ___countInstalledFriends_12;
	// UnityEngine.UI.Text GS.FBManager::countCoins
	Text_t3286458198 * ___countCoins_13;
	// UnityEngine.UI.Image GS.FBManager::playerDp
	Image_t3354615620 * ___playerDp_14;
	// System.Collections.Generic.List`1<GS.ListItemInvite> GS.FBManager::listInvites
	List_1_t1716650551 * ___listInvites_15;
	// System.Collections.Generic.List`1<GS.ListItemLeaderboard> GS.FBManager::listLeaderboard
	List_1_t848712873 * ___listLeaderboard_16;
	// System.Collections.Generic.List`1<GameScoreItem> GS.FBManager::listGameScore
	List_1_t4241721804 * ___listGameScore_17;
	// System.Collections.Generic.List`1<GameScoreItem> GS.FBManager::listUserFriends
	List_1_t4241721804 * ___listUserFriends_18;
	// UnityEngine.GameObject GS.FBManager::inviteParent
	GameObject_t4012695102 * ___inviteParent_19;
	// UnityEngine.GameObject GS.FBManager::leaderParent
	GameObject_t4012695102 * ___leaderParent_20;
	// UnityEngine.GameObject GS.FBManager::allGamesScoresParent
	GameObject_t4012695102 * ___allGamesScoresParent_21;
	// UnityEngine.GameObject GS.FBManager::userFriendsParent
	GameObject_t4012695102 * ___userFriendsParent_22;
	// GS.ListItemInvite GS.FBManager::itemInvitePref
	ListItemInvite_t919691582 * ___itemInvitePref_23;
	// GS.ListItemLeaderboard GS.FBManager::itemLeaderPref
	ListItemLeaderboard_t51753904 * ___itemLeaderPref_24;
	// GameScoreItem GS.FBManager::gameScorePref
	GameScoreItem_t3444762835 * ___gameScorePref_25;
	// GameScoreItem GS.FBManager::userFriendsPrefab
	GameScoreItem_t3444762835 * ___userFriendsPrefab_26;
	// System.Collections.Generic.List`1<System.String> GS.FBManager::readPermission
	List_1_t1765447871 * ___readPermission_27;
	// System.Collections.Generic.List`1<System.String> GS.FBManager::publishPermission
	List_1_t1765447871 * ___publishPermission_28;
	// System.String GS.FBManager::getLeaderboardString
	String_t* ___getLeaderboardString_29;
	// System.String GS.FBManager::getInvitableFriendsString
	String_t* ___getInvitableFriendsString_30;
	// System.String GS.FBManager::getUserPicString
	String_t* ___getUserPicString_31;
	// System.String GS.FBManager::getNameString
	String_t* ___getNameString_32;
	// System.String GS.FBManager::getAllScoresString
	String_t* ___getAllScoresString_33;
	// System.String GS.FBManager::getFriendsInfoString
	String_t* ___getFriendsInfoString_34;
	// UnityEngine.UI.Button GS.FBManager::btnInit
	Button_t990034267 * ___btnInit_36;
	// UnityEngine.UI.Button GS.FBManager::btnLogin
	Button_t990034267 * ___btnLogin_37;
	// UnityEngine.UI.Button GS.FBManager::btnLogout
	Button_t990034267 * ___btnLogout_38;
	// UnityEngine.UI.Button GS.FBManager::btnNativeInvite
	Button_t990034267 * ___btnNativeInvite_39;
	// UnityEngine.UI.Button GS.FBManager::btnCustomInvite
	Button_t990034267 * ___btnCustomInvite_40;
	// UnityEngine.UI.Button GS.FBManager::btnLeaderboard
	Button_t990034267 * ___btnLeaderboard_41;
	// UnityEngine.UI.Button GS.FBManager::btnGetName
	Button_t990034267 * ___btnGetName_42;
	// UnityEngine.UI.Button GS.FBManager::btnSubmitScore
	Button_t990034267 * ___btnSubmitScore_43;
	// UnityEngine.UI.Button GS.FBManager::btnName
	Button_t990034267 * ___btnName_44;
	// UnityEngine.UI.Button GS.FBManager::btnLoadDpFromServer
	Button_t990034267 * ___btnLoadDpFromServer_45;
	// UnityEngine.UI.Button GS.FBManager::btnSaveDp
	Button_t990034267 * ___btnSaveDp_46;
	// UnityEngine.UI.Button GS.FBManager::btnLoadDpFromLocal
	Button_t990034267 * ___btnLoadDpFromLocal_47;
	// UnityEngine.UI.Button GS.FBManager::btnGetScore
	Button_t990034267 * ___btnGetScore_48;
	// UnityEngine.UI.Button GS.FBManager::btnGetAllScores
	Button_t990034267 * ___btnGetAllScores_49;
	// UnityEngine.UI.Button GS.FBManager::btnShare
	Button_t990034267 * ___btnShare_50;
	// UnityEngine.UI.Button GS.FBManager::btnTakeScreenshotNShare
	Button_t990034267 * ___btnTakeScreenshotNShare_51;
	// UnityEngine.UI.Button GS.FBManager::btnGetFriends
	Button_t990034267 * ___btnGetFriends_52;
	// UnityEngine.UI.Button GS.FBManager::btnGetDeepLink
	Button_t990034267 * ___btnGetDeepLink_53;
	// UnityEngine.UI.Button GS.FBManager::btnUnlockAchievement
	Button_t990034267 * ___btnUnlockAchievement_54;
	// UnityEngine.UI.Button GS.FBManager::btnCanvasPay
	Button_t990034267 * ___btnCanvasPay_55;
	// UnityEngine.UI.Button GS.FBManager::btnShareViaDialog
	Button_t990034267 * ___btnShareViaDialog_56;
	// UnityEngine.UI.Button GS.FBManager::btnShareViaGraph
	Button_t990034267 * ___btnShareViaGraph_57;
	// UnityEngine.UI.Text GS.FBManager::logTxt
	Text_t3286458198 * ___logTxt_58;
	// UnityEngine.GameObject GS.FBManager::playerInfo
	GameObject_t4012695102 * ___playerInfo_59;
	// UnityEngine.GameObject GS.FBManager::leaderboardStripe
	GameObject_t4012695102 * ___leaderboardStripe_60;
	// UnityEngine.GameObject[] GS.FBManager::dialogs
	GameObjectU5BU5D_t3499186955* ___dialogs_61;
	// UnityEngine.GameObject[] GS.FBManager::loaders
	GameObjectU5BU5D_t3499186955* ___loaders_62;
	// UnityEngine.UI.InputField GS.FBManager::inpInvSearcher
	InputField_t2345609593 * ___inpInvSearcher_63;
	// UnityEngine.UI.InputField GS.FBManager::inpLeadSearcher
	InputField_t2345609593 * ___inpLeadSearcher_64;
	// UnityEngine.UI.InputField GS.FBManager::inpSubmitScore
	InputField_t2345609593 * ___inpSubmitScore_65;
	// UnityEngine.UI.InputField GS.FBManager::inpPostGraph
	InputField_t2345609593 * ___inpPostGraph_66;
	// System.Single GS.FBManager::updateTime
	float ___updateTime_67;
	// System.Single GS.FBManager::lastUpdate
	float ___lastUpdate_68;
	// System.Int32 GS.FBManager::lastScore
	int32_t ___lastScore_69;
	// System.Boolean GS.FBManager::isLogged
	bool ___isLogged_70;
	// System.String GS.FBManager::FILE_NAME
	String_t* ___FILE_NAME_71;

public:
	inline static int32_t get_offset_of_stateSprites_2() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___stateSprites_2)); }
	inline SpriteU5BU5D_t503173063* get_stateSprites_2() const { return ___stateSprites_2; }
	inline SpriteU5BU5D_t503173063** get_address_of_stateSprites_2() { return &___stateSprites_2; }
	inline void set_stateSprites_2(SpriteU5BU5D_t503173063* value)
	{
		___stateSprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___stateSprites_2, value);
	}

	inline static int32_t get_offset_of_tglStateSlctAll_3() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___tglStateSlctAll_3)); }
	inline int32_t get_tglStateSlctAll_3() const { return ___tglStateSlctAll_3; }
	inline int32_t* get_address_of_tglStateSlctAll_3() { return &___tglStateSlctAll_3; }
	inline void set_tglStateSlctAll_3(int32_t value)
	{
		___tglStateSlctAll_3 = value;
	}

	inline static int32_t get_offset_of_btnSlctAll_4() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnSlctAll_4)); }
	inline Button_t990034267 * get_btnSlctAll_4() const { return ___btnSlctAll_4; }
	inline Button_t990034267 ** get_address_of_btnSlctAll_4() { return &___btnSlctAll_4; }
	inline void set_btnSlctAll_4(Button_t990034267 * value)
	{
		___btnSlctAll_4 = value;
		Il2CppCodeGenWriteBarrier(&___btnSlctAll_4, value);
	}

	inline static int32_t get_offset_of_btnInviteDialog_5() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnInviteDialog_5)); }
	inline Button_t990034267 * get_btnInviteDialog_5() const { return ___btnInviteDialog_5; }
	inline Button_t990034267 ** get_address_of_btnInviteDialog_5() { return &___btnInviteDialog_5; }
	inline void set_btnInviteDialog_5(Button_t990034267 * value)
	{
		___btnInviteDialog_5 = value;
		Il2CppCodeGenWriteBarrier(&___btnInviteDialog_5, value);
	}

	inline static int32_t get_offset_of_btnPostScoreDialog_6() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnPostScoreDialog_6)); }
	inline Button_t990034267 * get_btnPostScoreDialog_6() const { return ___btnPostScoreDialog_6; }
	inline Button_t990034267 ** get_address_of_btnPostScoreDialog_6() { return &___btnPostScoreDialog_6; }
	inline void set_btnPostScoreDialog_6(Button_t990034267 * value)
	{
		___btnPostScoreDialog_6 = value;
		Il2CppCodeGenWriteBarrier(&___btnPostScoreDialog_6, value);
	}

	inline static int32_t get_offset_of_btnBuyCoinDialog_7() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnBuyCoinDialog_7)); }
	inline Button_t990034267 * get_btnBuyCoinDialog_7() const { return ___btnBuyCoinDialog_7; }
	inline Button_t990034267 ** get_address_of_btnBuyCoinDialog_7() { return &___btnBuyCoinDialog_7; }
	inline void set_btnBuyCoinDialog_7(Button_t990034267 * value)
	{
		___btnBuyCoinDialog_7 = value;
		Il2CppCodeGenWriteBarrier(&___btnBuyCoinDialog_7, value);
	}

	inline static int32_t get_offset_of_btnShareGraphDialog_8() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnShareGraphDialog_8)); }
	inline Button_t990034267 * get_btnShareGraphDialog_8() const { return ___btnShareGraphDialog_8; }
	inline Button_t990034267 ** get_address_of_btnShareGraphDialog_8() { return &___btnShareGraphDialog_8; }
	inline void set_btnShareGraphDialog_8(Button_t990034267 * value)
	{
		___btnShareGraphDialog_8 = value;
		Il2CppCodeGenWriteBarrier(&___btnShareGraphDialog_8, value);
	}

	inline static int32_t get_offset_of_playerName_9() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___playerName_9)); }
	inline Text_t3286458198 * get_playerName_9() const { return ___playerName_9; }
	inline Text_t3286458198 ** get_address_of_playerName_9() { return &___playerName_9; }
	inline void set_playerName_9(Text_t3286458198 * value)
	{
		___playerName_9 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_9, value);
	}

	inline static int32_t get_offset_of_playerScore_10() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___playerScore_10)); }
	inline Text_t3286458198 * get_playerScore_10() const { return ___playerScore_10; }
	inline Text_t3286458198 ** get_address_of_playerScore_10() { return &___playerScore_10; }
	inline void set_playerScore_10(Text_t3286458198 * value)
	{
		___playerScore_10 = value;
		Il2CppCodeGenWriteBarrier(&___playerScore_10, value);
	}

	inline static int32_t get_offset_of_countFriends_11() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___countFriends_11)); }
	inline Text_t3286458198 * get_countFriends_11() const { return ___countFriends_11; }
	inline Text_t3286458198 ** get_address_of_countFriends_11() { return &___countFriends_11; }
	inline void set_countFriends_11(Text_t3286458198 * value)
	{
		___countFriends_11 = value;
		Il2CppCodeGenWriteBarrier(&___countFriends_11, value);
	}

	inline static int32_t get_offset_of_countInstalledFriends_12() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___countInstalledFriends_12)); }
	inline Text_t3286458198 * get_countInstalledFriends_12() const { return ___countInstalledFriends_12; }
	inline Text_t3286458198 ** get_address_of_countInstalledFriends_12() { return &___countInstalledFriends_12; }
	inline void set_countInstalledFriends_12(Text_t3286458198 * value)
	{
		___countInstalledFriends_12 = value;
		Il2CppCodeGenWriteBarrier(&___countInstalledFriends_12, value);
	}

	inline static int32_t get_offset_of_countCoins_13() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___countCoins_13)); }
	inline Text_t3286458198 * get_countCoins_13() const { return ___countCoins_13; }
	inline Text_t3286458198 ** get_address_of_countCoins_13() { return &___countCoins_13; }
	inline void set_countCoins_13(Text_t3286458198 * value)
	{
		___countCoins_13 = value;
		Il2CppCodeGenWriteBarrier(&___countCoins_13, value);
	}

	inline static int32_t get_offset_of_playerDp_14() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___playerDp_14)); }
	inline Image_t3354615620 * get_playerDp_14() const { return ___playerDp_14; }
	inline Image_t3354615620 ** get_address_of_playerDp_14() { return &___playerDp_14; }
	inline void set_playerDp_14(Image_t3354615620 * value)
	{
		___playerDp_14 = value;
		Il2CppCodeGenWriteBarrier(&___playerDp_14, value);
	}

	inline static int32_t get_offset_of_listInvites_15() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___listInvites_15)); }
	inline List_1_t1716650551 * get_listInvites_15() const { return ___listInvites_15; }
	inline List_1_t1716650551 ** get_address_of_listInvites_15() { return &___listInvites_15; }
	inline void set_listInvites_15(List_1_t1716650551 * value)
	{
		___listInvites_15 = value;
		Il2CppCodeGenWriteBarrier(&___listInvites_15, value);
	}

	inline static int32_t get_offset_of_listLeaderboard_16() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___listLeaderboard_16)); }
	inline List_1_t848712873 * get_listLeaderboard_16() const { return ___listLeaderboard_16; }
	inline List_1_t848712873 ** get_address_of_listLeaderboard_16() { return &___listLeaderboard_16; }
	inline void set_listLeaderboard_16(List_1_t848712873 * value)
	{
		___listLeaderboard_16 = value;
		Il2CppCodeGenWriteBarrier(&___listLeaderboard_16, value);
	}

	inline static int32_t get_offset_of_listGameScore_17() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___listGameScore_17)); }
	inline List_1_t4241721804 * get_listGameScore_17() const { return ___listGameScore_17; }
	inline List_1_t4241721804 ** get_address_of_listGameScore_17() { return &___listGameScore_17; }
	inline void set_listGameScore_17(List_1_t4241721804 * value)
	{
		___listGameScore_17 = value;
		Il2CppCodeGenWriteBarrier(&___listGameScore_17, value);
	}

	inline static int32_t get_offset_of_listUserFriends_18() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___listUserFriends_18)); }
	inline List_1_t4241721804 * get_listUserFriends_18() const { return ___listUserFriends_18; }
	inline List_1_t4241721804 ** get_address_of_listUserFriends_18() { return &___listUserFriends_18; }
	inline void set_listUserFriends_18(List_1_t4241721804 * value)
	{
		___listUserFriends_18 = value;
		Il2CppCodeGenWriteBarrier(&___listUserFriends_18, value);
	}

	inline static int32_t get_offset_of_inviteParent_19() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___inviteParent_19)); }
	inline GameObject_t4012695102 * get_inviteParent_19() const { return ___inviteParent_19; }
	inline GameObject_t4012695102 ** get_address_of_inviteParent_19() { return &___inviteParent_19; }
	inline void set_inviteParent_19(GameObject_t4012695102 * value)
	{
		___inviteParent_19 = value;
		Il2CppCodeGenWriteBarrier(&___inviteParent_19, value);
	}

	inline static int32_t get_offset_of_leaderParent_20() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___leaderParent_20)); }
	inline GameObject_t4012695102 * get_leaderParent_20() const { return ___leaderParent_20; }
	inline GameObject_t4012695102 ** get_address_of_leaderParent_20() { return &___leaderParent_20; }
	inline void set_leaderParent_20(GameObject_t4012695102 * value)
	{
		___leaderParent_20 = value;
		Il2CppCodeGenWriteBarrier(&___leaderParent_20, value);
	}

	inline static int32_t get_offset_of_allGamesScoresParent_21() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___allGamesScoresParent_21)); }
	inline GameObject_t4012695102 * get_allGamesScoresParent_21() const { return ___allGamesScoresParent_21; }
	inline GameObject_t4012695102 ** get_address_of_allGamesScoresParent_21() { return &___allGamesScoresParent_21; }
	inline void set_allGamesScoresParent_21(GameObject_t4012695102 * value)
	{
		___allGamesScoresParent_21 = value;
		Il2CppCodeGenWriteBarrier(&___allGamesScoresParent_21, value);
	}

	inline static int32_t get_offset_of_userFriendsParent_22() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___userFriendsParent_22)); }
	inline GameObject_t4012695102 * get_userFriendsParent_22() const { return ___userFriendsParent_22; }
	inline GameObject_t4012695102 ** get_address_of_userFriendsParent_22() { return &___userFriendsParent_22; }
	inline void set_userFriendsParent_22(GameObject_t4012695102 * value)
	{
		___userFriendsParent_22 = value;
		Il2CppCodeGenWriteBarrier(&___userFriendsParent_22, value);
	}

	inline static int32_t get_offset_of_itemInvitePref_23() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___itemInvitePref_23)); }
	inline ListItemInvite_t919691582 * get_itemInvitePref_23() const { return ___itemInvitePref_23; }
	inline ListItemInvite_t919691582 ** get_address_of_itemInvitePref_23() { return &___itemInvitePref_23; }
	inline void set_itemInvitePref_23(ListItemInvite_t919691582 * value)
	{
		___itemInvitePref_23 = value;
		Il2CppCodeGenWriteBarrier(&___itemInvitePref_23, value);
	}

	inline static int32_t get_offset_of_itemLeaderPref_24() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___itemLeaderPref_24)); }
	inline ListItemLeaderboard_t51753904 * get_itemLeaderPref_24() const { return ___itemLeaderPref_24; }
	inline ListItemLeaderboard_t51753904 ** get_address_of_itemLeaderPref_24() { return &___itemLeaderPref_24; }
	inline void set_itemLeaderPref_24(ListItemLeaderboard_t51753904 * value)
	{
		___itemLeaderPref_24 = value;
		Il2CppCodeGenWriteBarrier(&___itemLeaderPref_24, value);
	}

	inline static int32_t get_offset_of_gameScorePref_25() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___gameScorePref_25)); }
	inline GameScoreItem_t3444762835 * get_gameScorePref_25() const { return ___gameScorePref_25; }
	inline GameScoreItem_t3444762835 ** get_address_of_gameScorePref_25() { return &___gameScorePref_25; }
	inline void set_gameScorePref_25(GameScoreItem_t3444762835 * value)
	{
		___gameScorePref_25 = value;
		Il2CppCodeGenWriteBarrier(&___gameScorePref_25, value);
	}

	inline static int32_t get_offset_of_userFriendsPrefab_26() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___userFriendsPrefab_26)); }
	inline GameScoreItem_t3444762835 * get_userFriendsPrefab_26() const { return ___userFriendsPrefab_26; }
	inline GameScoreItem_t3444762835 ** get_address_of_userFriendsPrefab_26() { return &___userFriendsPrefab_26; }
	inline void set_userFriendsPrefab_26(GameScoreItem_t3444762835 * value)
	{
		___userFriendsPrefab_26 = value;
		Il2CppCodeGenWriteBarrier(&___userFriendsPrefab_26, value);
	}

	inline static int32_t get_offset_of_readPermission_27() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___readPermission_27)); }
	inline List_1_t1765447871 * get_readPermission_27() const { return ___readPermission_27; }
	inline List_1_t1765447871 ** get_address_of_readPermission_27() { return &___readPermission_27; }
	inline void set_readPermission_27(List_1_t1765447871 * value)
	{
		___readPermission_27 = value;
		Il2CppCodeGenWriteBarrier(&___readPermission_27, value);
	}

	inline static int32_t get_offset_of_publishPermission_28() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___publishPermission_28)); }
	inline List_1_t1765447871 * get_publishPermission_28() const { return ___publishPermission_28; }
	inline List_1_t1765447871 ** get_address_of_publishPermission_28() { return &___publishPermission_28; }
	inline void set_publishPermission_28(List_1_t1765447871 * value)
	{
		___publishPermission_28 = value;
		Il2CppCodeGenWriteBarrier(&___publishPermission_28, value);
	}

	inline static int32_t get_offset_of_getLeaderboardString_29() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___getLeaderboardString_29)); }
	inline String_t* get_getLeaderboardString_29() const { return ___getLeaderboardString_29; }
	inline String_t** get_address_of_getLeaderboardString_29() { return &___getLeaderboardString_29; }
	inline void set_getLeaderboardString_29(String_t* value)
	{
		___getLeaderboardString_29 = value;
		Il2CppCodeGenWriteBarrier(&___getLeaderboardString_29, value);
	}

	inline static int32_t get_offset_of_getInvitableFriendsString_30() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___getInvitableFriendsString_30)); }
	inline String_t* get_getInvitableFriendsString_30() const { return ___getInvitableFriendsString_30; }
	inline String_t** get_address_of_getInvitableFriendsString_30() { return &___getInvitableFriendsString_30; }
	inline void set_getInvitableFriendsString_30(String_t* value)
	{
		___getInvitableFriendsString_30 = value;
		Il2CppCodeGenWriteBarrier(&___getInvitableFriendsString_30, value);
	}

	inline static int32_t get_offset_of_getUserPicString_31() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___getUserPicString_31)); }
	inline String_t* get_getUserPicString_31() const { return ___getUserPicString_31; }
	inline String_t** get_address_of_getUserPicString_31() { return &___getUserPicString_31; }
	inline void set_getUserPicString_31(String_t* value)
	{
		___getUserPicString_31 = value;
		Il2CppCodeGenWriteBarrier(&___getUserPicString_31, value);
	}

	inline static int32_t get_offset_of_getNameString_32() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___getNameString_32)); }
	inline String_t* get_getNameString_32() const { return ___getNameString_32; }
	inline String_t** get_address_of_getNameString_32() { return &___getNameString_32; }
	inline void set_getNameString_32(String_t* value)
	{
		___getNameString_32 = value;
		Il2CppCodeGenWriteBarrier(&___getNameString_32, value);
	}

	inline static int32_t get_offset_of_getAllScoresString_33() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___getAllScoresString_33)); }
	inline String_t* get_getAllScoresString_33() const { return ___getAllScoresString_33; }
	inline String_t** get_address_of_getAllScoresString_33() { return &___getAllScoresString_33; }
	inline void set_getAllScoresString_33(String_t* value)
	{
		___getAllScoresString_33 = value;
		Il2CppCodeGenWriteBarrier(&___getAllScoresString_33, value);
	}

	inline static int32_t get_offset_of_getFriendsInfoString_34() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___getFriendsInfoString_34)); }
	inline String_t* get_getFriendsInfoString_34() const { return ___getFriendsInfoString_34; }
	inline String_t** get_address_of_getFriendsInfoString_34() { return &___getFriendsInfoString_34; }
	inline void set_getFriendsInfoString_34(String_t* value)
	{
		___getFriendsInfoString_34 = value;
		Il2CppCodeGenWriteBarrier(&___getFriendsInfoString_34, value);
	}

	inline static int32_t get_offset_of_btnInit_36() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnInit_36)); }
	inline Button_t990034267 * get_btnInit_36() const { return ___btnInit_36; }
	inline Button_t990034267 ** get_address_of_btnInit_36() { return &___btnInit_36; }
	inline void set_btnInit_36(Button_t990034267 * value)
	{
		___btnInit_36 = value;
		Il2CppCodeGenWriteBarrier(&___btnInit_36, value);
	}

	inline static int32_t get_offset_of_btnLogin_37() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnLogin_37)); }
	inline Button_t990034267 * get_btnLogin_37() const { return ___btnLogin_37; }
	inline Button_t990034267 ** get_address_of_btnLogin_37() { return &___btnLogin_37; }
	inline void set_btnLogin_37(Button_t990034267 * value)
	{
		___btnLogin_37 = value;
		Il2CppCodeGenWriteBarrier(&___btnLogin_37, value);
	}

	inline static int32_t get_offset_of_btnLogout_38() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnLogout_38)); }
	inline Button_t990034267 * get_btnLogout_38() const { return ___btnLogout_38; }
	inline Button_t990034267 ** get_address_of_btnLogout_38() { return &___btnLogout_38; }
	inline void set_btnLogout_38(Button_t990034267 * value)
	{
		___btnLogout_38 = value;
		Il2CppCodeGenWriteBarrier(&___btnLogout_38, value);
	}

	inline static int32_t get_offset_of_btnNativeInvite_39() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnNativeInvite_39)); }
	inline Button_t990034267 * get_btnNativeInvite_39() const { return ___btnNativeInvite_39; }
	inline Button_t990034267 ** get_address_of_btnNativeInvite_39() { return &___btnNativeInvite_39; }
	inline void set_btnNativeInvite_39(Button_t990034267 * value)
	{
		___btnNativeInvite_39 = value;
		Il2CppCodeGenWriteBarrier(&___btnNativeInvite_39, value);
	}

	inline static int32_t get_offset_of_btnCustomInvite_40() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnCustomInvite_40)); }
	inline Button_t990034267 * get_btnCustomInvite_40() const { return ___btnCustomInvite_40; }
	inline Button_t990034267 ** get_address_of_btnCustomInvite_40() { return &___btnCustomInvite_40; }
	inline void set_btnCustomInvite_40(Button_t990034267 * value)
	{
		___btnCustomInvite_40 = value;
		Il2CppCodeGenWriteBarrier(&___btnCustomInvite_40, value);
	}

	inline static int32_t get_offset_of_btnLeaderboard_41() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnLeaderboard_41)); }
	inline Button_t990034267 * get_btnLeaderboard_41() const { return ___btnLeaderboard_41; }
	inline Button_t990034267 ** get_address_of_btnLeaderboard_41() { return &___btnLeaderboard_41; }
	inline void set_btnLeaderboard_41(Button_t990034267 * value)
	{
		___btnLeaderboard_41 = value;
		Il2CppCodeGenWriteBarrier(&___btnLeaderboard_41, value);
	}

	inline static int32_t get_offset_of_btnGetName_42() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnGetName_42)); }
	inline Button_t990034267 * get_btnGetName_42() const { return ___btnGetName_42; }
	inline Button_t990034267 ** get_address_of_btnGetName_42() { return &___btnGetName_42; }
	inline void set_btnGetName_42(Button_t990034267 * value)
	{
		___btnGetName_42 = value;
		Il2CppCodeGenWriteBarrier(&___btnGetName_42, value);
	}

	inline static int32_t get_offset_of_btnSubmitScore_43() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnSubmitScore_43)); }
	inline Button_t990034267 * get_btnSubmitScore_43() const { return ___btnSubmitScore_43; }
	inline Button_t990034267 ** get_address_of_btnSubmitScore_43() { return &___btnSubmitScore_43; }
	inline void set_btnSubmitScore_43(Button_t990034267 * value)
	{
		___btnSubmitScore_43 = value;
		Il2CppCodeGenWriteBarrier(&___btnSubmitScore_43, value);
	}

	inline static int32_t get_offset_of_btnName_44() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnName_44)); }
	inline Button_t990034267 * get_btnName_44() const { return ___btnName_44; }
	inline Button_t990034267 ** get_address_of_btnName_44() { return &___btnName_44; }
	inline void set_btnName_44(Button_t990034267 * value)
	{
		___btnName_44 = value;
		Il2CppCodeGenWriteBarrier(&___btnName_44, value);
	}

	inline static int32_t get_offset_of_btnLoadDpFromServer_45() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnLoadDpFromServer_45)); }
	inline Button_t990034267 * get_btnLoadDpFromServer_45() const { return ___btnLoadDpFromServer_45; }
	inline Button_t990034267 ** get_address_of_btnLoadDpFromServer_45() { return &___btnLoadDpFromServer_45; }
	inline void set_btnLoadDpFromServer_45(Button_t990034267 * value)
	{
		___btnLoadDpFromServer_45 = value;
		Il2CppCodeGenWriteBarrier(&___btnLoadDpFromServer_45, value);
	}

	inline static int32_t get_offset_of_btnSaveDp_46() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnSaveDp_46)); }
	inline Button_t990034267 * get_btnSaveDp_46() const { return ___btnSaveDp_46; }
	inline Button_t990034267 ** get_address_of_btnSaveDp_46() { return &___btnSaveDp_46; }
	inline void set_btnSaveDp_46(Button_t990034267 * value)
	{
		___btnSaveDp_46 = value;
		Il2CppCodeGenWriteBarrier(&___btnSaveDp_46, value);
	}

	inline static int32_t get_offset_of_btnLoadDpFromLocal_47() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnLoadDpFromLocal_47)); }
	inline Button_t990034267 * get_btnLoadDpFromLocal_47() const { return ___btnLoadDpFromLocal_47; }
	inline Button_t990034267 ** get_address_of_btnLoadDpFromLocal_47() { return &___btnLoadDpFromLocal_47; }
	inline void set_btnLoadDpFromLocal_47(Button_t990034267 * value)
	{
		___btnLoadDpFromLocal_47 = value;
		Il2CppCodeGenWriteBarrier(&___btnLoadDpFromLocal_47, value);
	}

	inline static int32_t get_offset_of_btnGetScore_48() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnGetScore_48)); }
	inline Button_t990034267 * get_btnGetScore_48() const { return ___btnGetScore_48; }
	inline Button_t990034267 ** get_address_of_btnGetScore_48() { return &___btnGetScore_48; }
	inline void set_btnGetScore_48(Button_t990034267 * value)
	{
		___btnGetScore_48 = value;
		Il2CppCodeGenWriteBarrier(&___btnGetScore_48, value);
	}

	inline static int32_t get_offset_of_btnGetAllScores_49() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnGetAllScores_49)); }
	inline Button_t990034267 * get_btnGetAllScores_49() const { return ___btnGetAllScores_49; }
	inline Button_t990034267 ** get_address_of_btnGetAllScores_49() { return &___btnGetAllScores_49; }
	inline void set_btnGetAllScores_49(Button_t990034267 * value)
	{
		___btnGetAllScores_49 = value;
		Il2CppCodeGenWriteBarrier(&___btnGetAllScores_49, value);
	}

	inline static int32_t get_offset_of_btnShare_50() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnShare_50)); }
	inline Button_t990034267 * get_btnShare_50() const { return ___btnShare_50; }
	inline Button_t990034267 ** get_address_of_btnShare_50() { return &___btnShare_50; }
	inline void set_btnShare_50(Button_t990034267 * value)
	{
		___btnShare_50 = value;
		Il2CppCodeGenWriteBarrier(&___btnShare_50, value);
	}

	inline static int32_t get_offset_of_btnTakeScreenshotNShare_51() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnTakeScreenshotNShare_51)); }
	inline Button_t990034267 * get_btnTakeScreenshotNShare_51() const { return ___btnTakeScreenshotNShare_51; }
	inline Button_t990034267 ** get_address_of_btnTakeScreenshotNShare_51() { return &___btnTakeScreenshotNShare_51; }
	inline void set_btnTakeScreenshotNShare_51(Button_t990034267 * value)
	{
		___btnTakeScreenshotNShare_51 = value;
		Il2CppCodeGenWriteBarrier(&___btnTakeScreenshotNShare_51, value);
	}

	inline static int32_t get_offset_of_btnGetFriends_52() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnGetFriends_52)); }
	inline Button_t990034267 * get_btnGetFriends_52() const { return ___btnGetFriends_52; }
	inline Button_t990034267 ** get_address_of_btnGetFriends_52() { return &___btnGetFriends_52; }
	inline void set_btnGetFriends_52(Button_t990034267 * value)
	{
		___btnGetFriends_52 = value;
		Il2CppCodeGenWriteBarrier(&___btnGetFriends_52, value);
	}

	inline static int32_t get_offset_of_btnGetDeepLink_53() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnGetDeepLink_53)); }
	inline Button_t990034267 * get_btnGetDeepLink_53() const { return ___btnGetDeepLink_53; }
	inline Button_t990034267 ** get_address_of_btnGetDeepLink_53() { return &___btnGetDeepLink_53; }
	inline void set_btnGetDeepLink_53(Button_t990034267 * value)
	{
		___btnGetDeepLink_53 = value;
		Il2CppCodeGenWriteBarrier(&___btnGetDeepLink_53, value);
	}

	inline static int32_t get_offset_of_btnUnlockAchievement_54() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnUnlockAchievement_54)); }
	inline Button_t990034267 * get_btnUnlockAchievement_54() const { return ___btnUnlockAchievement_54; }
	inline Button_t990034267 ** get_address_of_btnUnlockAchievement_54() { return &___btnUnlockAchievement_54; }
	inline void set_btnUnlockAchievement_54(Button_t990034267 * value)
	{
		___btnUnlockAchievement_54 = value;
		Il2CppCodeGenWriteBarrier(&___btnUnlockAchievement_54, value);
	}

	inline static int32_t get_offset_of_btnCanvasPay_55() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnCanvasPay_55)); }
	inline Button_t990034267 * get_btnCanvasPay_55() const { return ___btnCanvasPay_55; }
	inline Button_t990034267 ** get_address_of_btnCanvasPay_55() { return &___btnCanvasPay_55; }
	inline void set_btnCanvasPay_55(Button_t990034267 * value)
	{
		___btnCanvasPay_55 = value;
		Il2CppCodeGenWriteBarrier(&___btnCanvasPay_55, value);
	}

	inline static int32_t get_offset_of_btnShareViaDialog_56() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnShareViaDialog_56)); }
	inline Button_t990034267 * get_btnShareViaDialog_56() const { return ___btnShareViaDialog_56; }
	inline Button_t990034267 ** get_address_of_btnShareViaDialog_56() { return &___btnShareViaDialog_56; }
	inline void set_btnShareViaDialog_56(Button_t990034267 * value)
	{
		___btnShareViaDialog_56 = value;
		Il2CppCodeGenWriteBarrier(&___btnShareViaDialog_56, value);
	}

	inline static int32_t get_offset_of_btnShareViaGraph_57() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___btnShareViaGraph_57)); }
	inline Button_t990034267 * get_btnShareViaGraph_57() const { return ___btnShareViaGraph_57; }
	inline Button_t990034267 ** get_address_of_btnShareViaGraph_57() { return &___btnShareViaGraph_57; }
	inline void set_btnShareViaGraph_57(Button_t990034267 * value)
	{
		___btnShareViaGraph_57 = value;
		Il2CppCodeGenWriteBarrier(&___btnShareViaGraph_57, value);
	}

	inline static int32_t get_offset_of_logTxt_58() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___logTxt_58)); }
	inline Text_t3286458198 * get_logTxt_58() const { return ___logTxt_58; }
	inline Text_t3286458198 ** get_address_of_logTxt_58() { return &___logTxt_58; }
	inline void set_logTxt_58(Text_t3286458198 * value)
	{
		___logTxt_58 = value;
		Il2CppCodeGenWriteBarrier(&___logTxt_58, value);
	}

	inline static int32_t get_offset_of_playerInfo_59() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___playerInfo_59)); }
	inline GameObject_t4012695102 * get_playerInfo_59() const { return ___playerInfo_59; }
	inline GameObject_t4012695102 ** get_address_of_playerInfo_59() { return &___playerInfo_59; }
	inline void set_playerInfo_59(GameObject_t4012695102 * value)
	{
		___playerInfo_59 = value;
		Il2CppCodeGenWriteBarrier(&___playerInfo_59, value);
	}

	inline static int32_t get_offset_of_leaderboardStripe_60() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___leaderboardStripe_60)); }
	inline GameObject_t4012695102 * get_leaderboardStripe_60() const { return ___leaderboardStripe_60; }
	inline GameObject_t4012695102 ** get_address_of_leaderboardStripe_60() { return &___leaderboardStripe_60; }
	inline void set_leaderboardStripe_60(GameObject_t4012695102 * value)
	{
		___leaderboardStripe_60 = value;
		Il2CppCodeGenWriteBarrier(&___leaderboardStripe_60, value);
	}

	inline static int32_t get_offset_of_dialogs_61() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___dialogs_61)); }
	inline GameObjectU5BU5D_t3499186955* get_dialogs_61() const { return ___dialogs_61; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_dialogs_61() { return &___dialogs_61; }
	inline void set_dialogs_61(GameObjectU5BU5D_t3499186955* value)
	{
		___dialogs_61 = value;
		Il2CppCodeGenWriteBarrier(&___dialogs_61, value);
	}

	inline static int32_t get_offset_of_loaders_62() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___loaders_62)); }
	inline GameObjectU5BU5D_t3499186955* get_loaders_62() const { return ___loaders_62; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_loaders_62() { return &___loaders_62; }
	inline void set_loaders_62(GameObjectU5BU5D_t3499186955* value)
	{
		___loaders_62 = value;
		Il2CppCodeGenWriteBarrier(&___loaders_62, value);
	}

	inline static int32_t get_offset_of_inpInvSearcher_63() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___inpInvSearcher_63)); }
	inline InputField_t2345609593 * get_inpInvSearcher_63() const { return ___inpInvSearcher_63; }
	inline InputField_t2345609593 ** get_address_of_inpInvSearcher_63() { return &___inpInvSearcher_63; }
	inline void set_inpInvSearcher_63(InputField_t2345609593 * value)
	{
		___inpInvSearcher_63 = value;
		Il2CppCodeGenWriteBarrier(&___inpInvSearcher_63, value);
	}

	inline static int32_t get_offset_of_inpLeadSearcher_64() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___inpLeadSearcher_64)); }
	inline InputField_t2345609593 * get_inpLeadSearcher_64() const { return ___inpLeadSearcher_64; }
	inline InputField_t2345609593 ** get_address_of_inpLeadSearcher_64() { return &___inpLeadSearcher_64; }
	inline void set_inpLeadSearcher_64(InputField_t2345609593 * value)
	{
		___inpLeadSearcher_64 = value;
		Il2CppCodeGenWriteBarrier(&___inpLeadSearcher_64, value);
	}

	inline static int32_t get_offset_of_inpSubmitScore_65() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___inpSubmitScore_65)); }
	inline InputField_t2345609593 * get_inpSubmitScore_65() const { return ___inpSubmitScore_65; }
	inline InputField_t2345609593 ** get_address_of_inpSubmitScore_65() { return &___inpSubmitScore_65; }
	inline void set_inpSubmitScore_65(InputField_t2345609593 * value)
	{
		___inpSubmitScore_65 = value;
		Il2CppCodeGenWriteBarrier(&___inpSubmitScore_65, value);
	}

	inline static int32_t get_offset_of_inpPostGraph_66() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___inpPostGraph_66)); }
	inline InputField_t2345609593 * get_inpPostGraph_66() const { return ___inpPostGraph_66; }
	inline InputField_t2345609593 ** get_address_of_inpPostGraph_66() { return &___inpPostGraph_66; }
	inline void set_inpPostGraph_66(InputField_t2345609593 * value)
	{
		___inpPostGraph_66 = value;
		Il2CppCodeGenWriteBarrier(&___inpPostGraph_66, value);
	}

	inline static int32_t get_offset_of_updateTime_67() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___updateTime_67)); }
	inline float get_updateTime_67() const { return ___updateTime_67; }
	inline float* get_address_of_updateTime_67() { return &___updateTime_67; }
	inline void set_updateTime_67(float value)
	{
		___updateTime_67 = value;
	}

	inline static int32_t get_offset_of_lastUpdate_68() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___lastUpdate_68)); }
	inline float get_lastUpdate_68() const { return ___lastUpdate_68; }
	inline float* get_address_of_lastUpdate_68() { return &___lastUpdate_68; }
	inline void set_lastUpdate_68(float value)
	{
		___lastUpdate_68 = value;
	}

	inline static int32_t get_offset_of_lastScore_69() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___lastScore_69)); }
	inline int32_t get_lastScore_69() const { return ___lastScore_69; }
	inline int32_t* get_address_of_lastScore_69() { return &___lastScore_69; }
	inline void set_lastScore_69(int32_t value)
	{
		___lastScore_69 = value;
	}

	inline static int32_t get_offset_of_isLogged_70() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___isLogged_70)); }
	inline bool get_isLogged_70() const { return ___isLogged_70; }
	inline bool* get_address_of_isLogged_70() { return &___isLogged_70; }
	inline void set_isLogged_70(bool value)
	{
		___isLogged_70 = value;
	}

	inline static int32_t get_offset_of_FILE_NAME_71() { return static_cast<int32_t>(offsetof(FBManager_t1944751413, ___FILE_NAME_71)); }
	inline String_t* get_FILE_NAME_71() const { return ___FILE_NAME_71; }
	inline String_t** get_address_of_FILE_NAME_71() { return &___FILE_NAME_71; }
	inline void set_FILE_NAME_71(String_t* value)
	{
		___FILE_NAME_71 = value;
		Il2CppCodeGenWriteBarrier(&___FILE_NAME_71, value);
	}
};

struct FBManager_t1944751413_StaticFields
{
public:
	// System.String GS.FBManager::appID
	String_t* ___appID_35;

public:
	inline static int32_t get_offset_of_appID_35() { return static_cast<int32_t>(offsetof(FBManager_t1944751413_StaticFields, ___appID_35)); }
	inline String_t* get_appID_35() const { return ___appID_35; }
	inline String_t** get_address_of_appID_35() { return &___appID_35; }
	inline void set_appID_35(String_t* value)
	{
		___appID_35 = value;
		Il2CppCodeGenWriteBarrier(&___appID_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
