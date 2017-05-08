# cmake ..

cmake_minimum_required(VERSION 3.4)
project(bfdrivers C CXX)

if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    if(NOT WIN32 STREQUAL "1")
        set(CMAKE_INSTALL_PREFIX "$ENV{HOME}/bfprefix" CACHE PATH "default install path" FORCE)
    else()
        set(CMAKE_INSTALL_PREFIX "$ENV{HOMEPATH}/bfprefix" CACHE PATH "default install path" FORCE)
    endif()
endif()

include("${CMAKE_INSTALL_PREFIX}/cmake/CMakeGlobal_Project.txt")

# ------------------------------------------------------------------------------
# Subdirectories
# ------------------------------------------------------------------------------

#add_subdirectory(test)

# ------------------------------------------------------------------------------
# Custom Targets
# ------------------------------------------------------------------------------

add_custom_target(driver_build COMMAND ${CMAKE_SOURCE_DIR}/scripts/driver_build.sh ${CMAKE_SOURCE_DIR} ${CMAKE_INSTALL_PREFIX})
add_custom_target(driver_clean COMMAND ${CMAKE_SOURCE_DIR}/scripts/driver_clean.sh ${CMAKE_SOURCE_DIR})
add_custom_target(driver_load COMMAND ${CMAKE_SOURCE_DIR}/scripts/driver_load.sh ${CMAKE_SOURCE_DIR})
add_custom_target(driver_unload COMMAND ${CMAKE_SOURCE_DIR}/scripts/driver_unload.sh ${CMAKE_SOURCE_DIR})
