cmake_minimum_required(VERSION 3.10)
project(cpp-remote-desktop)

set(CMAKE_CXX_STANDARD 23)

add_executable(cpp-remote-desktop
    src/server/main.cpp
)

if(APPLE)
    include_directories(
            ~/WinSDK/include/um
            ~/WinSDK/include/shared
            ~/WinSDK/include/winrt
    )
endif()

