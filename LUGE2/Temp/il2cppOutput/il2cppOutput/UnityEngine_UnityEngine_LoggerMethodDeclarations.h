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

// UnityEngine.Logger
struct Logger_t5_88;
// UnityEngine.ILogHandler
struct ILogHandler_t5_275;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Object
struct Object_t5_5;
struct Object_t5_5_marshaled;
// System.Object[]
struct ObjectU5BU5D_t1_156;
// System.Exception
struct Exception_t1_33;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LogType.h"

// System.Void UnityEngine.Logger::.ctor(UnityEngine.ILogHandler)
extern "C" void Logger__ctor_m5_1758 (Logger_t5_88 * __this, Object_t * ___logHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ILogHandler UnityEngine.Logger::get_logHandler()
extern "C" Object_t * Logger_get_logHandler_m5_1759 (Logger_t5_88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_logHandler(UnityEngine.ILogHandler)
extern "C" void Logger_set_logHandler_m5_1760 (Logger_t5_88 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Logger::get_logEnabled()
extern "C" bool Logger_get_logEnabled_m5_1761 (Logger_t5_88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_logEnabled(System.Boolean)
extern "C" void Logger_set_logEnabled_m5_1762 (Logger_t5_88 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LogType UnityEngine.Logger::get_filterLogType()
extern "C" int32_t Logger_get_filterLogType_m5_1763 (Logger_t5_88 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_filterLogType(UnityEngine.LogType)
extern "C" void Logger_set_filterLogType_m5_1764 (Logger_t5_88 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Logger::IsLogTypeAllowed(UnityEngine.LogType)
extern "C" bool Logger_IsLogTypeAllowed_m5_1765 (Logger_t5_88 * __this, int32_t ___logType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Logger::GetString(System.Object)
extern "C" String_t* Logger_GetString_m5_1766 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::Log(UnityEngine.LogType,System.Object)
extern "C" void Logger_Log_m5_1767 (Logger_t5_88 * __this, int32_t ___logType, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::Log(UnityEngine.LogType,System.Object,UnityEngine.Object)
extern "C" void Logger_Log_m5_1768 (Logger_t5_88 * __this, int32_t ___logType, Object_t * ___message, Object_t5_5 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
extern "C" void Logger_LogFormat_m5_1769 (Logger_t5_88 * __this, int32_t ___logType, Object_t5_5 * ___context, String_t* ___format, ObjectU5BU5D_t1_156* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::LogException(System.Exception,UnityEngine.Object)
extern "C" void Logger_LogException_m5_1770 (Logger_t5_88 * __this, Exception_t1_33 * ___exception, Object_t5_5 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
