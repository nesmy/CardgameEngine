cmake_minimum_required(VERSION 3.2)

project(CardGame)
set(CMAKE_BUILD_TYPE Debug)

find_package(SDL2 REQUIRED)
include_directories(${PROJECT_NAME} 
                        PUBLIC ${SDL2_INCLUDE_DIRS})
add_executable(${PROJECT_NAME} src/main.cpp)

add_subdirectory(vendor)

target_include_directories(${PROJECT_NAME}
    PUBLIC inlcude)

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})

