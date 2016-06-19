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

// Facebook.Unity.Utilities/Callback`1<System.Object>
struct Callback_1_t2504244479;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Facebook.Unity.Utilities/Callback`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback_1__ctor_m1218655815_gshared (Callback_1_t2504244479 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Callback_1__ctor_m1218655815(__this, ___object0, ___method1, method) ((  void (*) (Callback_1_t2504244479 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Callback_1__ctor_m1218655815_gshared)(__this, ___object0, ___method1, method)
// System.Void Facebook.Unity.Utilities/Callback`1<System.Object>::Invoke(T)
extern "C"  void Callback_1_Invoke_m4211213341_gshared (Callback_1_t2504244479 * __this, Il2CppObject * ___obj0, const MethodInfo* method);
#define Callback_1_Invoke_m4211213341(__this, ___obj0, method) ((  void (*) (Callback_1_t2504244479 *, Il2CppObject *, const MethodInfo*))Callback_1_Invoke_m4211213341_gshared)(__this, ___obj0, method)
// System.IAsyncResult Facebook.Unity.Utilities/Callback`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_1_BeginInvoke_m1576322282_gshared (Callback_1_t2504244479 * __this, Il2CppObject * ___obj0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Callback_1_BeginInvoke_m1576322282(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Callback_1_t2504244479 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Callback_1_BeginInvoke_m1576322282_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void Facebook.Unity.Utilities/Callback`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_1_EndInvoke_m3978486743_gshared (Callback_1_t2504244479 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Callback_1_EndInvoke_m3978486743(__this, ___result0, method) ((  void (*) (Callback_1_t2504244479 *, Il2CppObject *, const MethodInfo*))Callback_1_EndInvoke_m3978486743_gshared)(__this, ___result0, method)
