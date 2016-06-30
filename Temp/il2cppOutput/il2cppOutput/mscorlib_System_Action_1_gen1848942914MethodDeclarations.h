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

// System.Action`1<UnityEngine.Advertisements.ShowResult>
struct Action_1_t1848942914;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme1700490209.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m3356518657_gshared (Action_1_t1848942914 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m3356518657(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t1848942914 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m3356518657_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::Invoke(T)
extern "C"  void Action_1_Invoke_m3256301100_gshared (Action_1_t1848942914 * __this, int32_t ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m3256301100(__this, ___obj0, method) ((  void (*) (Action_1_t1848942914 *, int32_t, const MethodInfo*))Action_1_Invoke_m3256301100_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<UnityEngine.Advertisements.ShowResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m1429348848_gshared (Action_1_t1848942914 * __this, int32_t ___obj0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m1429348848(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t1848942914 *, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m1429348848_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<UnityEngine.Advertisements.ShowResult>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m2235204497_gshared (Action_1_t1848942914 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m2235204497(__this, ___result0, method) ((  void (*) (Action_1_t1848942914 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m2235204497_gshared)(__this, ___result0, method)
