cmake_minimum_required(VERSION 3.18)
project(optMethods)
set(CMAKE_CXX_STANDARD 20)

file(GLOB SOURCES "src/*.cpp")
add_executable(optMethods ${SOURCES})
target_link_libraries(
    optMethods
)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/)

include_directories(include)
include_directories(SYSTEM lib)