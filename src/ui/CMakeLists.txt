file(GLOB UI_SOURCES "*.cpp")
add_library(ui_lib STATIC ${UI_SOURCES})

target_link_libraries(ui_lib PUBLIC ftxui::screen ftxui::dom ftxui::component)
target_include_directories(ui_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)