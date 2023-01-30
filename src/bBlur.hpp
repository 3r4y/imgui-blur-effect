#pragma once
#define IMGUI_DEFINE_MATH_OPERATORS

#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
#include "blur.hpp"

#include <map>

#define IM_USE using namespace ImGui

class c_gui
{
public:
    // Blur render
    auto blur_background(ImDrawList* drawList, IDirect3DDevice9* device) -> void {
        return DrawBackgroundBlur(drawList, device);
    }
    // Tab render
    auto tab(const char* label, ImVec2 size) -> bool;
    // Tab text
    auto text(const char* name, const char* desc, ImVec2 pos = ImVec2(40, 20)) -> void;
    // Skip item
    auto spacing() -> void;
    auto toggle(const char* label, bool* v) -> bool;
};

inline auto bBlur = new c_gui;
