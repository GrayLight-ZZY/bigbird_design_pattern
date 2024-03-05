MESSAGE(STATUS "--- current 00_Simple_Factory dir:${CMAKE_CURRENT_SOURCE_DIR}")

SET(CMAKE_C_COMPILER "gcc")
SET(CMAKE_CXX_COMPILER "g++")

set(source
    main.cpp
    strategy.hpp
    strategy.cpp
)

add_executable(01_Strategy_Pattern ${source})