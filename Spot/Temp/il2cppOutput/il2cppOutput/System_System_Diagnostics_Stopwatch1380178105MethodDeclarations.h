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

// System.Diagnostics.Stopwatch
struct Stopwatch_t1380178105;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Void System.Diagnostics.Stopwatch::.ctor()
extern "C"  void Stopwatch__ctor_m589309528 (Stopwatch_t1380178105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::.cctor()
extern "C"  void Stopwatch__cctor_m1036688681 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
extern "C"  int64_t Stopwatch_GetTimestamp_m4156329811 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
extern "C"  TimeSpan_t3430258949  Stopwatch_get_Elapsed_m3190561196 (Stopwatch_t1380178105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
extern "C"  int64_t Stopwatch_get_ElapsedTicks_m3689589548 (Stopwatch_t1380178105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Reset()
extern "C"  void Stopwatch_Reset_m3196507227 (Stopwatch_t1380178105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Start()
extern "C"  void Stopwatch_Start_m2051791460 (Stopwatch_t1380178105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
