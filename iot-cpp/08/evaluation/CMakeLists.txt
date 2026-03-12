cmake_minimum_required(VERSION 4.1)
project(evaluation)

set(CMAKE_CXX_STANDARD 20)

add_executable(evaluation memMng_kht.cpp
        Member.cpp
        Member.h
        MemberManenger.cpp
        MemberManenger.h)
