
# 要求 CMake 的最低版本
cmake_minimum_required(VERSION 3.13)

# 工程名称和版本号
project(Tutorial VERSION 1.1)

# 指定 C/C++ 标准 
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# 可执行文件, 必须位于 target_include_directories() 之前
add_executable(Tutorial main.c)

# 配置文件将版本号传给源码文件 (TutorialConfig.h)
configure_file(TutorialConfig.h.in TutorialConfig.h)

# 配置文件会写入二进制树，需要将二进制目录添加到头文件包含路径中
target_include_directories(Tutorial PUBLIC
    "${PROJECT_BINARY_DIR}"
)






