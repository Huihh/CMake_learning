
cmake_minimum_required(VERSION 3.13)

project(Tutorial)

add_executable(Tutorial main.c)

add_subdirectory(alg_tea)

target_link_libraries(Tutorial PUBLIC tea)


target_include_directories(Tutorial PUBLIC 
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/alg_tea"
)

