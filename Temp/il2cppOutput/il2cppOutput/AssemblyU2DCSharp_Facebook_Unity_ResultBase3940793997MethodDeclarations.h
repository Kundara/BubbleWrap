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

// Facebook.Unity.ResultBase
struct ResultBase_t3940793997;
// Facebook.Unity.ResultContainer
struct ResultContainer_t79372963;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ResultContainer79372963.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen1438485494.h"

// System.Void Facebook.Unity.ResultBase::.ctor(Facebook.Unity.ResultContainer)
extern "C"  void ResultBase__ctor_m983135577 (ResultBase_t3940793997 * __this, ResultContainer_t79372963 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::.ctor(Facebook.Unity.ResultContainer,System.String,System.Boolean)
extern "C"  void ResultBase__ctor_m1090552072 (ResultBase_t3940793997 * __this, ResultContainer_t79372963 * ___result0, String_t* ___error1, bool ___cancelled2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::get_Error()
extern "C"  String_t* ResultBase_get_Error_m1773188092 (ResultBase_t3940793997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_Error(System.String)
extern "C"  void ResultBase_set_Error_m2688538109 (ResultBase_t3940793997 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultBase::get_ResultDictionary()
extern "C"  Il2CppObject* ResultBase_get_ResultDictionary_m2914765479 (ResultBase_t3940793997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_ResultDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void ResultBase_set_ResultDictionary_m4233896292 (ResultBase_t3940793997 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::get_RawResult()
extern "C"  String_t* ResultBase_get_RawResult_m1178287001 (ResultBase_t3940793997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_RawResult(System.String)
extern "C"  void ResultBase_set_RawResult_m3886662144 (ResultBase_t3940793997 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.ResultBase::get_Cancelled()
extern "C"  bool ResultBase_get_Cancelled_m2606209750 (ResultBase_t3940793997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_Cancelled(System.Boolean)
extern "C"  void ResultBase_set_Cancelled_m3010204965 (ResultBase_t3940793997 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::get_CallbackId()
extern "C"  String_t* ResultBase_get_CallbackId_m2397258286 (ResultBase_t3940793997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_CallbackId(System.String)
extern "C"  void ResultBase_set_CallbackId_m592812157 (ResultBase_t3940793997 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int64> Facebook.Unity.ResultBase::get_CanvasErrorCode()
extern "C"  Nullable_1_t1438485494  ResultBase_get_CanvasErrorCode_m4112526332 (ResultBase_t3940793997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::set_CanvasErrorCode(System.Nullable`1<System.Int64>)
extern "C"  void ResultBase_set_CanvasErrorCode_m3342044979 (ResultBase_t3940793997 * __this, Nullable_1_t1438485494  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::ToString()
extern "C"  String_t* ResultBase_ToString_m2293125649 (ResultBase_t3940793997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.ResultBase::Init(Facebook.Unity.ResultContainer,System.String,System.Boolean,System.String)
extern "C"  void ResultBase_Init_m1575902888 (ResultBase_t3940793997 * __this, ResultContainer_t79372963 * ___result0, String_t* ___error1, bool ___cancelled2, String_t* ___callbackId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::GetErrorValue(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* ResultBase_GetErrorValue_m3521616064 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.ResultBase::GetCancelledValue(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  bool ResultBase_GetCancelledValue_m2792726360 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.ResultBase::GetCallbackId(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* ResultBase_GetCallbackId_m1014883561 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
