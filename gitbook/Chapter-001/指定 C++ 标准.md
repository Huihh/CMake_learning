# 指定 C++ 标准

接下来让我们指定 C/C++ 标准，通过设置变量 ```CMAKE_C_STANARD``` 或 ```CMAKE_CXX_STANDARD``` ，在 ```CMakeLists.txt``` 中设置变量 ```CMKAE_C_STANDARD``` 值为 ```99``` ，```CMAKE_C_STANDARD_REQUIRED``` 值为 ```True``` 。

```cmake

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
```



```main.c``` 文件内容如下： 

```c

#include <stdio.h>

#include "TutorialConfig.h"

int main(int argc, char *argv[])
{
    printf("Specify the C/C++ standard Tutorial Version is %d.%d\n", Tutorial_VERSION_MAJOR, Tutorial_VERSION_MINOR);

    return 0;
}

```



## 使用 CMake 构建

- 在工程跟目录下建立 build 目录，并进入该目录

  ```$ mkdir build && cd build```

- 使用 ```CMake``` 构建工程

  ```$ cmake ../``` or

  ```$ cmake -GNinja ../```

- 使用 ```make``` or ```ninja``` 编译工程

  ```$ make``` or

  ```$ ninja```

- 运行生成的可执行文件

  ```./Tutorial``` 

  此时则可以看到终端输出 ```Specify the C/C++ standard Tutorial Version is 1.1``` 字符串了。

































