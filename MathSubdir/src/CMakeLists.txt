cmake_minimum_required(VERSION 3.29)
enable_language(C CXX)
set(CMAKE_PROJECT_NAME MathSubdir)
project(${CMAKE_PROJECT_NAME})

#[[
    TODO:
    unset(moduleList)
    for each directory d
        moduleList += $d
        unset(sourceList)
        for each file f (*.cpp) in $d
            sourceList += $d/$f
        add_library($d sourceList)
        target_include_directories($d INTERFACE $d)
    add_exeutable(${CMAKE_PROJECT_NAME} main.cpp)
    target_link_libraries(${CMAKE_PROJECT_NAME} moduleList)
]]

add_library(math math/math.cpp)
target_include_directories(math INTERFACE math)
add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE math)
