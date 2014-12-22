cmake_minimum_required(VERSION 2.6)
project(dfa_re)

#install(TARGETS dfa_re RUNTIME DESTINATION bin)

SET(CMAKE_CXX_FLAGS "-std=c++11 -g -Wall -Wextra")

add_subdirectory(src)

add_executable(dfa_re 
main.cpp
src/parser.cpp
)