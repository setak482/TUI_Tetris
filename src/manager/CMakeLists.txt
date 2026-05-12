file(GLOB MANAGER_SOURCES "*.cpp")

add_library(manager_lib STATIC ${MANAGER_SOURCES})

target_include_directories(manager_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)