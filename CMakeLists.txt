cmake_minimum_required(VERSION 3.15)
project(dnd-battlemap)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp baseField.cpp baseField.h)

find_package(SFML 2.5 COMPONENTS graphics audio window REQUIRED)
add_executable(dnd-battlemap ${SOURCE_FILES})
target_link_libraries(dnd-battlemap sfml-window sfml-graphics sfml-audio)