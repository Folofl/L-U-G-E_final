﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate
struct BannerWasClickedDelegate_t5_104;
// UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate
struct BannerWasLoadedDelegate_t5_105;
// UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate
struct BannerFailedToLoadDelegate_t5_106;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"

// UnityEngine.iOS.ADBannerView
struct  ADBannerView_t5_107  : public Object_t
{
	// System.IntPtr UnityEngine.iOS.ADBannerView::_bannerView
	IntPtr_t ____bannerView_0;
};
struct ADBannerView_t5_107_StaticFields{
	// UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate UnityEngine.iOS.ADBannerView::onBannerWasClicked
	BannerWasClickedDelegate_t5_104 * ___onBannerWasClicked_1;
	// UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate UnityEngine.iOS.ADBannerView::onBannerWasLoaded
	BannerWasLoadedDelegate_t5_105 * ___onBannerWasLoaded_2;
	// UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate UnityEngine.iOS.ADBannerView::onBannerFailedToLoad
	BannerFailedToLoadDelegate_t5_106 * ___onBannerFailedToLoad_3;
};
