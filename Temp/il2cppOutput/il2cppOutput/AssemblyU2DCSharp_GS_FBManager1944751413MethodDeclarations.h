#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GS.FBManager
struct FBManager_t1944751413;
// System.String
struct String_t;
// Facebook.Unity.IGraphResult
struct IGraphResult_t2342947041;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// GS.FBManager/LoadPictureCallback
struct LoadPictureCallback_t3065091453;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// Facebook.Unity.ILoginResult
struct ILoginResult_t1998157500;
// Facebook.Unity.IAppRequestResult
struct IAppRequestResult_t2121186099;
// Facebook.Unity.IAppLinkResult
struct IAppLinkResult_t3053946318;
// Facebook.Unity.IShareResult
struct IShareResult_t747644594;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "AssemblyU2DCSharp_GS_FBManager_LoadPictureCallback3065091453.h"
#include "AssemblyU2DCSharp_GS_ToggleState3362500449.h"

// System.Void GS.FBManager::.ctor()
extern "C"  void FBManager__ctor_m2438378156 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::Awake()
extern "C"  void FBManager_Awake_m2675983375 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::SetButtonsListeners()
extern "C"  void FBManager_SetButtonsListeners_m1439630410 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::ShowHideDialog(System.Int32,System.Boolean)
extern "C"  void FBManager_ShowHideDialog_m855653389 (FBManager_t1944751413 * __this, int32_t ___dialogID0, bool ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::ShowHideLoader(System.Int32,System.Boolean)
extern "C"  void FBManager_ShowHideLoader_m3444990242 (FBManager_t1944751413 * __this, int32_t ___loaderId0, bool ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::PrintLog(System.String)
extern "C"  void FBManager_PrintLog_m3677802035 (FBManager_t1944751413 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::PostScore(System.Int32)
extern "C"  void FBManager_PostScore_m90579949 (FBManager_t1944751413 * __this, int32_t ___scoreInt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::PostOnlyIfPermitted(System.Int32)
extern "C"  void FBManager_PostOnlyIfPermitted_m731177354 (FBManager_t1944751413 * __this, int32_t ___scoreInt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::GetPublishPermission()
extern "C"  void FBManager_GetPublishPermission_m866133152 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::GetAppIDNScore()
extern "C"  void FBManager_GetAppIDNScore_m3651185026 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::GetFBScoreInternal()
extern "C"  void FBManager_GetFBScoreInternal_m3077439381 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::GetAllScores()
extern "C"  void FBManager_GetAllScores_m3578589572 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::GetFriendsInfo()
extern "C"  void FBManager_GetFriendsInfo_m3896812485 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::LoadLeaderboard()
extern "C"  void FBManager_LoadLeaderboard_m1135443329 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::CallBackLoadLeaderboard(Facebook.Unity.IGraphResult)
extern "C"  void FBManager_CallBackLoadLeaderboard_m555537715 (FBManager_t1944751413 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::OnValueChangeLeaderSeacher()
extern "C"  void FBManager_OnValueChangeLeaderSeacher_m3560221102 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::LoadFriendsAvatar(System.Int32)
extern "C"  void FBManager_LoadFriendsAvatar_m3651985059 (FBManager_t1944751413 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::CreateListItemLeaderboard(System.String,System.String,System.String,System.Int32)
extern "C"  void FBManager_CreateListItemLeaderboard_m2102599863 (FBManager_t1944751413 * __this, String_t* ___id0, String_t* ___fName1, String_t* ___fScore2, int32_t ___rank3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::PicCallBackLeaderboard(UnityEngine.Texture2D,System.Int32)
extern "C"  void FBManager_PicCallBackLeaderboard_m2363609217 (FBManager_t1944751413 * __this, Texture2D_t2509538522 * ___texture0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GS.FBManager::LoadFPicRoutine(System.String,GS.FBManager/LoadPictureCallback,System.Int32)
extern "C"  Il2CppObject * FBManager_LoadFPicRoutine_m169646772 (FBManager_t1944751413 * __this, String_t* ___url0, LoadPictureCallback_t3065091453 * ___Callback1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::TglSelectAllClickHandler()
extern "C"  void FBManager_TglSelectAllClickHandler_m1490354566 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::ChangeToggleState(GS.ToggleState)
extern "C"  void FBManager_ChangeToggleState_m2816383548 (FBManager_t1944751413 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::SendInvites()
extern "C"  void FBManager_SendInvites_m807640684 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::CallInvites(System.Collections.Generic.List`1<System.String>,System.Int32)
extern "C"  void FBManager_CallInvites_m500874381 (FBManager_t1944751413 * __this, List_1_t1765447871 * ___lstToSend0, int32_t ___dialogCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::LoadInvitableFriends()
extern "C"  void FBManager_LoadInvitableFriends_m2051193693 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::CallBackLoadInvitableFriends(Facebook.Unity.IGraphResult)
extern "C"  void FBManager_CallBackLoadInvitableFriends_m3124366573 (FBManager_t1944751413 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::CreateListItemInvite(System.String,System.String,System.String)
extern "C"  void FBManager_CreateListItemInvite_m1979939404 (FBManager_t1944751413 * __this, String_t* ___id0, String_t* ___fName1, String_t* ___url2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::PicCallBackInvitable(UnityEngine.Texture2D,System.Int32)
extern "C"  void FBManager_PicCallBackInvitable_m3208083130 (FBManager_t1944751413 * __this, Texture2D_t2509538522 * ___texture0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::NativeInviteFriendsFB()
extern "C"  void FBManager_NativeInviteFriendsFB_m826462331 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::OnValueChangeInvSearcher()
extern "C"  void FBManager_OnValueChangeInvSearcher_m3942579068 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::InitFB()
extern "C"  void FBManager_InitFB_m3247534628 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::onHideUnity(System.Boolean)
extern "C"  void FBManager_onHideUnity_m1090201941 (FBManager_t1944751413 * __this, bool ___isGameShown0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::InitCallback()
extern "C"  void FBManager_InitCallback_m3151183437 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::LoginFB()
extern "C"  void FBManager_LoginFB_m451896879 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::LoginCallback(Facebook.Unity.ILoginResult)
extern "C"  void FBManager_LoginCallback_m2214026684 (FBManager_t1944751413 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::SetUILoggedIn()
extern "C"  void FBManager_SetUILoggedIn_m3649594983 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::SetUILoggedOut()
extern "C"  void FBManager_SetUILoggedOut_m1474117486 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::LogoutFB()
extern "C"  void FBManager_LogoutFB_m2396986334 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::ClearOldData()
extern "C"  void FBManager_ClearOldData_m4197117052 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::ClearInvite()
extern "C"  void FBManager_ClearInvite_m2394630976 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::ClearLeaderboard()
extern "C"  void FBManager_ClearLeaderboard_m3580618120 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::ClearGameScores()
extern "C"  void FBManager_ClearGameScores_m1133878634 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::ClearUserFriendsData()
extern "C"  void FBManager_ClearUserFriendsData_m2200820063 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::SetFBItems(System.Boolean)
extern "C"  void FBManager_SetFBItems_m1620350225 (FBManager_t1944751413 * __this, bool ___isLogin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GS.FBManager::GetPath(System.String)
extern "C"  String_t* FBManager_GetPath_m3868529760 (FBManager_t1944751413 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::LoadPlayerPic(System.Boolean)
extern "C"  void FBManager_LoadPlayerPic_m2065287524 (FBManager_t1944751413 * __this, bool ___needToSave0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::LoadDPifExists()
extern "C"  void FBManager_LoadDPifExists_m4034444131 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::LoadOrSavePicture(UnityEngine.Texture2D,System.Boolean)
extern "C"  void FBManager_LoadOrSavePicture_m2724857027 (FBManager_t1944751413 * __this, Texture2D_t2509538522 * ___tex0, bool ___needToSave1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GS.FBManager::GetProfilePicRoutine(System.String,System.Boolean)
extern "C"  Il2CppObject * FBManager_GetProfilePicRoutine_m2639411848 (FBManager_t1944751413 * __this, String_t* ___url0, bool ___needToSave1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::LoadPlayerName()
extern "C"  void FBManager_LoadPlayerName_m2219119210 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::TakeScreenshotNShare()
extern "C"  void FBManager_TakeScreenshotNShare_m1019689814 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GS.FBManager::TakeScreenshot()
extern "C"  Il2CppObject * FBManager_TakeScreenshot_m4153806509 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::GetDeepLink()
extern "C"  void FBManager_GetDeepLink_m390461062 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::ShareOnFB()
extern "C"  void FBManager_ShareOnFB_m3824874532 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::BuyCoins()
extern "C"  void FBManager_BuyCoins_m2836992948 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::UpdateCoins()
extern "C"  void FBManager_UpdateCoins_m1952244611 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::PostAchievement()
extern "C"  void FBManager_PostAchievement_m3108965177 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::ShareViaDialog()
extern "C"  void FBManager_ShareViaDialog_m3089241199 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::ShareViaGraph()
extern "C"  void FBManager_ShareViaGraph_m248990185 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__1()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__1_m2704726024 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__2()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__2_m2704726985 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__3()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__3_m2704727946 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__4()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__4_m2704728907 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__5()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__5_m2704729868 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__6()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__6_m2704730829 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__7()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__7_m2704731790 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__8()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__8_m2704732751 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__9()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__9_m2704733712 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__A()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__A_m2704741400 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__B()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__B_m2704742361 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__C()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__C_m2704743322 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__D()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__D_m2704744283 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__E()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__E_m2704745244 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__F()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__F_m2704746205 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__10()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__10_m2242135818 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__11()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__11_m2242136779 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__12()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__12_m2242137740 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__13()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__13_m2242138701 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__14()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__14_m2242139662 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__15()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__15_m2242140623 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__16()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__16_m2242141584 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__17()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__17_m2242142545 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__18()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__18_m2242143506 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<SetButtonsListeners>m__19()
extern "C"  void FBManager_U3CSetButtonsListenersU3Em__19_m2242144467 (FBManager_t1944751413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<PostOnlyIfPermitted>m__1A(Facebook.Unity.IGraphResult)
extern "C"  void FBManager_U3CPostOnlyIfPermittedU3Em__1A_m401938949 (FBManager_t1944751413 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<GetPublishPermission>m__1B(Facebook.Unity.ILoginResult)
extern "C"  void FBManager_U3CGetPublishPermissionU3Em__1B_m2235390598 (FBManager_t1944751413 * __this, Il2CppObject * ___loginResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<GetAppIDNScore>m__1C(Facebook.Unity.IGraphResult)
extern "C"  void FBManager_U3CGetAppIDNScoreU3Em__1C_m2899176830 (FBManager_t1944751413 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<GetFBScoreInternal>m__1D(Facebook.Unity.IGraphResult)
extern "C"  void FBManager_U3CGetFBScoreInternalU3Em__1D_m3931551850 (FBManager_t1944751413 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<GetAllScores>m__1E(Facebook.Unity.IGraphResult)
extern "C"  void FBManager_U3CGetAllScoresU3Em__1E_m1756995962 (FBManager_t1944751413 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<GetFriendsInfo>m__1F(Facebook.Unity.IGraphResult)
extern "C"  void FBManager_U3CGetFriendsInfoU3Em__1F_m1164413560 (FBManager_t1944751413 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<NativeInviteFriendsFB>m__22(Facebook.Unity.IAppRequestResult)
extern "C"  void FBManager_U3CNativeInviteFriendsFBU3Em__22_m1198727241 (FBManager_t1944751413 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<LoadPlayerName>m__24(Facebook.Unity.IGraphResult)
extern "C"  void FBManager_U3CLoadPlayerNameU3Em__24_m1038809990 (FBManager_t1944751413 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<GetDeepLink>m__25(Facebook.Unity.IAppLinkResult)
extern "C"  void FBManager_U3CGetDeepLinkU3Em__25_m1933704920 (FBManager_t1944751413 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<ShareOnFB>m__26(Facebook.Unity.IShareResult)
extern "C"  void FBManager_U3CShareOnFBU3Em__26_m4017102645 (FBManager_t1944751413 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<PostAchievement>m__27(Facebook.Unity.IGraphResult)
extern "C"  void FBManager_U3CPostAchievementU3Em__27_m895718288 (FBManager_t1944751413 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<ShareViaDialog>m__28(Facebook.Unity.IShareResult)
extern "C"  void FBManager_U3CShareViaDialogU3Em__28_m2849102060 (FBManager_t1944751413 * __this, Il2CppObject * ___shareRes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<ShareViaGraph>m__29(Facebook.Unity.IGraphResult)
extern "C"  void FBManager_U3CShareViaGraphU3Em__29_m754496926 (FBManager_t1944751413 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager::<PostAchievement>m__2A(Facebook.Unity.IShareResult)
extern "C"  void FBManager_U3CPostAchievementU3Em__2A_m3094111253 (FBManager_t1944751413 * __this, Il2CppObject * ___shareRes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
