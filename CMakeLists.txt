cmake_minimum_required(VERSION 3.15)

set(CMAKE_C_COMPILER
    "C:/Users/Jonathan/Desktop/FILES/winlibs-x86_64-posix-seh-gcc-14.2.0-llvm-19.1.1-mingw-w64ucrt-12.0.0-r2/mingw64/bin/gcc.exe"
)

project(Framework)

set(SRC_SOURCE src)
set(INC_SOURCE include)

file(GLOB_RECURSE SRC_FILES "${SRC_SOURCE}/*.c")

file(GLOB_RECURSE HEADER_FILES "${INC_SOURCE}/*.h")

add_executable(Framework ${SRC_FILES})

source_group("Headers" FILES ${HEADER_FILES})

include_directories(${INC_SOURCE})
