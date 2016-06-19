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

// GS.FBManager/LoadPictureCallback
struct LoadPictureCallback_t3065091453;
// System.Object
struct Il2CppObject;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void GS.FBManager/LoadPictureCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void LoadPictureCallback__ctor_m4200951396 (LoadPictureCallback_t3065091453 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager/LoadPictureCallback::Invoke(UnityEngine.Texture2D,System.Int32)
extern "C"  void LoadPictureCallback_Invoke_m1036249209 (LoadPictureCallback_t3065091453 * __this, Texture2D_t2509538522 * ___texture0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_LoadPictureCallback_t3065091453(Il2CppObject* delegate, Texture2D_t2509538522 * ___texture0, int32_t ___index1);
// System.IAsyncResult GS.FBManager/LoadPictureCallback::BeginInvoke(UnityEngine.Texture2D,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LoadPictureCallback_BeginInvoke_m1265859102 (LoadPictureCallback_t3065091453 * __this, Texture2D_t2509538522 * ___texture0, int32_t ___index1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GS.FBManager/LoadPictureCallback::EndInvoke(System.IAsyncResult)
extern "C"  void LoadPictureCallback_EndInvoke_m2035790452 (LoadPictureCallback_t3065091453 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
