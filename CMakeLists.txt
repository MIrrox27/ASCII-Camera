# author https://github.com/MIrrox27/ASCII-Camera
# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(AsciiCam CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(ascii_cam src/main.cpp)

target_link_libraries(ascii_cam ${OpenCV_LIBS})