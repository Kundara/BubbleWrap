﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Converter`2<System.Int64,System.Int32>
struct Converter_2_t2865958965;
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

// System.Void System.Converter`2<System.Int64,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Converter_2__ctor_m4030557746_gshared (Converter_2_t2865958965 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Converter_2__ctor_m4030557746(__this, ___object0, ___method1, method) ((  void (*) (Converter_2_t2865958965 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m4030557746_gshared)(__this, ___object0, ___method1, method)
// TOutput System.Converter`2<System.Int64,System.Int32>::Invoke(TInput)
extern "C"  int32_t Converter_2_Invoke_m1344335470_gshared (Converter_2_t2865958965 * __this, int64_t ___input0, const MethodInfo* method);
#define Converter_2_Invoke_m1344335470(__this, ___input0, method) ((  int32_t (*) (Converter_2_t2865958965 *, int64_t, const MethodInfo*))Converter_2_Invoke_m1344335470_gshared)(__this, ___input0, method)
// System.IAsyncResult System.Converter`2<System.Int64,System.Int32>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Converter_2_BeginInvoke_m3706263499_gshared (Converter_2_t2865958965 * __this, int64_t ___input0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Converter_2_BeginInvoke_m3706263499(__this, ___input0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Converter_2_t2865958965 *, int64_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Converter_2_BeginInvoke_m3706263499_gshared)(__this, ___input0, ___callback1, ___object2, method)
// TOutput System.Converter`2<System.Int64,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Converter_2_EndInvoke_m1458194938_gshared (Converter_2_t2865958965 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Converter_2_EndInvoke_m1458194938(__this, ___result0, method) ((  int32_t (*) (Converter_2_t2865958965 *, Il2CppObject *, const MethodInfo*))Converter_2_EndInvoke_m1458194938_gshared)(__this, ___result0, method)