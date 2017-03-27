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

// UnityEngine.WebCamTexture
struct WebCamTexture_t1079476942;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WebCamTexture1079476942.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.WebCamTexture::.ctor(System.Int32,System.Int32)
extern "C"  void WebCamTexture__ctor_m3080992457 (WebCamTexture_t1079476942 * __this, int32_t ___requestedWidth0, int32_t ___requestedHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
extern "C"  void WebCamTexture_Internal_CreateWebCamTexture_m1601948981 (Il2CppObject * __this /* static, unused */, WebCamTexture_t1079476942 * ___self0, String_t* ___scriptingDevice1, int32_t ___requestedWidth2, int32_t ___requestedHeight3, int32_t ___maxFramerate4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Play()
extern "C"  void WebCamTexture_Play_m1997372813 (WebCamTexture_t1079476942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)
extern "C"  void WebCamTexture_INTERNAL_CALL_Play_m3743409567 (Il2CppObject * __this /* static, unused */, WebCamTexture_t1079476942 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.WebCamTexture::get_videoRotationAngle()
extern "C"  int32_t WebCamTexture_get_videoRotationAngle_m1556283588 (WebCamTexture_t1079476942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
