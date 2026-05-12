file(GLOB GAME_SOURCES "*.cpp")

add_library(game_lib STATIC ${GAME_SOURCES})

target_include_directories(game_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)