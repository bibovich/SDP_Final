cmake_minimum_required(VERSION 3.26)
project(untitled3)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled3 main.cpp
        headers/Singleton.h
        headers/Strategy.h
        headers/Factory.h
        headers/Observer.h
        headers/Decorator.h
        headers/Adapter.h)
