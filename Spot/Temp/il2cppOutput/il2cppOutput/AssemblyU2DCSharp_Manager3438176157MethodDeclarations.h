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

// Manager
struct Manager_t3438176157;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Manager::.ctor()
extern "C"  void Manager__ctor_m136283130 (Manager_t3438176157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::Awake()
extern "C"  void Manager_Awake_m4227396585 (Manager_t3438176157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::Start()
extern "C"  void Manager_Start_m1058168098 (Manager_t3438176157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::Update()
extern "C"  void Manager_Update_m1254770213 (Manager_t3438176157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::OnGUI()
extern "C"  void Manager_OnGUI_m2832334690 (Manager_t3438176157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::DisplayText()
extern "C"  void Manager_DisplayText_m3592808815 (Manager_t3438176157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::Setup()
extern "C"  void Manager_Setup_m4248827295 (Manager_t3438176157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::CreateMap()
extern "C"  void Manager_CreateMap_m1806858484 (Manager_t3438176157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::PrepareMap()
extern "C"  void Manager_PrepareMap_m2608402845 (Manager_t3438176157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Manager::GetBearingAngle(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Manager_GetBearingAngle_m1521317297 (Manager_t3438176157 * __this, float ___lat10, float ___lon11, float ___lat22, float ___lon23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Manager::GetDistanceInBetweenInMeter(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Manager_GetDistanceInBetweenInMeter_m2597362150 (Manager_t3438176157 * __this, float ___lat10, float ___lon11, float ___lat22, float ___lon23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Manager::GetOffsetFromCenter(System.Single,System.Single,System.Boolean&)
extern "C"  float Manager_GetOffsetFromCenter_m4222516225 (Manager_t3438176157 * __this, float ___bearing0, float ___heading1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Manager::GetFontSizeFromDistance(System.Single)
extern "C"  int32_t Manager_GetFontSizeFromDistance_m3903869432 (Manager_t3438176157 * __this, float ___distance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::DisplayMap(System.Boolean)
extern "C"  void Manager_DisplayMap_m3016694141 (Manager_t3438176157 * __this, bool ___displayMap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::CleanUpLabels()
extern "C"  void Manager_CleanUpLabels_m4203233089 (Manager_t3438176157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Manager::DisplayJSON(System.String)
extern "C"  void Manager_DisplayJSON_m3367047320 (Manager_t3438176157 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Manager::DownloadSpheres()
extern "C"  Il2CppObject * Manager_DownloadSpheres_m1017290304 (Manager_t3438176157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
