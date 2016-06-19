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

// Facebook.Unity.Mobile.IOS.IOSWrapper
struct IOSWrapper_t1868543644;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::.ctor()
extern "C"  void IOSWrapper__ctor_m4073934985 (IOSWrapper_t1868543644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::Init(System.String,System.Boolean,System.String,System.String)
extern "C"  void IOSWrapper_Init_m3422518494 (IOSWrapper_t1868543644 * __this, String_t* ___appId0, bool ___frictionlessRequests1, String_t* ___urlSuffix2, String_t* ___unityUserAgentSuffix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::LogInWithReadPermissions(System.Int32,System.String)
extern "C"  void IOSWrapper_LogInWithReadPermissions_m3780952903 (IOSWrapper_t1868543644 * __this, int32_t ___requestId0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::LogInWithPublishPermissions(System.Int32,System.String)
extern "C"  void IOSWrapper_LogInWithPublishPermissions_m1458094712 (IOSWrapper_t1868543644 * __this, int32_t ___requestId0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::LogOut()
extern "C"  void IOSWrapper_LogOut_m4141175813 (IOSWrapper_t1868543644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::SetShareDialogMode(System.Int32)
extern "C"  void IOSWrapper_SetShareDialogMode_m700382324 (IOSWrapper_t1868543644 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::ShareLink(System.Int32,System.String,System.String,System.String,System.String)
extern "C"  void IOSWrapper_ShareLink_m167988769 (IOSWrapper_t1868543644 * __this, int32_t ___requestId0, String_t* ___contentURL1, String_t* ___contentTitle2, String_t* ___contentDescription3, String_t* ___photoURL4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::FeedShare(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void IOSWrapper_FeedShare_m3232183037 (IOSWrapper_t1868543644 * __this, int32_t ___requestId0, String_t* ___toId1, String_t* ___link2, String_t* ___linkName3, String_t* ___linkCaption4, String_t* ___linkDescription5, String_t* ___picture6, String_t* ___mediaSource7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::AppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C"  void IOSWrapper_AppRequest_m181741796 (IOSWrapper_t1868543644 * __this, int32_t ___requestId0, String_t* ___message1, String_t* ___actionType2, String_t* ___objectId3, StringU5BU5D_t2956870243* ___to4, int32_t ___toLength5, String_t* ___filters6, StringU5BU5D_t2956870243* ___excludeIds7, int32_t ___excludeIdsLength8, bool ___hasMaxRecipients9, int32_t ___maxRecipients10, String_t* ___data11, String_t* ___title12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::AppInvite(System.Int32,System.String,System.String)
extern "C"  void IOSWrapper_AppInvite_m4011009274 (IOSWrapper_t1868543644 * __this, int32_t ___requestId0, String_t* ___appLinkUrl1, String_t* ___previewImageUrl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::CreateGameGroup(System.Int32,System.String,System.String,System.String)
extern "C"  void IOSWrapper_CreateGameGroup_m1639079357 (IOSWrapper_t1868543644 * __this, int32_t ___requestId0, String_t* ___name1, String_t* ___description2, String_t* ___privacy3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::JoinGameGroup(System.Int32,System.String)
extern "C"  void IOSWrapper_JoinGameGroup_m1159817687 (IOSWrapper_t1868543644 * __this, int32_t ___requestId0, String_t* ___groupId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::FBSettingsActivateApp(System.String)
extern "C"  void IOSWrapper_FBSettingsActivateApp_m3363330828 (IOSWrapper_t1868543644 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::LogAppEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
extern "C"  void IOSWrapper_LogAppEvent_m1773104273 (IOSWrapper_t1868543644 * __this, String_t* ___logEvent0, double ___valueToSum1, int32_t ___numParams2, StringU5BU5D_t2956870243* ___paramKeys3, StringU5BU5D_t2956870243* ___paramVals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::LogPurchaseAppEvent(System.Double,System.String,System.Int32,System.String[],System.String[])
extern "C"  void IOSWrapper_LogPurchaseAppEvent_m623906162 (IOSWrapper_t1868543644 * __this, double ___logPurchase0, String_t* ___currency1, int32_t ___numParams2, StringU5BU5D_t2956870243* ___paramKeys3, StringU5BU5D_t2956870243* ___paramVals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::FBAppEventsSetLimitEventUsage(System.Boolean)
extern "C"  void IOSWrapper_FBAppEventsSetLimitEventUsage_m798755676 (IOSWrapper_t1868543644 * __this, bool ___limitEventUsage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::GetAppLink(System.Int32)
extern "C"  void IOSWrapper_GetAppLink_m1899005361 (IOSWrapper_t1868543644 * __this, int32_t ___requestId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.IOS.IOSWrapper::FBSdkVersion()
extern "C"  String_t* IOSWrapper_FBSdkVersion_m3332607672 (IOSWrapper_t1868543644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::FetchDeferredAppLink(System.Int32)
extern "C"  void IOSWrapper_FetchDeferredAppLink_m1006563246 (IOSWrapper_t1868543644 * __this, int32_t ___requestId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::RefreshCurrentAccessToken(System.Int32)
extern "C"  void IOSWrapper_RefreshCurrentAccessToken_m493671215 (IOSWrapper_t1868543644 * __this, int32_t ___requestId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSInit(System.String,System.Boolean,System.String,System.String)
extern "C"  void IOSWrapper_IOSInit_m2435988695 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, bool ___frictionlessRequests1, String_t* ___urlSuffix2, String_t* ___unityUserAgentSuffix3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSLogInWithReadPermissions(System.Int32,System.String)
extern "C"  void IOSWrapper_IOSLogInWithReadPermissions_m3408361088 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSLogInWithPublishPermissions(System.Int32,System.String)
extern "C"  void IOSWrapper_IOSLogInWithPublishPermissions_m4065794207 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___scope1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSLogOut()
extern "C"  void IOSWrapper_IOSLogOut_m3709434046 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSSetShareDialogMode(System.Int32)
extern "C"  void IOSWrapper_IOSSetShareDialogMode_m3586049581 (Il2CppObject * __this /* static, unused */, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSShareLink(System.Int32,System.String,System.String,System.String,System.String)
extern "C"  void IOSWrapper_IOSShareLink_m413884232 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___contentURL1, String_t* ___contentTitle2, String_t* ___contentDescription3, String_t* ___photoURL4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSFeedShare(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void IOSWrapper_IOSFeedShare_m1117905764 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___toId1, String_t* ___link2, String_t* ___linkName3, String_t* ___linkCaption4, String_t* ___linkDescription5, String_t* ___picture6, String_t* ___mediaSource7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSAppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C"  void IOSWrapper_IOSAppRequest_m1087681629 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___message1, String_t* ___actionType2, String_t* ___objectId3, StringU5BU5D_t2956870243* ___to4, int32_t ___toLength5, String_t* ___filters6, StringU5BU5D_t2956870243* ___excludeIds7, int32_t ___excludeIdsLength8, bool ___hasMaxRecipients9, int32_t ___maxRecipients10, String_t* ___data11, String_t* ___title12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSAppInvite(System.Int32,System.String,System.String)
extern "C"  void IOSWrapper_IOSAppInvite_m1643685537 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___appLinkUrl1, String_t* ___previewImageUrl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSCreateGameGroup(System.Int32,System.String,System.String,System.String)
extern "C"  void IOSWrapper_IOSCreateGameGroup_m3147138532 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___name1, String_t* ___description2, String_t* ___privacy3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSJoinGameGroup(System.Int32,System.String)
extern "C"  void IOSWrapper_IOSJoinGameGroup_m3672539198 (Il2CppObject * __this /* static, unused */, int32_t ___requestId0, String_t* ___groupId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSFBSettingsActivateApp(System.String)
extern "C"  void IOSWrapper_IOSFBSettingsActivateApp_m2006622277 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSFBAppEventsLogEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
extern "C"  void IOSWrapper_IOSFBAppEventsLogEvent_m2963927951 (Il2CppObject * __this /* static, unused */, String_t* ___logEvent0, double ___valueToSum1, int32_t ___numParams2, StringU5BU5D_t2956870243* ___paramKeys3, StringU5BU5D_t2956870243* ___paramVals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSFBAppEventsLogPurchase(System.Double,System.String,System.Int32,System.String[],System.String[])
extern "C"  void IOSWrapper_IOSFBAppEventsLogPurchase_m1319337352 (Il2CppObject * __this /* static, unused */, double ___logPurchase0, String_t* ___currency1, int32_t ___numParams2, StringU5BU5D_t2956870243* ___paramKeys3, StringU5BU5D_t2956870243* ___paramVals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSFBAppEventsSetLimitEventUsage(System.Boolean)
extern "C"  void IOSWrapper_IOSFBAppEventsSetLimitEventUsage_m2526123587 (Il2CppObject * __this /* static, unused */, bool ___limitEventUsage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSGetAppLink(System.Int32)
extern "C"  void IOSWrapper_IOSGetAppLink_m2104367210 (Il2CppObject * __this /* static, unused */, int32_t ___requestID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.IOS.IOSWrapper::IOSFBSdkVersion()
extern "C"  String_t* IOSWrapper_IOSFBSdkVersion_m1954078859 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSFetchDeferredAppLink(System.Int32)
extern "C"  void IOSWrapper_IOSFetchDeferredAppLink_m3878891303 (Il2CppObject * __this /* static, unused */, int32_t ___requestID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.IOS.IOSWrapper::IOSRefreshCurrentAccessToken(System.Int32)
extern "C"  void IOSWrapper_IOSRefreshCurrentAccessToken_m2726451030 (Il2CppObject * __this /* static, unused */, int32_t ___requestID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
