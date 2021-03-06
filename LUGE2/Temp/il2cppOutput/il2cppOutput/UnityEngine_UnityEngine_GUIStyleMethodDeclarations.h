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

// UnityEngine.GUIStyle
struct GUIStyle_t5_28;
// UnityEngine.GUIStyleState
struct GUIStyleState_t5_202;
// UnityEngine.RectOffset
struct RectOffset_t5_27;
// UnityEngine.Font
struct Font_t5_163;
// UnityEngine.GUIContent
struct GUIContent_t5_190;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t5_33;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_ImagePosition.h"
#include "UnityEngine_UnityEngine_TextAnchor.h"
#include "UnityEngine_UnityEngine_TextClipping.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "UnityEngine_UnityEngine_Internal_DrawArguments.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Internal_DrawWithTextSelectionArgume.h"

// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" void GUIStyle__ctor_m5_1426 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C" void GUIStyle__ctor_m5_1427 (GUIStyle_t5_28 * __this, GUIStyle_t5_28 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
extern "C" void GUIStyle__cctor_m5_1428 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m5_1429 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InternalOnAfterDeserialize()
extern "C" void GUIStyle_InternalOnAfterDeserialize_m5_1430 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" GUIStyleState_t5_202 * GUIStyle_get_normal_m5_1431 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_normal(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_normal_m5_1432 (GUIStyle_t5_28 * __this, GUIStyleState_t5_202 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_hover()
extern "C" GUIStyleState_t5_202 * GUIStyle_get_hover_m5_1433 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_hover(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_hover_m5_1434 (GUIStyle_t5_28 * __this, GUIStyleState_t5_202 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_active()
extern "C" GUIStyleState_t5_202 * GUIStyle_get_active_m5_1435 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_active(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_active_m5_1436 (GUIStyle_t5_28 * __this, GUIStyleState_t5_202 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onNormal()
extern "C" GUIStyleState_t5_202 * GUIStyle_get_onNormal_m5_1437 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onNormal(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_onNormal_m5_1438 (GUIStyle_t5_28 * __this, GUIStyleState_t5_202 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onHover()
extern "C" GUIStyleState_t5_202 * GUIStyle_get_onHover_m5_1439 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onHover(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_onHover_m5_1440 (GUIStyle_t5_28 * __this, GUIStyleState_t5_202 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onActive()
extern "C" GUIStyleState_t5_202 * GUIStyle_get_onActive_m5_1441 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onActive(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_onActive_m5_1442 (GUIStyle_t5_28 * __this, GUIStyleState_t5_202 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_focused()
extern "C" GUIStyleState_t5_202 * GUIStyle_get_focused_m5_1443 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_focused(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_focused_m5_1444 (GUIStyle_t5_28 * __this, GUIStyleState_t5_202 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onFocused()
extern "C" GUIStyleState_t5_202 * GUIStyle_get_onFocused_m5_1445 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onFocused(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_onFocused_m5_1446 (GUIStyle_t5_28 * __this, GUIStyleState_t5_202 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_border()
extern "C" RectOffset_t5_27 * GUIStyle_get_border_m5_1447 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_border(UnityEngine.RectOffset)
extern "C" void GUIStyle_set_border_m5_1448 (GUIStyle_t5_28 * __this, RectOffset_t5_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" RectOffset_t5_27 * GUIStyle_get_margin_m5_1449 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_margin(UnityEngine.RectOffset)
extern "C" void GUIStyle_set_margin_m5_1450 (GUIStyle_t5_28 * __this, RectOffset_t5_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" RectOffset_t5_27 * GUIStyle_get_padding_m5_1451 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C" void GUIStyle_set_padding_m5_1452 (GUIStyle_t5_28 * __this, RectOffset_t5_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_overflow()
extern "C" RectOffset_t5_27 * GUIStyle_get_overflow_m5_1453 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_overflow(UnityEngine.RectOffset)
extern "C" void GUIStyle_set_overflow_m5_1454 (GUIStyle_t5_28 * __this, RectOffset_t5_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_clipOffset()
extern "C" Vector2_t5_44  GUIStyle_get_clipOffset_m5_1455 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_clipOffset(UnityEngine.Vector2)
extern "C" void GUIStyle_set_clipOffset_m5_1456 (GUIStyle_t5_28 * __this, Vector2_t5_44  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::get_font()
extern "C" Font_t5_163 * GUIStyle_get_font_m5_1457 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C" void GUIStyle_set_font_m5_1458 (GUIStyle_t5_28 * __this, Font_t5_163 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
extern "C" float GUIStyle_get_lineHeight_m5_1459 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Internal_Draw_m5_1460 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_48  ___position, GUIContent_t5_190 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1461 (GUIStyle_t5_28 * __this, Rect_t5_48  ___position, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1462 (GUIStyle_t5_28 * __this, Rect_t5_48  ___position, String_t* ___text, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.Texture,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1463 (GUIStyle_t5_28 * __this, Rect_t5_48  ___position, Texture_t5_33 * ___image, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1464 (GUIStyle_t5_28 * __this, Rect_t5_48  ___position, GUIContent_t5_190 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C" void GUIStyle_Draw_m5_1465 (GUIStyle_t5_28 * __this, Rect_t5_48  ___position, GUIContent_t5_190 * ___content, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1466 (GUIStyle_t5_28 * __this, Rect_t5_48  ___position, GUIContent_t5_190 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawCursor(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32)
extern "C" void GUIStyle_DrawCursor_m5_1467 (GUIStyle_t5_28 * __this, Rect_t5_48  ___position, GUIContent_t5_190 * ___content, int32_t ___controlID, int32_t ___Character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C" void GUIStyle_DrawWithTextSelection_m5_1468 (GUIStyle_t5_28 * __this, Rect_t5_48  ___position, GUIContent_t5_190 * ___content, int32_t ___controlID, int32_t ___firstSelectedCharacter, int32_t ___lastSelectedCharacter, bool ___drawSelectionAsComposition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32)
extern "C" void GUIStyle_DrawWithTextSelection_m5_1469 (GUIStyle_t5_28 * __this, Rect_t5_48  ___position, GUIContent_t5_190 * ___content, int32_t ___controlID, int32_t ___firstSelectedCharacter, int32_t ___lastSelectedCharacter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" GUIStyle_t5_28 * GUIStyle_get_none_m5_1470 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C" Vector2_t5_44  GUIStyle_GetCursorPixelPosition_m5_1471 (GUIStyle_t5_28 * __this, Rect_t5_48  ___position, GUIContent_t5_190 * ___content, int32_t ___cursorStringIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C" int32_t GUIStyle_GetCursorStringIndex_m5_1472 (GUIStyle_t5_28 * __this, Rect_t5_48  ___position, GUIContent_t5_190 * ___content, Vector2_t5_44  ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::GetNumCharactersThatFitWithinWidth(System.String,System.Single)
extern "C" int32_t GUIStyle_GetNumCharactersThatFitWithinWidth_m5_1473 (GUIStyle_t5_28 * __this, String_t* ___text, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern "C" Vector2_t5_44  GUIStyle_CalcSize_m5_1474 (GUIStyle_t5_28 * __this, GUIContent_t5_190 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSizeWithConstraints(UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C" Vector2_t5_44  GUIStyle_CalcSizeWithConstraints_m5_1475 (GUIStyle_t5_28 * __this, GUIContent_t5_190 * ___content, Vector2_t5_44  ___constraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcScreenSize(UnityEngine.Vector2)
extern "C" Vector2_t5_44  GUIStyle_CalcScreenSize_m5_1476 (GUIStyle_t5_28 * __this, Vector2_t5_44  ___contentSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_CalcHeight_m5_1477 (GUIStyle_t5_28 * __this, GUIContent_t5_190 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
extern "C" bool GUIStyle_get_isHeightDependantOnWidth_m5_1478 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_CalcMinMaxWidth_m5_1479 (GUIStyle_t5_28 * __this, GUIContent_t5_190 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
extern "C" String_t* GUIStyle_ToString_m5_1480 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m5_1481 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InitCopy(UnityEngine.GUIStyle)
extern "C" void GUIStyle_InitCopy_m5_1482 (GUIStyle_t5_28 * __this, GUIStyle_t5_28 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m5_1483 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m5_1484 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" void GUIStyle_set_name_m5_1485 (GUIStyle_t5_28 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m5_1486 (GUIStyle_t5_28 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignStyleState(System.Int32,System.IntPtr)
extern "C" void GUIStyle_AssignStyleState_m5_1487 (GUIStyle_t5_28 * __this, int32_t ___idx, IntPtr_t ___srcStyleState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m5_1488 (GUIStyle_t5_28 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)
extern "C" void GUIStyle_AssignRectOffset_m5_1489 (GUIStyle_t5_28 * __this, int32_t ___idx, IntPtr_t ___srcRectOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
extern "C" int32_t GUIStyle_get_imagePosition_m5_1490 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_imagePosition(UnityEngine.ImagePosition)
extern "C" void GUIStyle_set_imagePosition_m5_1491 (GUIStyle_t5_28 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.GUIStyle::get_alignment()
extern "C" int32_t GUIStyle_get_alignment_m5_1492 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C" void GUIStyle_set_alignment_m5_1493 (GUIStyle_t5_28 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
extern "C" bool GUIStyle_get_wordWrap_m5_1494 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C" void GUIStyle_set_wordWrap_m5_1495 (GUIStyle_t5_28 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextClipping UnityEngine.GUIStyle::get_clipping()
extern "C" int32_t GUIStyle_get_clipping_m5_1496 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_clipping(UnityEngine.TextClipping)
extern "C" void GUIStyle_set_clipping_m5_1497 (GUIStyle_t5_28 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_contentOffset()
extern "C" Vector2_t5_44  GUIStyle_get_contentOffset_m5_1498 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_contentOffset(UnityEngine.Vector2)
extern "C" void GUIStyle_set_contentOffset_m5_1499 (GUIStyle_t5_28 * __this, Vector2_t5_44  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_get_contentOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_get_contentOffset_m5_1500 (GUIStyle_t5_28 * __this, Vector2_t5_44 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_contentOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_set_contentOffset_m5_1501 (GUIStyle_t5_28 * __this, Vector2_t5_44 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_Internal_clipOffset()
extern "C" Vector2_t5_44  GUIStyle_get_Internal_clipOffset_m5_1502 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_Internal_clipOffset(UnityEngine.Vector2)
extern "C" void GUIStyle_set_Internal_clipOffset_m5_1503 (GUIStyle_t5_28 * __this, Vector2_t5_44  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_get_Internal_clipOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_get_Internal_clipOffset_m5_1504 (GUIStyle_t5_28 * __this, Vector2_t5_44 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_Internal_clipOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_set_Internal_clipOffset_m5_1505 (GUIStyle_t5_28 * __this, Vector2_t5_44 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m5_1506 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fixedWidth(System.Single)
extern "C" void GUIStyle_set_fixedWidth_m5_1507 (GUIStyle_t5_28 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m5_1508 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fixedHeight(System.Single)
extern "C" void GUIStyle_set_fixedHeight_m5_1509 (GUIStyle_t5_28 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m5_1510 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" void GUIStyle_set_stretchWidth_m5_1511 (GUIStyle_t5_28 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m5_1512 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m5_1513 (GUIStyle_t5_28 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
extern "C" float GUIStyle_Internal_GetLineHeight_m5_1514 (Object_t * __this /* static, unused */, IntPtr_t ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetFontInternal(UnityEngine.Font)
extern "C" void GUIStyle_SetFontInternal_m5_1515 (GUIStyle_t5_28 * __this, Font_t5_163 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::GetFontInternalDuringLoadingThread()
extern "C" Font_t5_163 * GUIStyle_GetFontInternalDuringLoadingThread_m5_1516 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::GetFontInternal()
extern "C" Font_t5_163 * GUIStyle_GetFontInternal_m5_1517 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::get_fontSize()
extern "C" int32_t GUIStyle_get_fontSize_m5_1518 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C" void GUIStyle_set_fontSize_m5_1519 (GUIStyle_t5_28 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.GUIStyle::get_fontStyle()
extern "C" int32_t GUIStyle_get_fontStyle_m5_1520 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
extern "C" void GUIStyle_set_fontStyle_m5_1521 (GUIStyle_t5_28 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_richText()
extern "C" bool GUIStyle_get_richText_m5_1522 (GUIStyle_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
extern "C" void GUIStyle_set_richText_m5_1523 (GUIStyle_t5_28 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.GUIContent,UnityEngine.Internal_DrawArguments&)
extern "C" void GUIStyle_Internal_Draw_m5_1524 (Object_t * __this /* static, unused */, GUIContent_t5_190 * ___content, Internal_DrawArguments_t5_211 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Internal_Draw2_m5_1525 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t5_48  ___position, GUIContent_t5_190 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_Draw2_m5_1526 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t5_48 * ___position, GUIContent_t5_190 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawPrefixLabel(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Internal_DrawPrefixLabel_m5_1527 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t5_48  ___position, GUIContent_t5_190 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_DrawPrefixLabel(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_DrawPrefixLabel_m5_1528 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t5_48 * ___position, GUIContent_t5_190 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetCursorFlashOffset()
extern "C" float GUIStyle_Internal_GetCursorFlashOffset_m5_1529 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawCursor(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Color)
extern "C" void GUIStyle_Internal_DrawCursor_m5_1530 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_48  ___position, GUIContent_t5_190 * ___content, int32_t ___pos, Color_t5_164  ___cursorColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_DrawCursor(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Color&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_DrawCursor_m5_1531 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_48 * ___position, GUIContent_t5_190 * ___content, int32_t ___pos, Color_t5_164 * ___cursorColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawWithTextSelection(UnityEngine.GUIContent,UnityEngine.Internal_DrawWithTextSelectionArguments&)
extern "C" void GUIStyle_Internal_DrawWithTextSelection_m5_1532 (Object_t * __this /* static, unused */, GUIContent_t5_190 * ___content, Internal_DrawWithTextSelectionArguments_t5_212 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" void GUIStyle_SetDefaultFont_m5_1533 (Object_t * __this /* static, unused */, Font_t5_163 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_GetCursorPixelPosition_m5_1534 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_48  ___position, GUIContent_t5_190 * ___content, int32_t ___cursorStringIndex, Vector2_t5_44 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5_1535 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_48 * ___position, GUIContent_t5_190 * ___content, int32_t ___cursorStringIndex, Vector2_t5_44 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C" int32_t GUIStyle_Internal_GetCursorStringIndex_m5_1536 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_48  ___position, GUIContent_t5_190 * ___content, Vector2_t5_44  ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorStringIndex(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" int32_t GUIStyle_INTERNAL_CALL_Internal_GetCursorStringIndex_m5_1537 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_48 * ___position, GUIContent_t5_190 * ___content, Vector2_t5_44 * ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::Internal_GetNumCharactersThatFitWithinWidth(System.IntPtr,System.String,System.Single)
extern "C" int32_t GUIStyle_Internal_GetNumCharactersThatFitWithinWidth_m5_1538 (Object_t * __this /* static, unused */, IntPtr_t ___target, String_t* ___text, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSize_m5_1539 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_190 * ___content, Vector2_t5_44 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSizeWithConstraints(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSizeWithConstraints_m5_1540 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_190 * ___content, Vector2_t5_44  ___maxSize, Vector2_t5_44 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_CalcSizeWithConstraints(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_CalcSizeWithConstraints_m5_1541 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_190 * ___content, Vector2_t5_44 * ___maxSize, Vector2_t5_44 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_Internal_CalcHeight_m5_1542 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_190 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_Internal_CalcMinMaxWidth_m5_1543 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_190 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
extern "C" GUIStyle_t5_28 * GUIStyle_op_Implicit_m5_1544 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
