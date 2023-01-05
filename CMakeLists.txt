cmake_minimum_required(VERSION 3.6)

project(cmake_dl)

# set default minimum deployment target
if(XCODE)
    if(NOT DEFINED CMAKE_XCODE_ATTRIBUTE_IPHONEOS_DEPLOYMENT_TARGET)
        SET (CMAKE_XCODE_ATTRIBUTE_IPHONEOS_DEPLOYMENT_TARGET 8.0)
    endif()
endif()

# cocos2dx root path
set(CMAKE_DL_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_MODULE_PATH ${CMAKE_DL_ROOT_PATH}/cmake/modules/)

# prevent in-source-build
include(PreventInSourceBuilds)

# works before build libcocos2d
include(BuildSet)

set(BUILD_LUA_LIBS ON) 

add_subdirectory(${CMAKE_DL_ROOT_PATH}/src)
