cmake_minimum_required(VERSION 4.31)
project(hashtable C)

set(CMAKE_C_STANDARD 11)

add_executable(hashtable main.c)

target_include_directories(hashtable PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

target_include_directories(hashtable PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/internal
)