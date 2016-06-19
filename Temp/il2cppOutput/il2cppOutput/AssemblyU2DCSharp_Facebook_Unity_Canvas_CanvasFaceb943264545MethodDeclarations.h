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

// Facebook.Unity.Canvas.CanvasFacebook
struct CanvasFacebook_t943264545;
// Facebook.Unity.Canvas.ICanvasJSWrapper
struct ICanvasJSWrapper_t1740207084;
// Facebook.Unity.CallbackManager
struct CallbackManager_t1943358823;
// System.String
struct String_t;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t2364798903;
// Facebook.Unity.InitDelegate
struct InitDelegate_t1475272884;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_t2634519556;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t2757548155;
// System.Uri
struct Uri_t2776692961;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>
struct FacebookDelegate_1_t1384006650;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t2840116163;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t2288646710;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t1900386660;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t3690308374;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// Facebook.Unity.ResultContainer
struct ResultContainer_t79372963;
// Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>
struct Callback_1_t1746511022;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_CallbackManager1943358823.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HideUnityDelegate2364798903.h"
#include "AssemblyU2DCSharp_Facebook_Unity_InitDelegate1475272884.h"
#include "mscorlib_System_Nullable_1_gen3534247419.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ResultContainer79372963.h"

// System.Void Facebook.Unity.Canvas.CanvasFacebook::.ctor()
extern "C"  void CanvasFacebook__ctor_m739104072 (CanvasFacebook_t943264545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::.ctor(Facebook.Unity.Canvas.ICanvasJSWrapper,Facebook.Unity.CallbackManager)
extern "C"  void CanvasFacebook__ctor_m4105830901 (CanvasFacebook_t943264545 * __this, Il2CppObject * ___canvasJSWrapper0, CallbackManager_t1943358823 * ___callbackManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Canvas.CanvasFacebook::get_LimitEventUsage()
extern "C"  bool CanvasFacebook_get_LimitEventUsage_m3345519243 (CanvasFacebook_t943264545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void CanvasFacebook_set_LimitEventUsage_m3225057794 (CanvasFacebook_t943264545 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKName()
extern "C"  String_t* CanvasFacebook_get_SDKName_m3266565791 (CanvasFacebook_t943264545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKVersion()
extern "C"  String_t* CanvasFacebook_get_SDKVersion_m599607590 (CanvasFacebook_t943264545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKUserAgent()
extern "C"  String_t* CanvasFacebook_get_SDKUserAgent_m2941672072 (CanvasFacebook_t943264545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::Init(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,System.String,System.Boolean,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void CanvasFacebook_Init_m2928059955 (CanvasFacebook_t943264545 * __this, String_t* ___appId0, bool ___cookie1, bool ___logging2, bool ___status3, bool ___xfbml4, String_t* ___channelUrl5, String_t* ___authResponse6, bool ___frictionlessRequests7, String_t* ___javascriptSDKLocale8, bool ___loadDebugJSSDK9, HideUnityDelegate_t2364798903 * ___hideUnityDelegate10, InitDelegate_t1475272884 * ___onInitComplete11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void CanvasFacebook_LogInWithPublishPermissions_m3253303606 (CanvasFacebook_t943264545 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2634519556 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void CanvasFacebook_LogInWithReadPermissions_m991701351 (CanvasFacebook_t943264545 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2634519556 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogOut()
extern "C"  void CanvasFacebook_LogOut_m3840632614 (CanvasFacebook_t943264545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void CanvasFacebook_AppRequest_m1586172567 (CanvasFacebook_t943264545 * __this, String_t* ___message0, Nullable_1_t3534247419  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t1438485399  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t2757548155 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::ActivateApp(System.String)
extern "C"  void CanvasFacebook_ActivateApp_m1120926766 (CanvasFacebook_t943264545 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void CanvasFacebook_ShareLink_m3958304174 (CanvasFacebook_t943264545 * __this, Uri_t2776692961 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t2776692961 * ___photoURL3, FacebookDelegate_1_t1384006650 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void CanvasFacebook_FeedShare_m769658074 (CanvasFacebook_t943264545 * __this, String_t* ___toId0, Uri_t2776692961 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t2776692961 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t1384006650 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void CanvasFacebook_Pay_m362726011 (CanvasFacebook_t943264545 * __this, String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t1438485399  ___quantityMin3, Nullable_1_t1438485399  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t2840116163 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void CanvasFacebook_GameGroupCreate_m3606919150 (CanvasFacebook_t943264545 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t2288646710 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void CanvasFacebook_GameGroupJoin_m352387522 (CanvasFacebook_t943264545 * __this, String_t* ___id0, FacebookDelegate_1_t1900386660 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void CanvasFacebook_GetAppLink_m3607313748 (CanvasFacebook_t943264545 * __this, FacebookDelegate_1_t3690308374 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void CanvasFacebook_AppEventsLogEvent_m3544038861 (CanvasFacebook_t943264545 * __this, String_t* ___logEvent0, Nullable_1_t3844246929  ___valueToSum1, Dictionary_2_t2474804324 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void CanvasFacebook_AppEventsLogPurchase_m272100805 (CanvasFacebook_t943264545 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t2474804324 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnLoginComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnLoginComplete_m151572678 (CanvasFacebook_t943264545 * __this, ResultContainer_t79372963 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGetAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnGetAppLinkComplete_m1510402326 (CanvasFacebook_t943264545 * __this, ResultContainer_t79372963 * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnFacebookAuthResponseChange(System.String)
extern "C"  void CanvasFacebook_OnFacebookAuthResponseChange_m1216774408 (CanvasFacebook_t943264545 * __this, String_t* ___responseJsonData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnFacebookAuthResponseChange(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnFacebookAuthResponseChange_m1700699575 (CanvasFacebook_t943264545 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnPayComplete(System.String)
extern "C"  void CanvasFacebook_OnPayComplete_m169414778 (CanvasFacebook_t943264545 * __this, String_t* ___responseJsonData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnPayComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnPayComplete_m3226640517 (CanvasFacebook_t943264545 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnAppRequestsComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnAppRequestsComplete_m1713927650 (CanvasFacebook_t943264545 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnShareLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnShareLinkComplete_m3228904150 (CanvasFacebook_t943264545 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGroupCreateComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnGroupCreateComplete_m3748578104 (CanvasFacebook_t943264545 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGroupJoinComplete(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_OnGroupJoinComplete_m2692718246 (CanvasFacebook_t943264545 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnUrlResponse(System.String)
extern "C"  void CanvasFacebook_OnUrlResponse_m1932736459 (CanvasFacebook_t943264545 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::FormatAuthResponse(Facebook.Unity.ResultContainer,Facebook.Unity.Utilities/Callback`1<Facebook.Unity.ResultContainer>)
extern "C"  void CanvasFacebook_FormatAuthResponse_m3391774954 (Il2CppObject * __this /* static, unused */, ResultContainer_t79372963 * ___result0, Callback_1_t1746511022 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::PayImpl(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void CanvasFacebook_PayImpl_m4099109563 (CanvasFacebook_t943264545 * __this, String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t1438485399  ___quantityMin3, Nullable_1_t1438485399  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t2840116163 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::<OnLoginComplete>m__2E(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_U3COnLoginCompleteU3Em__2E_m3648266690 (CanvasFacebook_t943264545 * __this, ResultContainer_t79372963 * ___formattedResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::<OnFacebookAuthResponseChange>m__2F(Facebook.Unity.ResultContainer)
extern "C"  void CanvasFacebook_U3COnFacebookAuthResponseChangeU3Em__2F_m2761374592 (Il2CppObject * __this /* static, unused */, ResultContainer_t79372963 * ___formattedResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
