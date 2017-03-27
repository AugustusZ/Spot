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

// UnityEngine.LocationService
struct LocationService_t1617852714;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LocationInfo1364725149.h"

// System.Void UnityEngine.LocationService::.ctor()
extern "C"  void LocationService__ctor_m445686241 (LocationService_t1617852714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
extern "C"  LocationInfo_t1364725149  LocationService_get_lastData_m2521124837 (LocationService_t1617852714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocationService::Start(System.Single,System.Single)
extern "C"  void LocationService_Start_m1102337569 (LocationService_t1617852714 * __this, float ___desiredAccuracyInMeters0, float ___updateDistanceInMeters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocationService::Start()
extern "C"  void LocationService_Start_m3920984473 (LocationService_t1617852714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
