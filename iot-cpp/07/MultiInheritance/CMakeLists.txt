cmake_minimum_required(VERSION 4.1)
project(cpp2)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp2 app.cpp
        person.cpp
        person.h
        Student.cpp
        Student.h
        propessor.cpp
        propessor.h
        TA.cpp
        TA.h)
