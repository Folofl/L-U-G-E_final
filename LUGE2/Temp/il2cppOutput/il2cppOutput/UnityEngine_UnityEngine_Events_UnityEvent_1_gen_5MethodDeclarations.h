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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t5_316;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t5_365;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t5_263;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m5_1850_gshared (UnityEvent_1_t5_316 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5_1850(__this, method) (( void (*) (UnityEvent_1_t5_316 *, const MethodInfo*))UnityEvent_1__ctor_m5_1850_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5_2041_gshared (UnityEvent_1_t5_316 * __this, UnityAction_1_t5_365 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5_2041(__this, ___call, method) (( void (*) (UnityEvent_1_t5_316 *, UnityAction_1_t5_365 *, const MethodInfo*))UnityEvent_1_AddListener_m5_2041_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5_2042_gshared (UnityEvent_1_t5_316 * __this, UnityAction_1_t5_365 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5_2042(__this, ___call, method) (( void (*) (UnityEvent_1_t5_316 *, UnityAction_1_t5_365 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5_2042_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5_2043_gshared (UnityEvent_1_t5_316 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5_2043(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5_316 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5_2043_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t5_263 * UnityEvent_1_GetDelegate_m5_2044_gshared (UnityEvent_1_t5_316 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_2044(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t5_263 * (*) (UnityEvent_1_t5_316 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_2044_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t5_263 * UnityEvent_1_GetDelegate_m5_2045_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5_365 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_2045(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t5_263 * (*) (Object_t * /* static, unused */, UnityAction_1_t5_365 *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_2045_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5_1852_gshared (UnityEvent_1_t5_316 * __this, Vector2_t5_44  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5_1852(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5_316 *, Vector2_t5_44 , const MethodInfo*))UnityEvent_1_Invoke_m5_1852_gshared)(__this, ___arg0, method)
