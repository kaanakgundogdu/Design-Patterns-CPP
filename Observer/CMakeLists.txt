cmake_minimum_required(VERSION 3.5)

project(Observer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Observer
    main.cpp
    observer.h
    observer.cpp
    subject.h
    subject.cpp
    IObserver.h
    ISubject.h
)

install(TARGETS Observer
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
