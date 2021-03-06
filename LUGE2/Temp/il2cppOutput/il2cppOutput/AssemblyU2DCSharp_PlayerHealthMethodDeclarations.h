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

// PlayerHealth
struct PlayerHealth_t7_37;
// UnityEngine.Collision2D
struct Collision2D_t5_140;
// UnityEngine.Transform
struct Transform_t5_71;

#include "codegen/il2cpp-codegen.h"

// System.Void PlayerHealth::.ctor()
extern "C" void PlayerHealth__ctor_m7_153 (PlayerHealth_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::Awake()
extern "C" void PlayerHealth_Awake_m7_154 (PlayerHealth_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void PlayerHealth_OnCollisionEnter2D_m7_155 (PlayerHealth_t7_37 * __this, Collision2D_t5_140 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::TakeDamage(UnityEngine.Transform)
extern "C" void PlayerHealth_TakeDamage_m7_156 (PlayerHealth_t7_37 * __this, Transform_t5_71 * ___enemy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHealth::UpdateHealthBar()
extern "C" void PlayerHealth_UpdateHealthBar_m7_157 (PlayerHealth_t7_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
