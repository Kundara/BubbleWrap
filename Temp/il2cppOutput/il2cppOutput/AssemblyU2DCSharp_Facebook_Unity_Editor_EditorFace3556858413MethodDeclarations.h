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

// Facebook.Unity.Editor.EditorFacebook
struct EditorFacebook_t3556858413;
// Facebook.Unity.Editor.IEditorWrapper
struct IEditorWrapper_t3641495383;
// Facebook.Unity.CallbackManager
struct CallbackManager_t1943358823;
// System.String
struct String_t;
// Facebook.Unity.IFacebookCallbackHandler
struct IFacebookCallbackHandler_t69135093;
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
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t2288646710;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t1900386660;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t3690308374;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>
struct FacebookDelegate_1_t573598949;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t2840116163;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t2422421107;
// Facebook.Unity.ResultContainer
struct ResultContainer_t79372963;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_CallbackManager1943358823.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ShareDialogMode698979849.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HideUnityDelegate2364798903.h"
#include "AssemblyU2DCSharp_Facebook_Unity_InitDelegate1475272884.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen3534247419.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ResultContainer79372963.h"

// System.Void Facebook.Unity.Editor.EditorFacebook::.ctor(Facebook.Unity.Editor.IEditorWrapper,Facebook.Unity.CallbackManager)
extern "C"  void EditorFacebook__ctor_m4167189652 (EditorFacebook_t3556858413 * __this, Il2CppObject * ___wrapper0, CallbackManager_t1943358823 * ___callbackManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::.ctor()
extern "C"  void EditorFacebook__ctor_m2898604776 (EditorFacebook_t3556858413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Editor.EditorFacebook::get_LimitEventUsage()
extern "C"  bool EditorFacebook_get_LimitEventUsage_m446404651 (EditorFacebook_t3556858413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void EditorFacebook_set_LimitEventUsage_m1885546402 (EditorFacebook_t3556858413 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.ShareDialogMode Facebook.Unity.Editor.EditorFacebook::get_ShareDialogMode()
extern "C"  int32_t EditorFacebook_get_ShareDialogMode_m2923418195 (EditorFacebook_t3556858413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::set_ShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void EditorFacebook_set_ShareDialogMode_m3075525514 (EditorFacebook_t3556858413 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Editor.EditorFacebook::get_SDKName()
extern "C"  String_t* EditorFacebook_get_SDKName_m1368816703 (EditorFacebook_t3556858413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Editor.EditorFacebook::get_SDKVersion()
extern "C"  String_t* EditorFacebook_get_SDKVersion_m3706011526 (EditorFacebook_t3556858413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.IFacebookCallbackHandler Facebook.Unity.Editor.EditorFacebook::get_EditorGameObject()
extern "C"  Il2CppObject * EditorFacebook_get_EditorGameObject_m4012053215 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::Init(Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void EditorFacebook_Init_m3646259947 (EditorFacebook_t3556858413 * __this, HideUnityDelegate_t2364798903 * ___hideUnityDelegate0, InitDelegate_t1475272884 * ___onInitComplete1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void EditorFacebook_LogInWithReadPermissions_m1719541703 (EditorFacebook_t3556858413 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2634519556 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void EditorFacebook_LogInWithPublishPermissions_m1055352534 (EditorFacebook_t3556858413 * __this, Il2CppObject* ___permissions0, FacebookDelegate_1_t2634519556 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void EditorFacebook_AppRequest_m2513690871 (EditorFacebook_t3556858413 * __this, String_t* ___message0, Nullable_1_t3534247419  ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, Il2CppObject* ___filters4, Il2CppObject* ___excludeIds5, Nullable_1_t1438485399  ___maxRecipients6, String_t* ___data7, String_t* ___title8, FacebookDelegate_1_t2757548155 * ___callback9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void EditorFacebook_ShareLink_m1226029902 (EditorFacebook_t3556858413 * __this, Uri_t2776692961 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t2776692961 * ___photoURL3, FacebookDelegate_1_t1384006650 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void EditorFacebook_FeedShare_m2358891130 (EditorFacebook_t3556858413 * __this, String_t* ___toId0, Uri_t2776692961 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t2776692961 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t1384006650 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void EditorFacebook_GameGroupCreate_m1405236622 (EditorFacebook_t3556858413 * __this, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t2288646710 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void EditorFacebook_GameGroupJoin_m3760488290 (EditorFacebook_t3556858413 * __this, String_t* ___id0, FacebookDelegate_1_t1900386660 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::ActivateApp(System.String)
extern "C"  void EditorFacebook_ActivateApp_m2428467854 (EditorFacebook_t3556858413 * __this, String_t* ___appId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void EditorFacebook_GetAppLink_m2013422516 (EditorFacebook_t3556858413 * __this, FacebookDelegate_1_t3690308374 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void EditorFacebook_AppEventsLogEvent_m2819501101 (EditorFacebook_t3556858413 * __this, String_t* ___logEvent0, Nullable_1_t3844246929  ___valueToSum1, Dictionary_2_t2474804324 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void EditorFacebook_AppEventsLogPurchase_m2976980005 (EditorFacebook_t3556858413 * __this, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t2474804324 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppInvite(System.Uri,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>)
extern "C"  void EditorFacebook_AppInvite_m2336311250 (EditorFacebook_t3556858413 * __this, Uri_t2776692961 * ___appLinkUrl0, Uri_t2776692961 * ___previewImageUrl1, FacebookDelegate_1_t573598949 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::FetchDeferredAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void EditorFacebook_FetchDeferredAppLink_m4220595185 (EditorFacebook_t3556858413 * __this, FacebookDelegate_1_t3690308374 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void EditorFacebook_Pay_m4277897435 (EditorFacebook_t3556858413 * __this, String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t1438485399  ___quantityMin3, Nullable_1_t1438485399  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t2840116163 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
extern "C"  void EditorFacebook_RefreshCurrentAccessToken_m2777720833 (EditorFacebook_t3556858413 * __this, FacebookDelegate_1_t2422421107 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnAppRequestsComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnAppRequestsComplete_m182254466 (EditorFacebook_t3556858413 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGetAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnGetAppLinkComplete_m1876635510 (EditorFacebook_t3556858413 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGroupCreateComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnGroupCreateComplete_m2216904920 (EditorFacebook_t3556858413 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGroupJoinComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnGroupJoinComplete_m903416902 (EditorFacebook_t3556858413 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnLoginComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnLoginComplete_m1517948518 (EditorFacebook_t3556858413 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnShareLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnShareLinkComplete_m1439602806 (EditorFacebook_t3556858413 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnAppInviteComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnAppInviteComplete_m2777137031 (EditorFacebook_t3556858413 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnFetchDeferredAppLinkComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnFetchDeferredAppLinkComplete_m4012291891 (EditorFacebook_t3556858413 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnPayComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnPayComplete_m4197893669 (EditorFacebook_t3556858413 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnRefreshCurrentAccessTokenComplete(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnRefreshCurrentAccessTokenComplete_m3732209652 (EditorFacebook_t3556858413 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnFacebookAuthResponseChange(Facebook.Unity.ResultContainer)
extern "C"  void EditorFacebook_OnFacebookAuthResponseChange_m3073803287 (EditorFacebook_t3556858413 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnUrlResponse(System.String)
extern "C"  void EditorFacebook_OnUrlResponse_m54304299 (EditorFacebook_t3556858413 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
