cmake_minimum_required(VERSION 3.19)
project(Tic_tac_toe)

set(CMAKE_CXX_STANDARD 20)

#add_executable(Tic_tac_toe main.cpp test.cpp)


# Link this 'library' to use the warnings specified in CompilerWarnings.cmake
add_library(project_warnings INTERFACE)

# standard compiler warnings
include(cmake/CompilerWarnings.cmake)
set_project_warnings(project_warnings)

add_executable(Tic_tac_toe main.cpp test.cpp Board_layout.cpp Board_layout.h Player.cpp Player.h TicTacToe.cpp TicTacToe.h)
target_link_libraries(Tic_tac_toe PRIVATE project_warnings)