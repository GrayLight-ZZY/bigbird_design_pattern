MESSAGE(STATUS "--- current server dir:${CMAKE_CURRENT_SOURCE_DIR}")

SET(CMAKE_C_COMPILER "gcc")
SET(CMAKE_CXX_COMPILER "g++")

set(source
    simple_factory.cpp
    simple_factory.hpp
    main_Simple_Factory.cpp
)

add_executable(Simple_Factory ${source})