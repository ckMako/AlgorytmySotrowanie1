#wersja cmake
cmake_minimum_required(VERSION 3.28)
project(algoSortowanie)

#wersja c++
set(CMAKE_CXX_STANDARD 17)

#wszystko w src
file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})
# add_compile_options()

#dodaj inc do headers
target_include_directories(${PROJECT_NAME} PRIVATE inc)