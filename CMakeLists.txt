cmake_minimum_required(VERSION 2.8.3)
project(math_utils)

find_package(catkin_simple REQUIRED)
catkin_simple(ALL_DEPS_REQUIRED)

add_definitions(-std=c++11)

#############
# LIBRARIES #
#############
#cs_add_library(${PROJECT_NAME}
#  src/example_lib.cpp
#)

############
# BINARIES #
############
#cs_add_executable(mag_compass
#  src/mag_compass.cpp
#)
#target_link_libraries(mag_compass ${PROJECT_NAME})

##########
# EXPORT #
##########
cs_install()
cs_export()
