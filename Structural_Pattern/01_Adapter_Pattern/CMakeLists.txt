MESSAGE(STATUS "--- current 00_Simple_Factory dir:${CMAKE_CURRENT_SOURCE_DIR}")

SET(CMAKE_C_COMPILER "gcc")
SET(CMAKE_CXX_COMPILER "g++")

set(source
    main.cpp
    adapter_factory.cpp
    adapter_factory.hpp
)

#add_executable(01_Adapter_Pattern ${source})