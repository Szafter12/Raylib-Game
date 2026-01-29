cmake_minimum_required(VERSION 3.10)
project(Game C)

set(CMAKE_C_STANDARD 11)

add_executable(${PROJECT_NAME} src/main.c
        src/Game/Game.c
        src/Game/Game.h)

find_package(raylib CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)

