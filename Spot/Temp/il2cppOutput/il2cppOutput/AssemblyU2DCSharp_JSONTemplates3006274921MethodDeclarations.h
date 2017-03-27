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

// JSONObject
struct JSONObject_t1971882247;
// System.Object
struct Il2CppObject;
// UnityEngine.RectOffset
struct RectOffset_t3387826427;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_JSONObject1971882247.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_RectOffset3387826427.h"
#include "UnityEngine_UnityEngine_AnimationCurve3306541151.h"
#include "UnityEngine_UnityEngine_Keyframe1449471340.h"

// JSONObject JSONTemplates::TOJSON(System.Object)
extern "C"  JSONObject_t1971882247 * JSONTemplates_TOJSON_m2221174251 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 JSONTemplates::ToVector2(JSONObject)
extern "C"  Vector2_t2243707579  JSONTemplates_ToVector2_m4255645740 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromVector2(UnityEngine.Vector2)
extern "C"  JSONObject_t1971882247 * JSONTemplates_FromVector2_m1084394455 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromVector3(UnityEngine.Vector3)
extern "C"  JSONObject_t1971882247 * JSONTemplates_FromVector3_m3510317143 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 JSONTemplates::ToVector3(JSONObject)
extern "C"  Vector3_t2243707580  JSONTemplates_ToVector3_m4142347206 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromVector4(UnityEngine.Vector4)
extern "C"  JSONObject_t1971882247 * JSONTemplates_FromVector4_m3216565463 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 JSONTemplates::ToVector4(JSONObject)
extern "C"  Vector4_t2243707581  JSONTemplates_ToVector4_m362392788 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromMatrix4x4(UnityEngine.Matrix4x4)
extern "C"  JSONObject_t1971882247 * JSONTemplates_FromMatrix4x4_m3949774999 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 JSONTemplates::ToMatrix4x4(JSONObject)
extern "C"  Matrix4x4_t2933234003  JSONTemplates_ToMatrix4x4_m3802232620 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromQuaternion(UnityEngine.Quaternion)
extern "C"  JSONObject_t1971882247 * JSONTemplates_FromQuaternion_m2649516947 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion JSONTemplates::ToQuaternion(JSONObject)
extern "C"  Quaternion_t4030073918  JSONTemplates_ToQuaternion_m3034868414 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromColor(UnityEngine.Color)
extern "C"  JSONObject_t1971882247 * JSONTemplates_FromColor_m773919959 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color JSONTemplates::ToColor(JSONObject)
extern "C"  Color_t2020392075  JSONTemplates_ToColor_m1289362228 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromLayerMask(UnityEngine.LayerMask)
extern "C"  JSONObject_t1971882247 * JSONTemplates_FromLayerMask_m1188911255 (Il2CppObject * __this /* static, unused */, LayerMask_t3188175821  ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask JSONTemplates::ToLayerMask(JSONObject)
extern "C"  LayerMask_t3188175821  JSONTemplates_ToLayerMask_m1877598044 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromRect(UnityEngine.Rect)
extern "C"  JSONObject_t1971882247 * JSONTemplates_FromRect_m2670430419 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect JSONTemplates::ToRect(JSONObject)
extern "C"  Rect_t3681755626  JSONTemplates_ToRect_m4037111550 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromRectOffset(UnityEngine.RectOffset)
extern "C"  JSONObject_t1971882247 * JSONTemplates_FromRectOffset_m2102731279 (Il2CppObject * __this /* static, unused */, RectOffset_t3387826427 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset JSONTemplates::ToRectOffset(JSONObject)
extern "C"  RectOffset_t3387826427 * JSONTemplates_ToRectOffset_m75654846 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve JSONTemplates::ToAnimationCurve(JSONObject)
extern "C"  AnimationCurve_t3306541151 * JSONTemplates_ToAnimationCurve_m2654279102 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromAnimationCurve(UnityEngine.AnimationCurve)
extern "C"  JSONObject_t1971882247 * JSONTemplates_FromAnimationCurve_m448168407 (Il2CppObject * __this /* static, unused */, AnimationCurve_t3306541151 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe JSONTemplates::ToKeyframe(JSONObject)
extern "C"  Keyframe_t1449471340  JSONTemplates_ToKeyframe_m1491004926 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONTemplates::FromKeyframe(UnityEngine.Keyframe)
extern "C"  JSONObject_t1971882247 * JSONTemplates_FromKeyframe_m1523648219 (Il2CppObject * __this /* static, unused */, Keyframe_t1449471340  ___k0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONTemplates::.cctor()
extern "C"  void JSONTemplates__cctor_m1639877595 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
