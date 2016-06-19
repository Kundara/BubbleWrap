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

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// System.Uri
struct Uri_t2776692961;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// Facebook.Unity.AccessToken
struct AccessToken_t3144904884;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3781852593;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.Unity.Utilities::get_CommandLineArguments()
extern "C"  Dictionary_2_t2606186806 * Utilities_get_CommandLineArguments_m1198534336 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Facebook.Unity.Utilities::TotalSeconds(System.DateTime)
extern "C"  int64_t Utilities_TotalSeconds_m2621164156 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::ToCommaSeparateList(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  String_t* Utilities_ToCommaSeparateList_m2708553843 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::AbsoluteUrlOrEmptyString(System.Uri)
extern "C"  String_t* Utilities_AbsoluteUrlOrEmptyString_m3442024491 (Il2CppObject * __this /* static, unused */, Uri_t2776692961 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::GetUserAgent(System.String,System.String)
extern "C"  String_t* Utilities_GetUserAgent_m3046302949 (Il2CppObject * __this /* static, unused */, String_t* ___productName0, String_t* ___productVersion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::ToJson(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* Utilities_ToJson_m675583844 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___dictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.Utilities::ParseAccessTokenFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  AccessToken_t3144904884 * Utilities_ParseAccessTokenFromResult_m2258932600 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::ToStringNullOk(System.Object)
extern "C"  String_t* Utilities_ToStringNullOk_m3562346640 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::FormatToString(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  String_t* Utilities_FormatToString_m2347031214 (Il2CppObject * __this /* static, unused */, String_t* ___baseString0, String_t* ___className1, Il2CppObject* ___propertiesAndValues2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.Utilities::ParseExpirationDateFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  DateTime_t339033936  Utilities_ParseExpirationDateFromResult_m658593134 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Facebook.Unity.Utilities::ParseLastRefreshFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Nullable_1_t3225071844  Utilities_ParseLastRefreshFromResult_m266401315 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Facebook.Unity.Utilities::ParsePermissionFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject* Utilities_ParsePermissionFromResult_m4171489813 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___resultDictionary0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.Utilities::FromTimestamp(System.Int32)
extern "C"  DateTime_t339033936  Utilities_FromTimestamp_m476580852 (Il2CppObject * __this /* static, unused */, int32_t ___timestamp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::<ParsePermissionFromResult>m__37(System.Object)
extern "C"  String_t* Utilities_U3CParsePermissionFromResultU3Em__37_m3935677919 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___permission0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
