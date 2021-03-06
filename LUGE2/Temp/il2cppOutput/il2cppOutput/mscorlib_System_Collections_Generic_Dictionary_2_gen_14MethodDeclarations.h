﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_1262;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1_1261;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1500;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1_1501;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_448;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1_1266;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_8998_gshared (Dictionary_2_t1_1262 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_8998(__this, method) (( void (*) (Dictionary_2_t1_1262 *, const MethodInfo*))Dictionary_2__ctor_m1_8998_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_9000_gshared (Dictionary_2_t1_1262 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9000(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1262 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_9000_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_9002_gshared (Dictionary_2_t1_1262 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9002(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1262 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_9002_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_9004_gshared (Dictionary_2_t1_1262 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9004(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1262 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2__ctor_m1_9004_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_9006_gshared (Dictionary_2_t1_1262 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_9006(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1262 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_9006_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_9008_gshared (Dictionary_2_t1_1262 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_9008(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1262 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_9008_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_9010_gshared (Dictionary_2_t1_1262 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_9010(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1262 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_9010_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_9012_gshared (Dictionary_2_t1_1262 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_9012(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1262 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_9012_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_9014_gshared (Dictionary_2_t1_1262 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_9014(__this, ___key, method) (( void (*) (Dictionary_2_t1_1262 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_9014_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_9016_gshared (Dictionary_2_t1_1262 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_9016(__this, method) (( bool (*) (Dictionary_2_t1_1262 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_9016_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_9018_gshared (Dictionary_2_t1_1262 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_9018(__this, method) (( Object_t * (*) (Dictionary_2_t1_1262 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_9018_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_9020_gshared (Dictionary_2_t1_1262 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_9020(__this, method) (( bool (*) (Dictionary_2_t1_1262 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_9020_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_9022_gshared (Dictionary_2_t1_1262 * __this, KeyValuePair_2_t1_1264  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_9022(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1262 *, KeyValuePair_2_t1_1264 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_9022_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_9024_gshared (Dictionary_2_t1_1262 * __this, KeyValuePair_2_t1_1264  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_9024(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1262 *, KeyValuePair_2_t1_1264 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_9024_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_9026_gshared (Dictionary_2_t1_1262 * __this, KeyValuePair_2U5BU5D_t1_1500* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_9026(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1262 *, KeyValuePair_2U5BU5D_t1_1500*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_9026_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_9028_gshared (Dictionary_2_t1_1262 * __this, KeyValuePair_2_t1_1264  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_9028(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1262 *, KeyValuePair_2_t1_1264 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_9028_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_9030_gshared (Dictionary_2_t1_1262 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_9030(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1262 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_9030_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_9032_gshared (Dictionary_2_t1_1262 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_9032(__this, method) (( Object_t * (*) (Dictionary_2_t1_1262 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_9032_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_9034_gshared (Dictionary_2_t1_1262 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_9034(__this, method) (( Object_t* (*) (Dictionary_2_t1_1262 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_9034_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_9036_gshared (Dictionary_2_t1_1262 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_9036(__this, method) (( Object_t * (*) (Dictionary_2_t1_1262 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_9036_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_9038_gshared (Dictionary_2_t1_1262 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_9038(__this, method) (( int32_t (*) (Dictionary_2_t1_1262 *, const MethodInfo*))Dictionary_2_get_Count_m1_9038_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_9040_gshared (Dictionary_2_t1_1262 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_9040(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1262 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m1_9040_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_9042_gshared (Dictionary_2_t1_1262 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_9042(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1262 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_9042_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_9044_gshared (Dictionary_2_t1_1262 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_9044(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1262 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_9044_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_9046_gshared (Dictionary_2_t1_1262 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_9046(__this, ___size, method) (( void (*) (Dictionary_2_t1_1262 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_9046_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_9048_gshared (Dictionary_2_t1_1262 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_9048(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1262 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_9048_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1264  Dictionary_2_make_pair_m1_9050_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_9050(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1264  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_9050_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_9052_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_9052(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_9052_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_9054_gshared (Dictionary_2_t1_1262 * __this, KeyValuePair_2U5BU5D_t1_1500* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_9054(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1262 *, KeyValuePair_2U5BU5D_t1_1500*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_9054_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_9056_gshared (Dictionary_2_t1_1262 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_9056(__this, method) (( void (*) (Dictionary_2_t1_1262 *, const MethodInfo*))Dictionary_2_Resize_m1_9056_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_9058_gshared (Dictionary_2_t1_1262 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_9058(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1262 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_9058_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_9060_gshared (Dictionary_2_t1_1262 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_9060(__this, method) (( void (*) (Dictionary_2_t1_1262 *, const MethodInfo*))Dictionary_2_Clear_m1_9060_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_9062_gshared (Dictionary_2_t1_1262 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_9062(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1262 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m1_9062_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_9064_gshared (Dictionary_2_t1_1262 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_9064(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1262 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_9064_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_9066_gshared (Dictionary_2_t1_1262 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_9066(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1262 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2_GetObjectData_m1_9066_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_9068_gshared (Dictionary_2_t1_1262 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_9068(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1262 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_9068_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_9070_gshared (Dictionary_2_t1_1262 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_9070(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1262 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m1_9070_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_9072_gshared (Dictionary_2_t1_1262 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_9072(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1262 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_9072_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1_1266 * Dictionary_2_get_Values_m1_9074_gshared (Dictionary_2_t1_1262 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_9074(__this, method) (( ValueCollection_t1_1266 * (*) (Dictionary_2_t1_1262 *, const MethodInfo*))Dictionary_2_get_Values_m1_9074_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m1_9076_gshared (Dictionary_2_t1_1262 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_9076(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_1262 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_9076_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_9078_gshared (Dictionary_2_t1_1262 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_9078(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_1262 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_9078_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_9080_gshared (Dictionary_2_t1_1262 * __this, KeyValuePair_2_t1_1264  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_9080(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1262 *, KeyValuePair_2_t1_1264 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_9080_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1268  Dictionary_2_GetEnumerator_m1_9082_gshared (Dictionary_2_t1_1262 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_9082(__this, method) (( Enumerator_t1_1268  (*) (Dictionary_2_t1_1262 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_9082_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_9084_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_9084(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_9084_gshared)(__this /* static, unused */, ___key, ___value, method)
