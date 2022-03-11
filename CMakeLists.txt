cmake_minimum_required(VERSION 3.0.0)

project(Wolf_TeamMatch VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(. DIR_SRCS)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
link_libraries(${OpenCV_LIBS})

add_executable(Wolf ${DIR_SRCS})
