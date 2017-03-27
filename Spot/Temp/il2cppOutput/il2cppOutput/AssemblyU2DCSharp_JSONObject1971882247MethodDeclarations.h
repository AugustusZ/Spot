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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t3886661509;
// JSONObject/AddJSONContents
struct AddJSONContents_t3850664647;
// JSONObject[]
struct JSONObjectU5BU5D_t2270799614;
// System.String
struct String_t;
// JSONObject/FieldNotFound
struct FieldNotFound_t865402053;
// JSONObject/GetFieldResponse
struct GetFieldResponse_t1259369279;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// UnityEngine.WWWForm
struct WWWForm_t3950226929;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_JSONObject_Type1314578890.h"
#include "AssemblyU2DCSharp_JSONObject_AddJSONContents3850664647.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_JSONObject1971882247.h"
#include "AssemblyU2DCSharp_JSONObject_FieldNotFound865402053.h"
#include "AssemblyU2DCSharp_JSONObject_GetFieldResponse1259369279.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void JSONObject::.ctor(JSONObject/Type)
extern "C"  void JSONObject__ctor_m4071571216 (JSONObject_t1971882247 * __this, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Boolean)
extern "C"  void JSONObject__ctor_m840431321 (JSONObject_t1971882247 * __this, bool ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Single)
extern "C"  void JSONObject__ctor_m3839245543 (JSONObject_t1971882247 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Int32)
extern "C"  void JSONObject__ctor_m2801954363 (JSONObject_t1971882247 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Int64)
extern "C"  void JSONObject__ctor_m3964753740 (JSONObject_t1971882247 * __this, int64_t ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void JSONObject__ctor_m1919544205 (JSONObject_t1971882247 * __this, Dictionary_2_t3943999495 * ___dic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,JSONObject>)
extern "C"  void JSONObject__ctor_m3429744944 (JSONObject_t1971882247 * __this, Dictionary_2_t3886661509 * ___dic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(JSONObject/AddJSONContents)
extern "C"  void JSONObject__ctor_m3888149271 (JSONObject_t1971882247 * __this, AddJSONContents_t3850664647 * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(JSONObject[])
extern "C"  void JSONObject__ctor_m398818817 (JSONObject_t1971882247 * __this, JSONObjectU5BU5D_t2270799614* ___objs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor()
extern "C"  void JSONObject__ctor_m3429292120 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  void JSONObject__ctor_m1387305321 (JSONObject_t1971882247 * __this, String_t* ___str0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_isContainer()
extern "C"  bool JSONObject_get_isContainer_m3175857226 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JSONObject::get_Count()
extern "C"  int32_t JSONObject_get_Count_m2165978410 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JSONObject::get_f()
extern "C"  float JSONObject_get_f_m1158093019 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_nullJO()
extern "C"  JSONObject_t1971882247 * JSONObject_get_nullJO_m3951718059 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_obj()
extern "C"  JSONObject_t1971882247 * JSONObject_get_obj_m3201114506 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_arr()
extern "C"  JSONObject_t1971882247 * JSONObject_get_arr_m437956224 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::StringObject(System.String)
extern "C"  JSONObject_t1971882247 * JSONObject_StringObject_m2324803274 (Il2CppObject * __this /* static, unused */, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Absorb(JSONObject)
extern "C"  void JSONObject_Absorb_m287377368 (JSONObject_t1971882247 * __this, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create()
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m134949822 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(JSONObject/Type)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m2024843434 (Il2CppObject * __this /* static, unused */, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Boolean)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m322727955 (Il2CppObject * __this /* static, unused */, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Single)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m4234548109 (Il2CppObject * __this /* static, unused */, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Int32)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m2780992853 (Il2CppObject * __this /* static, unused */, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Int64)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m1974423762 (Il2CppObject * __this /* static, unused */, int64_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::CreateStringObject(System.String)
extern "C"  JSONObject_t1971882247 * JSONObject_CreateStringObject_m227421806 (Il2CppObject * __this /* static, unused */, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::CreateBakedObject(System.String)
extern "C"  JSONObject_t1971882247 * JSONObject_CreateBakedObject_m1414246618 (Il2CppObject * __this /* static, unused */, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m1582109667 (Il2CppObject * __this /* static, unused */, String_t* ___val0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(JSONObject/AddJSONContents)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m2296526109 (Il2CppObject * __this /* static, unused */, AddJSONContents_t3850664647 * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m2408207271 (Il2CppObject * __this /* static, unused */, Dictionary_2_t3943999495 * ___dic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Parse(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  void JSONObject_Parse_m547301692 (JSONObject_t1971882247 * __this, String_t* ___str0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsNumber()
extern "C"  bool JSONObject_get_IsNumber_m1211710060 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsNull()
extern "C"  bool JSONObject_get_IsNull_m4292535844 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsString()
extern "C"  bool JSONObject_get_IsString_m1134326012 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsBool()
extern "C"  bool JSONObject_get_IsBool_m631014411 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsArray()
extern "C"  bool JSONObject_get_IsArray_m3696731856 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsObject()
extern "C"  bool JSONObject_get_IsObject_m1916105538 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Boolean)
extern "C"  void JSONObject_Add_m4073537166 (JSONObject_t1971882247 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Single)
extern "C"  void JSONObject_Add_m3120056428 (JSONObject_t1971882247 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Int32)
extern "C"  void JSONObject_Add_m449104870 (JSONObject_t1971882247 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.String)
extern "C"  void JSONObject_Add_m930192605 (JSONObject_t1971882247 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(JSONObject/AddJSONContents)
extern "C"  void JSONObject_Add_m3191854140 (JSONObject_t1971882247 * __this, AddJSONContents_t3850664647 * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(JSONObject)
extern "C"  void JSONObject_Add_m3618328192 (JSONObject_t1971882247 * __this, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Boolean)
extern "C"  void JSONObject_AddField_m1448237390 (JSONObject_t1971882247 * __this, String_t* ___name0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Single)
extern "C"  void JSONObject_AddField_m2712088548 (JSONObject_t1971882247 * __this, String_t* ___name0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Int32)
extern "C"  void JSONObject_AddField_m894980766 (JSONObject_t1971882247 * __this, String_t* ___name0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Int64)
extern "C"  void JSONObject_AddField_m1600793269 (JSONObject_t1971882247 * __this, String_t* ___name0, int64_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,JSONObject/AddJSONContents)
extern "C"  void JSONObject_AddField_m733507028 (JSONObject_t1971882247 * __this, String_t* ___name0, AddJSONContents_t3850664647 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.String)
extern "C"  void JSONObject_AddField_m757984985 (JSONObject_t1971882247 * __this, String_t* ___name0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,JSONObject)
extern "C"  void JSONObject_AddField_m1721386152 (JSONObject_t1971882247 * __this, String_t* ___name0, JSONObject_t1971882247 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.String)
extern "C"  void JSONObject_SetField_m4067629664 (JSONObject_t1971882247 * __this, String_t* ___name0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Boolean)
extern "C"  void JSONObject_SetField_m2028330731 (JSONObject_t1971882247 * __this, String_t* ___name0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Single)
extern "C"  void JSONObject_SetField_m484187805 (JSONObject_t1971882247 * __this, String_t* ___name0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Int32)
extern "C"  void JSONObject_SetField_m3929609445 (JSONObject_t1971882247 * __this, String_t* ___name0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,JSONObject)
extern "C"  void JSONObject_SetField_m1180592005 (JSONObject_t1971882247 * __this, String_t* ___name0, JSONObject_t1971882247 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::RemoveField(System.String)
extern "C"  void JSONObject_RemoveField_m3901079654 (JSONObject_t1971882247 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Boolean&,System.String,System.Boolean)
extern "C"  bool JSONObject_GetField_m749778138 (JSONObject_t1971882247 * __this, bool* ___field0, String_t* ___name1, bool ___fallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Boolean&,System.String,JSONObject/FieldNotFound)
extern "C"  bool JSONObject_GetField_m2238877236 (JSONObject_t1971882247 * __this, bool* ___field0, String_t* ___name1, FieldNotFound_t865402053 * ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Single&,System.String,System.Single)
extern "C"  bool JSONObject_GetField_m2835168656 (JSONObject_t1971882247 * __this, float* ___field0, String_t* ___name1, float ___fallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Single&,System.String,JSONObject/FieldNotFound)
extern "C"  bool JSONObject_GetField_m2524002016 (JSONObject_t1971882247 * __this, float* ___field0, String_t* ___name1, FieldNotFound_t865402053 * ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int32&,System.String,System.Int32)
extern "C"  bool JSONObject_GetField_m3075052858 (JSONObject_t1971882247 * __this, int32_t* ___field0, String_t* ___name1, int32_t ___fallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int32&,System.String,JSONObject/FieldNotFound)
extern "C"  bool JSONObject_GetField_m3356332928 (JSONObject_t1971882247 * __this, int32_t* ___field0, String_t* ___name1, FieldNotFound_t865402053 * ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int64&,System.String,System.Int64)
extern "C"  bool JSONObject_GetField_m1835125498 (JSONObject_t1971882247 * __this, int64_t* ___field0, String_t* ___name1, int64_t ___fallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int64&,System.String,JSONObject/FieldNotFound)
extern "C"  bool JSONObject_GetField_m1787897363 (JSONObject_t1971882247 * __this, int64_t* ___field0, String_t* ___name1, FieldNotFound_t865402053 * ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.UInt32&,System.String,System.UInt32)
extern "C"  bool JSONObject_GetField_m3049188754 (JSONObject_t1971882247 * __this, uint32_t* ___field0, String_t* ___name1, uint32_t ___fallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.UInt32&,System.String,JSONObject/FieldNotFound)
extern "C"  bool JSONObject_GetField_m2149788417 (JSONObject_t1971882247 * __this, uint32_t* ___field0, String_t* ___name1, FieldNotFound_t865402053 * ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.String&,System.String,System.String)
extern "C"  bool JSONObject_GetField_m3338501930 (JSONObject_t1971882247 * __this, String_t** ___field0, String_t* ___name1, String_t* ___fallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.String&,System.String,JSONObject/FieldNotFound)
extern "C"  bool JSONObject_GetField_m204744839 (JSONObject_t1971882247 * __this, String_t** ___field0, String_t* ___name1, FieldNotFound_t865402053 * ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.String,JSONObject/GetFieldResponse,JSONObject/FieldNotFound)
extern "C"  void JSONObject_GetField_m3040698632 (JSONObject_t1971882247 * __this, String_t* ___name0, GetFieldResponse_t1259369279 * ___response1, FieldNotFound_t865402053 * ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::GetField(System.String)
extern "C"  JSONObject_t1971882247 * JSONObject_GetField_m887332132 (JSONObject_t1971882247 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::HasFields(System.String[])
extern "C"  bool JSONObject_HasFields_m1144058745 (JSONObject_t1971882247 * __this, StringU5BU5D_t1642385972* ___names0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::HasField(System.String)
extern "C"  bool JSONObject_HasField_m3030985834 (JSONObject_t1971882247 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Clear()
extern "C"  void JSONObject_Clear_m992277887 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Copy()
extern "C"  JSONObject_t1971882247 * JSONObject_Copy_m3864269401 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Merge(JSONObject)
extern "C"  void JSONObject_Merge_m1969546983 (JSONObject_t1971882247 * __this, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::MergeRecur(JSONObject,JSONObject)
extern "C"  void JSONObject_MergeRecur_m848026001 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___left0, JSONObject_t1971882247 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Bake()
extern "C"  void JSONObject_Bake_m244276219 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::BakeAsync()
extern "C"  Il2CppObject * JSONObject_BakeAsync_m2553896557 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::Print(System.Boolean)
extern "C"  String_t* JSONObject_Print_m4113013869 (JSONObject_t1971882247 * __this, bool ___pretty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> JSONObject::PrintAsync(System.Boolean)
extern "C"  Il2CppObject* JSONObject_PrintAsync_m1157769192 (JSONObject_t1971882247 * __this, bool ___pretty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::StringifyAsync(System.Int32,System.Text.StringBuilder,System.Boolean)
extern "C"  Il2CppObject * JSONObject_StringifyAsync_m1504868741 (JSONObject_t1971882247 * __this, int32_t ___depth0, StringBuilder_t1221177846 * ___builder1, bool ___pretty2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Stringify(System.Int32,System.Text.StringBuilder,System.Boolean)
extern "C"  void JSONObject_Stringify_m3496252199 (JSONObject_t1971882247 * __this, int32_t ___depth0, StringBuilder_t1221177846 * ___builder1, bool ___pretty2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWWForm JSONObject::op_Implicit(JSONObject)
extern "C"  WWWForm_t3950226929 * JSONObject_op_Implicit_m146727933 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_Item(System.Int32)
extern "C"  JSONObject_t1971882247 * JSONObject_get_Item_m481309353 (JSONObject_t1971882247 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::set_Item(System.Int32,JSONObject)
extern "C"  void JSONObject_set_Item_m2332624254 (JSONObject_t1971882247 * __this, int32_t ___index0, JSONObject_t1971882247 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_Item(System.String)
extern "C"  JSONObject_t1971882247 * JSONObject_get_Item_m2638456294 (JSONObject_t1971882247 * __this, String_t* ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::set_Item(System.String,JSONObject)
extern "C"  void JSONObject_set_Item_m2230411265 (JSONObject_t1971882247 * __this, String_t* ___index0, JSONObject_t1971882247 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::ToString()
extern "C"  String_t* JSONObject_ToString_m2912340705 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::ToString(System.Boolean)
extern "C"  String_t* JSONObject_ToString_m3778538422 (JSONObject_t1971882247 * __this, bool ___pretty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> JSONObject::ToDictionary()
extern "C"  Dictionary_2_t3943999495 * JSONObject_ToDictionary_m1765493061 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::op_Implicit(JSONObject)
extern "C"  bool JSONObject_op_Implicit_m2214727230 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.cctor()
extern "C"  void JSONObject__cctor_m3703431513 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
