//
// Created by ZZK on 2023/12/12.
//

#pragma once

#if !defined(IMGUI_DEFINE_MATH_OPERATORS)
    #define IMGUI_DEFINE_MATH_OPERATORS
#endif

#include "../imgui.h"
#include <ctime>

namespace ImGui
{
    // Some example of date formats: "%d/%m/%Y" "%A %d %b %Y"
    IMGUI_API bool DateChooser(const char* label, tm& dateOut, const char* dateFormat = "%d/%m/%Y",
                                bool* pSetStartDateToDateOutThisFrame = NULL, const char* leftArrow = "<",
                                const char* rightArrow = ">", const char* upArrowString = "   ^   ",
                                const char* downArrowString = "   v   ");

    // Some helper methods (note that I cannot use tm directly in this header file, so we can't initialize a static
    // date directly with these methods)
    IMGUI_API void SetDateZero(tm* date);
    IMGUI_API void SetDateToday(tm* date);

    IMGUI_API void TestDateChooser(const char* dateFormat = "%d/%m/%Y", const char* leftArrow = "<",
                                    const char* rightArrow = ">", const char* upArrowString = "   ^   ",
                                    const char* downArrowString = "   v   ");
}
