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

// Facebook.Unity.LoginResult
struct LoginResult_t1165053605;
// Facebook.Unity.ResultContainer
struct ResultContainer_t79372963;
// Facebook.Unity.AccessToken
struct AccessToken_t3144904884;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ResultContainer79372963.h"
#include "AssemblyU2DCSharp_Facebook_Unity_AccessToken3144904884.h"

// System.Void Facebook.Unity.LoginResult::.ctor(Facebook.Unity.ResultContainer)
extern "C"  void LoginResult__ctor_m3563554835 (LoginResult_t1165053605 * __this, ResultContainer_t79372963 * ___resultContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.LoginResult::.cctor()
extern "C"  void LoginResult__cctor_m2472623831 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.LoginResult::get_AccessToken()
extern "C"  AccessToken_t3144904884 * LoginResult_get_AccessToken_m3898112215 (LoginResult_t1165053605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.LoginResult::set_AccessToken(Facebook.Unity.AccessToken)
extern "C"  void LoginResult_set_AccessToken_m1730859416 (LoginResult_t1165053605 * __this, AccessToken_t3144904884 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.LoginResult::ToString()
extern "C"  String_t* LoginResult_ToString_m1437766589 (LoginResult_t1165053605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
