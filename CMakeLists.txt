cmake_minimum_required(VERSION 3.25)
project(hashtable C)

add_library(hashtable STATIC
        src/hash_table_lifecycle.c
        src/hash_pair_lifecycle.c
)

set(CMAKE_C_STANDARD 11)

target_include_directories(hashtable PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

target_include_directories(hashtable PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/internal
)