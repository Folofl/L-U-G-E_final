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

// System.Reflection.MonoEvent
struct MonoEvent_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MonoEventInfo.h"

// System.Void System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)
extern "C" void MonoEventInfo_get_event_info_m1_2824 (Object_t * __this /* static, unused */, MonoEvent_t * ___ev, MonoEventInfo_t1_337 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoEventInfo System.Reflection.MonoEventInfo::GetEventInfo(System.Reflection.MonoEvent)
extern "C" MonoEventInfo_t1_337  MonoEventInfo_GetEventInfo_m1_2825 (Object_t * __this /* static, unused */, MonoEvent_t * ___ev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
