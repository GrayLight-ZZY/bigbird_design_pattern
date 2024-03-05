MESSAGE(STATUS "--- current 00_Simple_Factory dir:${CMAKE_CURRENT_SOURCE_DIR}")

SET(CMAKE_C_COMPILER "gcc")
SET(CMAKE_CXX_COMPILER "g++")

set(source
    main.cpp
    simple_factory.cpp
    simple_factory.hpp
)

add_executable(00_Simple_Factory ${source})