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

// UnityEngine.TextGenerator
struct TextGenerator_t5_165;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t1_881;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t1_882;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1_880;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex>
struct IList_1_t1_896;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo>
struct IList_1_t1_897;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo>
struct IList_1_t1_898;
// UnityEngine.Font
struct Font_t5_163;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#include "UnityEngine_UnityEngine_TextAnchor.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.TextGenerator::.ctor()
extern "C" void TextGenerator__ctor_m5_1151 (TextGenerator_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern "C" void TextGenerator__ctor_m5_1152 (TextGenerator_t5_165 * __this, int32_t ___initialCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C" void TextGenerator_System_IDisposable_Dispose_m5_1153 (TextGenerator_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Finalize()
extern "C" void TextGenerator_Finalize_m5_1154 (TextGenerator_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C" TextGenerationSettings_t5_162  TextGenerator_ValidatedSettings_m5_1155 (TextGenerator_t5_165 * __this, TextGenerationSettings_t5_162  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C" void TextGenerator_Invalidate_m5_1156 (TextGenerator_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m5_1157 (TextGenerator_t5_165 * __this, List_1_t1_881 * ___characters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m5_1158 (TextGenerator_t5_165 * __this, List_1_t1_882 * ___lines, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m5_1159 (TextGenerator_t5_165 * __this, List_1_t1_880 * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredWidth_m5_1160 (TextGenerator_t5_165 * __this, String_t* ___str, TextGenerationSettings_t5_162  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredHeight_m5_1161 (TextGenerator_t5_165 * __this, String_t* ___str, TextGenerationSettings_t5_162  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_Populate_m5_1162 (TextGenerator_t5_165 * __this, String_t* ___str, TextGenerationSettings_t5_162  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m5_1163 (TextGenerator_t5_165 * __this, String_t* ___str, TextGenerationSettings_t5_162  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C" Object_t* TextGenerator_get_verts_m5_1164 (TextGenerator_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C" Object_t* TextGenerator_get_characters_m5_1165 (TextGenerator_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C" Object_t* TextGenerator_get_lines_m5_1166 (TextGenerator_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m5_1167 (TextGenerator_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m5_1168 (TextGenerator_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m5_1169 (TextGenerator_t5_165 * __this, String_t* ___str, Font_t5_163 * ___font, Color_t5_164  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t5_44  ___extents, Vector2_t5_44  ___pivot, bool ___generateOutOfBounds, bool ___alignByGeometry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m5_1170 (TextGenerator_t5_165 * __this, String_t* ___str, Font_t5_163 * ___font, Color_t5_164  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, bool ___alignByGeometry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m5_1171 (Object_t * __this /* static, unused */, TextGenerator_t5_165 * ___self, String_t* ___str, Font_t5_163 * ___font, Color_t5_164 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, bool ___alignByGeometry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t5_48  TextGenerator_get_rectExtents_m5_1172 (TextGenerator_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)
extern "C" void TextGenerator_INTERNAL_get_rectExtents_m5_1173 (TextGenerator_t5_165 * __this, Rect_t5_48 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m5_1174 (TextGenerator_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m5_1175 (TextGenerator_t5_165 * __this, Object_t * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern "C" int32_t TextGenerator_get_characterCountVisible_m5_1176 (TextGenerator_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m5_1177 (TextGenerator_t5_165 * __this, Object_t * ___characters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C" int32_t TextGenerator_get_lineCount_m5_1178 (TextGenerator_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m5_1179 (TextGenerator_t5_165 * __this, Object_t * ___lines, const MethodInfo* method) IL2CPP_METHOD_ATTR;
