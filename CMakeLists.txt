cmake_minimum_required(VERSION 3.10)
project(LessonByBox)

set(CMAKE_CXX_STANDARD 11)

add_executable(LessonByBox main.cpp Header/box.h Source/box.cpp Header/arrayBoxProcessor.h Source/arrayBoxProcessor.cpp Source/Container.cpp Header/Container.h Source/ContainerException.cpp Header/ContainerException.h)