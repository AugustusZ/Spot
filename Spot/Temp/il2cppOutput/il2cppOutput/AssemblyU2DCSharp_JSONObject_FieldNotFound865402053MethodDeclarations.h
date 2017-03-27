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

// JSONObject/FieldNotFound
struct FieldNotFound_t865402053;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void JSONObject/FieldNotFound::.ctor(System.Object,System.IntPtr)
extern "C"  void FieldNotFound__ctor_m3637701308 (FieldNotFound_t865402053 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject/FieldNotFound::Invoke(System.String)
extern "C"  void FieldNotFound_Invoke_m1722936676 (FieldNotFound_t865402053 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult JSONObject/FieldNotFound::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FieldNotFound_BeginInvoke_m622233301 (FieldNotFound_t865402053 * __this, String_t* ___name0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject/FieldNotFound::EndInvoke(System.IAsyncResult)
extern "C"  void FieldNotFound_EndInvoke_m4171153578 (FieldNotFound_t865402053 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
