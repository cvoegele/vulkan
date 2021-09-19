cmake_minimum_required(VERSION 3.20)
project(vulkan_tutorial)

set(CMAKE_CXX_STANDARD 17)

#glfw
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(/home/cvoegele/glfw /home/cvoegele/glfw/src)

#vulkan
find_package(Vulkan REQUIRED)

#glm
include_directories(glm /home/cvoegele/glm)

add_executable(vulkan_tutorial main.cpp)
target_link_libraries(vulkan_tutorial glfw)
target_link_libraries(vulkan_tutorial vulkan)
