﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate
struct InterstitialWasLoadedDelegate_t5_108;
// UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate
struct InterstitialWasViewedDelegate_t5_109;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"

// UnityEngine.iOS.ADInterstitialAd
struct  ADInterstitialAd_t5_110  : public Object_t
{
	// System.IntPtr UnityEngine.iOS.ADInterstitialAd::interstitialView
	IntPtr_t ___interstitialView_0;
};
struct ADInterstitialAd_t5_110_StaticFields{
	// UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate UnityEngine.iOS.ADInterstitialAd::onInterstitialWasLoaded
	InterstitialWasLoadedDelegate_t5_108 * ___onInterstitialWasLoaded_1;
	// UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate UnityEngine.iOS.ADInterstitialAd::onInterstitialWasViewed
	InterstitialWasViewedDelegate_t5_109 * ___onInterstitialWasViewed_2;
};
