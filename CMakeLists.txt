cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 17)
project(Tetris)

include(FetchContent)

if(EXISTS "${CMAKE_SOURCE_DIR}/extern/ftxui")
    message(STATUS "로컬에서 라이브러리를 가져옵니다...")
    FetchContent_Declare(
        ftxui
        SOURCE_DIR ${CMAKE_SOURCE_DIR}/extern/ftxui
    )
else()
    message(STATUS "외부에서 라이브러리를 가져옵니다...")
    FetchContent_Declare(
        ftxui
        GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
        GIT_TAG v6.1.9
    )
endif()

FetchContent_MakeAvailable(ftxui)

# add_subdirectory(src/game)
# add_subdirectory(src/core)
# add_subdirectory(src/ui)

add_executable(my_app src/main.cpp)
target_include_directories(my_app PRIVATE include)

target_link_libraries(my_app PRIVATE
    # ftxui
    # game_lib
    # manager_lib
    # ui_lib
)