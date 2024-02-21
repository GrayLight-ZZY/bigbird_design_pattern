SET(CMAKE_VERBOSE_MAKEFILE ON)
CMAKE_MINIMUM_REQUIRED (VERSION 3.14.0)
MESSAGE(STATUS "CMAKE_VERSION:${CMAKE_VERSION}")
add_definitions(-G "Unix Makefiles")
#SET(CMAKE_GENERATOR "Unix Makefiles")
#SET(CMAKE_NO_CACHE TRUE)

PROJECT(design_patterns)

#************************************************
# set compiler and ompiler options
#************************************************
SET(CMAKE_C_COMPILER "D:/_project/mingw64/bin/gcc.exe")
SET(CMAKE_CXX_COMPILER "D:/_project/mingw64/bin/g++.exe")
#SET(CMAKE_C_FLAGS "$ENV{CMAKE_C_FLAGS} -Wall -g -fPIC -fmessage-length=0 -fno-builtin -O0")
#SET(CMAKE_CXX_FLAGS "$ENV{CMAKE_CXX_FLAGS} -Wall -g -std=c++17 -fPIC -D_GLIBCXX_USE_CXX11_ABI=0 -U__STRICT_ANSI__ -D__ARMEL__ -DTHIRDPARTY_UPDATE_PARTI_ON")

# common
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release")
endif()

#************************************************
# Common Head File Path
#************************************************

#************************************************
# Add Libs for Linking
#************************************************

#************************************************
SET(SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
SET(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_SOURCE_DIR}/aarch64le/")
SET(EXECUTABLE_OUTPUT_PATH "${CMAKE_INSTALL_PREFIX}bin/design_pattern/")
SET(LIBRARY_OUTPUT_PATH "${CMAKE_INSTALL_PREFIX}lib/")
SET(INCLUDE_OUTPUT_PATH "${CMAKE_INSTALL_PREFIX}include/")

#SET(BSP_ROOT "$ENV{BSP_ROOT}")
SET(INSTALL_ROOT_nto "$ENV{INSTALL_ROOT_nto}")

MESSAGE(STATUS "EXECUTABLE_OUTPUT_PATH " ${EXECUTABLE_OUTPUT_PATH})
MESSAGE(STATUS "LIBRARY_OUTPUT_PATH " ${LIBRARY_OUTPUT_PATH})
MESSAGE(STATUS "INCLUDE_OUTPUT_PATH " ${INCLUDE_OUTPUT_PATH})
MESSAGE(STATUS "INSTALL_ROOT_nto " ${INSTALL_ROOT_nto})
#************************************************
# Add Modules for Building
#************************************************
#ADD_SUBDIRECTORY(Behavioral_Pattern)
#ADD_SUBDIRECTORY(Creational_Pattern)
ADD_SUBDIRECTORY(Structural_Pattern)