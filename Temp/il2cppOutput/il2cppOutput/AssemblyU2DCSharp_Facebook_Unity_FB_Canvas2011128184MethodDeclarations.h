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

// Facebook.Unity.FB/Canvas
struct Canvas_t2011128184;
// Facebook.Unity.IPayFacebook
struct IPayFacebook_t351817060;
// System.String
struct String_t;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t2840116163;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"

// System.Void Facebook.Unity.FB/Canvas::.ctor()
extern "C"  void Canvas__ctor_m2573753873 (Canvas_t2011128184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.IPayFacebook Facebook.Unity.FB/Canvas::get_FacebookPayImpl()
extern "C"  Il2CppObject * Canvas_get_FacebookPayImpl_m835902043 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB/Canvas::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void Canvas_Pay_m2406867026 (Il2CppObject * __this /* static, unused */, String_t* ___product0, String_t* ___action1, int32_t ___quantity2, Nullable_1_t1438485399  ___quantityMin3, Nullable_1_t1438485399  ___quantityMax4, String_t* ___requestId5, String_t* ___pricepointId6, String_t* ___testCurrency7, FacebookDelegate_1_t2840116163 * ___callback8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
