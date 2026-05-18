file(GLOB_RECURSE CORE_SOURCES "*.cpp")

add_library(core_lib STATIC ${CORE_SOURCES})

target_include_directories(core_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)