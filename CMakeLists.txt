cmake_minimum_required(VERSION 3.2)

project(CardGame)
set(CMAKE_BUILD_TYPE Debug)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
file(GLOB SOURCES src/main.cpp src/Button.cpp src/Card.cpp src/Window.cpp)

include_directories(${PROJECT_NAME} 
                        PUBLIC ${SDL2_INCLUDE_DIRS})
add_executable(${PROJECT_NAME} ${SOURCES}
)

add_subdirectory(vendor)
add_subdirectory(vendor/raylib)


target_include_directories(${PROJECT_NAME}
    PUBLIC include
    PUBLIC vendor/raylib/src
    )

target_link_directories(${PROJECT_NAME}
    PUBLIC vendor/raylib/src    
    )

target_link_libraries(${PROJECT_NAME}
    raylib
    )

