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
// UnityEngine.Texture
struct Texture_t2243626319;
// System.Collections.Generic.List`1<Feature>
struct List_1_t4270964454;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Single>>
struct Dictionary_2_t453456699;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t1037045868;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Canvas
struct Canvas_t209405766;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LocationInfo1364725149.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Manager
struct  Manager_t3438176157  : public MonoBehaviour_t1158329972
{
public:
	// System.String Manager::mapName
	String_t* ___mapName_2;
	// UnityEngine.Texture Manager::map
	Texture_t2243626319 * ___map_3;
	// System.Collections.Generic.List`1<Feature> Manager::featureList
	List_1_t4270964454 * ___featureList_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Single>> Manager::features
	Dictionary_2_t453456699 * ___features_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> Manager::descriptions
	Dictionary_2_t1037045868 * ___descriptions_6;
	// UnityEngine.LocationInfo Manager::locationInfo
	LocationInfo_t1364725149  ___locationInfo_7;
	// System.Single Manager::viewAngle
	float ___viewAngle_8;
	// UnityEngine.GameObject Manager::mapImage
	GameObject_t1756533147 * ___mapImage_9;
	// UnityEngine.Canvas Manager::canvas
	Canvas_t209405766 * ___canvas_10;
	// UnityEngine.GameObject Manager::labels
	GameObject_t1756533147 * ___labels_11;

public:
	inline static int32_t get_offset_of_mapName_2() { return static_cast<int32_t>(offsetof(Manager_t3438176157, ___mapName_2)); }
	inline String_t* get_mapName_2() const { return ___mapName_2; }
	inline String_t** get_address_of_mapName_2() { return &___mapName_2; }
	inline void set_mapName_2(String_t* value)
	{
		___mapName_2 = value;
		Il2CppCodeGenWriteBarrier(&___mapName_2, value);
	}

	inline static int32_t get_offset_of_map_3() { return static_cast<int32_t>(offsetof(Manager_t3438176157, ___map_3)); }
	inline Texture_t2243626319 * get_map_3() const { return ___map_3; }
	inline Texture_t2243626319 ** get_address_of_map_3() { return &___map_3; }
	inline void set_map_3(Texture_t2243626319 * value)
	{
		___map_3 = value;
		Il2CppCodeGenWriteBarrier(&___map_3, value);
	}

	inline static int32_t get_offset_of_featureList_4() { return static_cast<int32_t>(offsetof(Manager_t3438176157, ___featureList_4)); }
	inline List_1_t4270964454 * get_featureList_4() const { return ___featureList_4; }
	inline List_1_t4270964454 ** get_address_of_featureList_4() { return &___featureList_4; }
	inline void set_featureList_4(List_1_t4270964454 * value)
	{
		___featureList_4 = value;
		Il2CppCodeGenWriteBarrier(&___featureList_4, value);
	}

	inline static int32_t get_offset_of_features_5() { return static_cast<int32_t>(offsetof(Manager_t3438176157, ___features_5)); }
	inline Dictionary_2_t453456699 * get_features_5() const { return ___features_5; }
	inline Dictionary_2_t453456699 ** get_address_of_features_5() { return &___features_5; }
	inline void set_features_5(Dictionary_2_t453456699 * value)
	{
		___features_5 = value;
		Il2CppCodeGenWriteBarrier(&___features_5, value);
	}

	inline static int32_t get_offset_of_descriptions_6() { return static_cast<int32_t>(offsetof(Manager_t3438176157, ___descriptions_6)); }
	inline Dictionary_2_t1037045868 * get_descriptions_6() const { return ___descriptions_6; }
	inline Dictionary_2_t1037045868 ** get_address_of_descriptions_6() { return &___descriptions_6; }
	inline void set_descriptions_6(Dictionary_2_t1037045868 * value)
	{
		___descriptions_6 = value;
		Il2CppCodeGenWriteBarrier(&___descriptions_6, value);
	}

	inline static int32_t get_offset_of_locationInfo_7() { return static_cast<int32_t>(offsetof(Manager_t3438176157, ___locationInfo_7)); }
	inline LocationInfo_t1364725149  get_locationInfo_7() const { return ___locationInfo_7; }
	inline LocationInfo_t1364725149 * get_address_of_locationInfo_7() { return &___locationInfo_7; }
	inline void set_locationInfo_7(LocationInfo_t1364725149  value)
	{
		___locationInfo_7 = value;
	}

	inline static int32_t get_offset_of_viewAngle_8() { return static_cast<int32_t>(offsetof(Manager_t3438176157, ___viewAngle_8)); }
	inline float get_viewAngle_8() const { return ___viewAngle_8; }
	inline float* get_address_of_viewAngle_8() { return &___viewAngle_8; }
	inline void set_viewAngle_8(float value)
	{
		___viewAngle_8 = value;
	}

	inline static int32_t get_offset_of_mapImage_9() { return static_cast<int32_t>(offsetof(Manager_t3438176157, ___mapImage_9)); }
	inline GameObject_t1756533147 * get_mapImage_9() const { return ___mapImage_9; }
	inline GameObject_t1756533147 ** get_address_of_mapImage_9() { return &___mapImage_9; }
	inline void set_mapImage_9(GameObject_t1756533147 * value)
	{
		___mapImage_9 = value;
		Il2CppCodeGenWriteBarrier(&___mapImage_9, value);
	}

	inline static int32_t get_offset_of_canvas_10() { return static_cast<int32_t>(offsetof(Manager_t3438176157, ___canvas_10)); }
	inline Canvas_t209405766 * get_canvas_10() const { return ___canvas_10; }
	inline Canvas_t209405766 ** get_address_of_canvas_10() { return &___canvas_10; }
	inline void set_canvas_10(Canvas_t209405766 * value)
	{
		___canvas_10 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_10, value);
	}

	inline static int32_t get_offset_of_labels_11() { return static_cast<int32_t>(offsetof(Manager_t3438176157, ___labels_11)); }
	inline GameObject_t1756533147 * get_labels_11() const { return ___labels_11; }
	inline GameObject_t1756533147 ** get_address_of_labels_11() { return &___labels_11; }
	inline void set_labels_11(GameObject_t1756533147 * value)
	{
		___labels_11 = value;
		Il2CppCodeGenWriteBarrier(&___labels_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
