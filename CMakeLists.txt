cmake_minimum_required(VERSION 3.10)

# Явно указываем Windows, чтобы OpenCV не думал, что мы не умеем в DLL
set(WIN32 TRUE)
set(CMAKE_SYSTEM_NAME Windows)

project(ASCII-Camera CXX)

set(CMAKE_CXX_STANDARD 17)

# Путь к OpenCV (можно оставить или убрать, если он и так находится)
set(OpenCV_DIR "C:/msys64/ucrt64/lib/cmake/opencv4")

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(ascii_cam 
    src/main.cpp 
    src/console.cpp
    src/camera.cpp
)

target_link_libraries(ascii_cam ${OpenCV_LIBS})
