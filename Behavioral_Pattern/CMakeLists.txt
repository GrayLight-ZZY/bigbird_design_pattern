# path: cluster_api
CMAKE_MINIMUM_REQUIRED (VERSION 3.14.0)

MESSAGE(STATUS "--- current Behavioral_Pattern dir:${CMAKE_CURRENT_SOURCE_DIR}")

SET(EXECUTABLE_OUTPUT_PATH "${CMAKE_INSTALL_PREFIX}bin/design_pattern/Behavioral_Pattern/")
ADD_SUBDIRECTORY(01_Strategy_Pattern)