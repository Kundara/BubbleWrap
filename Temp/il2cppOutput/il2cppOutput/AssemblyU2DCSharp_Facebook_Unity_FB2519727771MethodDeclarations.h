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

// Facebook.Unity.FB
struct FB_t2519727771;
// System.String
struct String_t;
// Facebook.Unity.IFacebook
struct IFacebook_t4281310222;
// Facebook.Unity.FB/OnDLLLoaded
struct OnDLLLoaded_t1601980106;
// Facebook.Unity.InitDelegate
struct InitDelegate_t1475272884;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t2364798903;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_t2634519556;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t2757548155;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// System.Uri
struct Uri_t2776692961;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>
struct FacebookDelegate_1_t1384006650;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t2979309097;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3781852593;
// UnityEngine.WWWForm
struct WWWForm_t3999572776;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t3690308374;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t2288646710;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t1900386660;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Facebook_Unity_FB_OnDLLLoaded1601980106.h"
#include "AssemblyU2DCSharp_Facebook_Unity_InitDelegate1475272884.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HideUnityDelegate2364798903.h"
#include "AssemblyU2DCSharp_Facebook_Unity_OGActionType648209511.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "System_System_Uri2776692961.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HttpMethod969347464.h"
#include "UnityEngine_UnityEngine_WWWForm3999572776.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"

// System.Void Facebook.Unity.FB::.ctor()
extern "C"  void FB__ctor_m1320841742 (FB_t2519727771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::.cctor()
extern "C"  void FB__cctor_m1809292127 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FB::get_AppId()
extern "C"  String_t* FB_get_AppId_m2778791106 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_AppId(System.String)
extern "C"  void FB_set_AppId_m1534276087 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FB::get_GraphApiVersion()
extern "C"  String_t* FB_get_GraphApiVersion_m4202202290 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_GraphApiVersion(System.String)
extern "C"  void FB_set_GraphApiVersion_m2407933767 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FB::get_IsLoggedIn()
extern "C"  bool FB_get_IsLoggedIn_m2733743004 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FB::get_IsInitialized()
extern "C"  bool FB_get_IsInitialized_m24459329 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FB::get_LimitAppEventUsage()
extern "C"  bool FB_get_LimitAppEventUsage_m754763064 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_LimitAppEventUsage(System.Boolean)
extern "C"  void FB_set_LimitAppEventUsage_m2204318807 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.IFacebook Facebook.Unity.FB::get_FacebookImpl()
extern "C"  Il2CppObject * FB_get_FacebookImpl_m3249694518 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_FacebookImpl(Facebook.Unity.IFacebook)
extern "C"  void FB_set_FacebookImpl_m2914967019 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FB::get_FacebookDomain()
extern "C"  String_t* FB_get_FacebookDomain_m592939942 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_FacebookDomain(System.String)
extern "C"  void FB_set_FacebookDomain_m2340323973 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.FB/OnDLLLoaded Facebook.Unity.FB::get_OnDLLLoadedDelegate()
extern "C"  OnDLLLoaded_t1601980106 * FB_get_OnDLLLoadedDelegate_m1943792301 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_OnDLLLoadedDelegate(Facebook.Unity.FB/OnDLLLoaded)
extern "C"  void FB_set_OnDLLLoadedDelegate_m3998643868 (Il2CppObject * __this /* static, unused */, OnDLLLoaded_t1601980106 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::Init(Facebook.Unity.InitDelegate,Facebook.Unity.HideUnityDelegate,System.String)
extern "C"  void FB_Init_m2331630741 (Il2CppObject * __this /* static, unused */, InitDelegate_t1475272884 * ___onInitComplete0, HideUnityDelegate_t2364798903 * ___onHideUnity1, String_t* ___authResponse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::Init(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void FB_Init_m3349697964 (Il2CppObject * __this /* static, unused */, String_t* ___appId0, bool ___cookie1, bool ___logging2, bool ___status3, bool ___xfbml4, bool ___frictionlessRequests5, String_t* ___authResponse6, String_t* ___javascriptSDKLocale7, HideUnityDelegate_t2364798903 * ___onHideUnity8, InitDelegate_t1475272884 * ___onInitComplete9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void FB_LogInWithPublishPermissions_m3160456444 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___permissions0, FacebookDelegate_1_t2634519556 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void FB_LogInWithReadPermissions_m3440569185 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___permissions0, FacebookDelegate_1_t2634519556 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogOut()
extern "C"  void FB_LogOut_m399663904 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::AppRequest(System.String,Facebook.Unity.OGActionType,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FB_AppRequest_m236900746 (Il2CppObject * __this /* static, unused */, String_t* ___message0, int32_t ___actionType1, String_t* ___objectId2, Il2CppObject* ___to3, String_t* ___data4, String_t* ___title5, FacebookDelegate_1_t2757548155 * ___callback6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::AppRequest(System.String,Facebook.Unity.OGActionType,System.String,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FB_AppRequest_m1168120021 (Il2CppObject * __this /* static, unused */, String_t* ___message0, int32_t ___actionType1, String_t* ___objectId2, Il2CppObject* ___filters3, Il2CppObject* ___excludeIds4, Nullable_1_t1438485399  ___maxRecipients5, String_t* ___data6, String_t* ___title7, FacebookDelegate_1_t2757548155 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::AppRequest(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FB_AppRequest_m3737494955 (Il2CppObject * __this /* static, unused */, String_t* ___message0, Il2CppObject* ___to1, Il2CppObject* ___filters2, Il2CppObject* ___excludeIds3, Nullable_1_t1438485399  ___maxRecipients4, String_t* ___data5, String_t* ___title6, FacebookDelegate_1_t2757548155 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void FB_ShareLink_m1620681588 (Il2CppObject * __this /* static, unused */, Uri_t2776692961 * ___contentURL0, String_t* ___contentTitle1, String_t* ___contentDescription2, Uri_t2776692961 * ___photoURL3, FacebookDelegate_1_t1384006650 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void FB_FeedShare_m3254004512 (Il2CppObject * __this /* static, unused */, String_t* ___toId0, Uri_t2776692961 * ___link1, String_t* ___linkName2, String_t* ___linkCaption3, String_t* ___linkDescription4, Uri_t2776692961 * ___picture5, String_t* ___mediaSource6, FacebookDelegate_1_t1384006650 * ___callback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::API(System.String,Facebook.Unity.HttpMethod,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  void FB_API_m2514225622 (Il2CppObject * __this /* static, unused */, String_t* ___query0, int32_t ___method1, FacebookDelegate_1_t2979309097 * ___callback2, Il2CppObject* ___formData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::API(System.String,Facebook.Unity.HttpMethod,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>,UnityEngine.WWWForm)
extern "C"  void FB_API_m3866078070 (Il2CppObject * __this /* static, unused */, String_t* ___query0, int32_t ___method1, FacebookDelegate_1_t2979309097 * ___callback2, WWWForm_t3999572776 * ___formData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::ActivateApp()
extern "C"  void FB_ActivateApp_m3791592346 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void FB_GetAppLink_m2554518606 (Il2CppObject * __this /* static, unused */, FacebookDelegate_1_t3690308374 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void FB_GameGroupCreate_m3895171764 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t* ___description1, String_t* ___privacy2, FacebookDelegate_1_t2288646710 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void FB_GameGroupJoin_m2344352904 (Il2CppObject * __this /* static, unused */, String_t* ___id0, FacebookDelegate_1_t1900386660 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogAppEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void FB_LogAppEvent_m1611691066 (Il2CppObject * __this /* static, unused */, String_t* ___logEvent0, Nullable_1_t3844246929  ___valueToSum1, Dictionary_2_t2474804324 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void FB_LogPurchase_m757512239 (Il2CppObject * __this /* static, unused */, float ___logPurchase0, String_t* ___currency1, Dictionary_2_t2474804324 * ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogVersion()
extern "C"  void FB_LogVersion_m4250994090 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
