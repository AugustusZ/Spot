#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Feature
struct  Feature_t606876026  : public Il2CppObject
{
public:
	// System.Single Feature::lon
	float ___lon_0;
	// System.Single Feature::lat
	float ___lat_1;
	// System.String Feature::building
	String_t* ___building_2;
	// System.String Feature::description
	String_t* ___description_3;

public:
	inline static int32_t get_offset_of_lon_0() { return static_cast<int32_t>(offsetof(Feature_t606876026, ___lon_0)); }
	inline float get_lon_0() const { return ___lon_0; }
	inline float* get_address_of_lon_0() { return &___lon_0; }
	inline void set_lon_0(float value)
	{
		___lon_0 = value;
	}

	inline static int32_t get_offset_of_lat_1() { return static_cast<int32_t>(offsetof(Feature_t606876026, ___lat_1)); }
	inline float get_lat_1() const { return ___lat_1; }
	inline float* get_address_of_lat_1() { return &___lat_1; }
	inline void set_lat_1(float value)
	{
		___lat_1 = value;
	}

	inline static int32_t get_offset_of_building_2() { return static_cast<int32_t>(offsetof(Feature_t606876026, ___building_2)); }
	inline String_t* get_building_2() const { return ___building_2; }
	inline String_t** get_address_of_building_2() { return &___building_2; }
	inline void set_building_2(String_t* value)
	{
		___building_2 = value;
		Il2CppCodeGenWriteBarrier(&___building_2, value);
	}

	inline static int32_t get_offset_of_description_3() { return static_cast<int32_t>(offsetof(Feature_t606876026, ___description_3)); }
	inline String_t* get_description_3() const { return ___description_3; }
	inline String_t** get_address_of_description_3() { return &___description_3; }
	inline void set_description_3(String_t* value)
	{
		___description_3 = value;
		Il2CppCodeGenWriteBarrier(&___description_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
