MESSAGE(STATUS "--- current 00_Simple_Factory dir:${CMAKE_CURRENT_SOURCE_DIR}")

SET(CMAKE_C_COMPILER "gcc")
SET(CMAKE_CXX_COMPILER "g++")

set(source
    main.cpp
    decorator_pattern.cpp
    decorator_pattern.hpp
)

add_executable(02_Decorator_Pattern ${source})