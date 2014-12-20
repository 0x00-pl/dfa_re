cmake_minimum_required(VERSION 2.6)
project(dfa_re)

add_executable(dfa_re main.cpp)

install(TARGETS dfa_re RUNTIME DESTINATION bin)
