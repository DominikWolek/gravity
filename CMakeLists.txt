cmake_minimum_required(VERSION 3.2)
project(gravity)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES testAstro.cpp src/AstroObject.cpp)
add_executable(gravity ${SOURCE_FILES})

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED graphics system window network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(gravity ${SFML_LIBRARIES})
endif()
