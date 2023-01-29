cmake_minimum_required(VERSION 3.5)

project(Singleton LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Singleton
    main.cpp
    database.h
    database.cpp
)

install(TARGETS Singleton
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
