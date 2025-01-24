cmake_minimum_required(VERSION 3.15)
project(Framework)

set(SRC_SOURCE src)
set(INC_SOURCE include)

file(GLOB_RECURSE SOURCES "${SRC_SOURCE}/*.c")

add_executable(Framework ${SOURCES})

target_include_directories(Framework PRIVATE ${INC_SOURCE})
