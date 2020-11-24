
# 要求 CMake 的最低版本
cmake_minimum_required(VERSION 3.13)

# 工程名称
project(Tutorial)

# 添加 MathFunctions 子目录 
# Note: 必须位于 project() 之后
add_subdirectory(MathFunctions)

# 可执行文件
add_executable(Tutorial main.c)

# 使用 Mysqrt 库 
target_link_libraries(Tutorial PUBLIC Mysqrt)

# 添加头文件包含路径
target_include_directories(Tutorial PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/MathFunctions"
) 

