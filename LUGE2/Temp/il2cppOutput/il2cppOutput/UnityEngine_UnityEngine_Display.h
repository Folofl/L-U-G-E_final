﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Display[]
struct DisplayU5BU5D_t5_91;
// UnityEngine.Display
struct Display_t5_90;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t5_89;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"

// UnityEngine.Display
struct  Display_t5_90  : public Object_t
{
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;
};
struct Display_t5_90_StaticFields{
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t5_91* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t5_90 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t5_89 * ___onDisplaysUpdated_3;
};
