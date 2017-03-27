#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.RawImage
struct RawImage_t2749640213;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1079476942;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DeviceCamera
struct  DeviceCamera_t248069567  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.RawImage DeviceCamera::background
	RawImage_t2749640213 * ___background_2;
	// UnityEngine.WebCamTexture DeviceCamera::webCamTexture
	WebCamTexture_t1079476942 * ___webCamTexture_3;
	// UnityEngine.Quaternion DeviceCamera::baseRotation
	Quaternion_t4030073918  ___baseRotation_4;

public:
	inline static int32_t get_offset_of_background_2() { return static_cast<int32_t>(offsetof(DeviceCamera_t248069567, ___background_2)); }
	inline RawImage_t2749640213 * get_background_2() const { return ___background_2; }
	inline RawImage_t2749640213 ** get_address_of_background_2() { return &___background_2; }
	inline void set_background_2(RawImage_t2749640213 * value)
	{
		___background_2 = value;
		Il2CppCodeGenWriteBarrier(&___background_2, value);
	}

	inline static int32_t get_offset_of_webCamTexture_3() { return static_cast<int32_t>(offsetof(DeviceCamera_t248069567, ___webCamTexture_3)); }
	inline WebCamTexture_t1079476942 * get_webCamTexture_3() const { return ___webCamTexture_3; }
	inline WebCamTexture_t1079476942 ** get_address_of_webCamTexture_3() { return &___webCamTexture_3; }
	inline void set_webCamTexture_3(WebCamTexture_t1079476942 * value)
	{
		___webCamTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___webCamTexture_3, value);
	}

	inline static int32_t get_offset_of_baseRotation_4() { return static_cast<int32_t>(offsetof(DeviceCamera_t248069567, ___baseRotation_4)); }
	inline Quaternion_t4030073918  get_baseRotation_4() const { return ___baseRotation_4; }
	inline Quaternion_t4030073918 * get_address_of_baseRotation_4() { return &___baseRotation_4; }
	inline void set_baseRotation_4(Quaternion_t4030073918  value)
	{
		___baseRotation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
