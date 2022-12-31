set(ImGuiFiles
    ${CMAKE_CURRENT_LIST_DIR}/imconfig.h
    ${CMAKE_CURRENT_LIST_DIR}/imgui.h
    ${CMAKE_CURRENT_LIST_DIR}/imgui.cpp
    ${CMAKE_CURRENT_LIST_DIR}/imstb_truetype.h
    ${CMAKE_CURRENT_LIST_DIR}/imstb_textedit.h
    ${CMAKE_CURRENT_LIST_DIR}/imstb_rectpack.h
    ${CMAKE_CURRENT_LIST_DIR}/imgui_internal.h
    ${CMAKE_CURRENT_LIST_DIR}/imgui_demo.cpp
    ${CMAKE_CURRENT_LIST_DIR}/imgui_draw.cpp
    ${CMAKE_CURRENT_LIST_DIR}/imgui_tables.cpp
    ${CMAKE_CURRENT_LIST_DIR}/imgui_widgets.cpp)

add_library(ImGuiDocking STATIC ${ImGuiFiles})

target_include_directories(ImGuiDocking PUBLIC ${CMAKE_CURRENT_LIST_DIR})

add_custom_command(TARGET ImGuiDocking 
    POST_BUILD 
    COMMAND 
        ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_LIST_DIR}/misc/fonts ${PROJECT_SOURCE_DIR}/bin/fonts)