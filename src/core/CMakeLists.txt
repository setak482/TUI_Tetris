file(GLOB_RECURSE CORE_SOURCES "*.cpp")

add_library(core_lib STATIC ${CORE_SOURCES}
        ../../include/game/api/IGameEngine.h
        ../../include/game/ScoreBoard.h
        ../../include/core/Block.h)

target_include_directories(core_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)