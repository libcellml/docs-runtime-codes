cmake_minimum_required(VERSION 3.24)
set(PROJECT_NAME runtime_codes)

project(${PROJECT_NAME} VERSION 0.1.0)

find_package(libCellML REQUIRED)

set(_PROJECT_SRC runtime_codes.cpp)

add_executable(${PROJECT_NAME} ${_PROJECT_SRC})
target_link_libraries(${PROJECT_NAME} PUBLIC cellml)
target_compile_options(${PROJECT_NAME} PRIVATE -Wno-unused-value)
