cmake_minimum_required(VERSION 3.2)

project(CardGame)
set(CMAKE_BUILD_TYPE Debug)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

find_package(SDL2 REQUIRED)
include_directories(${PROJECT_NAME} 
                        PUBLIC ${SDL2_INCLUDE_DIRS})
add_executable(${PROJECT_NAME} src/main.cpp src/game.cpp)

add_subdirectory(vendor)
add_subdirectory(vendor/SDL)
add_subdirectory(vendor/SDL2image)
#add_subdirectory(vendor/SDL2ttf)

target_include_directories(${PROJECT_NAME}
    PUBLIC inlcude
    PUBLIC vendor/SDL/include
    PUBLIC vendor/SDL2image
    PUBLIC vendor/SDL2ttf
    )

target_link_directories(${PROJECT_NAME}
    PUBLIC vendor/SDL/src
    PUBLIC vendor/SDL2image
    PUBLIC vendor/SDL2ttf
    )

target_link_libraries(${PROJECT_NAME} 
    SDL2
    SDL2_image
    #SDL2_ttf
    ${SDL2_LIBRARIES})

