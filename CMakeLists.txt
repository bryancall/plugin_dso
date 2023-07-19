cmake_minimum_required(VERSION 3.14)

project(formatters)
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "-Wall -Werror -O3 -DLD_DYNAMIC_WEAK")

include_directories(include)

add_executable(main src/main/main.cc)
target_link_libraries(main fmt dependency)

add_library(dependency STATIC src/dependency/dependency.cc)

add_library(api SHARED src/api/api.cc)

add_library(plugin SHARED src/plugin/plugin.cc)
target_link_libraries(plugin api)