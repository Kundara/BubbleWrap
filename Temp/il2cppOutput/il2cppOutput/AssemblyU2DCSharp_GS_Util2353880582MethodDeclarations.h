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

// GS.Util
struct Util_t2353880582;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "mscorlib_System_Object837106420.h"

// System.Void GS.Util::.ctor()
extern "C"  void Util__ctor_m3362031623 (Util_t2353880582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GS.Util::GetPictureURL(System.String,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String)
extern "C"  String_t* Util_GetPictureURL_m2945093727 (Il2CppObject * __this /* static, unused */, String_t* ___facebookID0, Nullable_1_t1438485399  ___width1, Nullable_1_t1438485399  ___height2, String_t* ___type3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GS.Util::DeserializePictureURLString(System.String)
extern "C"  String_t* Util_DeserializePictureURLString_m2446422841 (Il2CppObject * __this /* static, unused */, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GS.Util::DeserializePictureURLObject(System.Object)
extern "C"  String_t* Util_DeserializePictureURLObject_m2697646301 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___pictureObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
