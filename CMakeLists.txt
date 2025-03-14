cmake_minimum_required(VERSION 3.14)

project(todone)
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets Sql)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

include_directories(${CMAKE_SOURCE_DIR}/src)
set(SOURCES
    res/res.rc
    src/main.cpp 
    src/structure.cpp
    src/structure.ui
    src/delegate.cpp
)

add_executable(todone ${SOURCES})
target_sources(todone PRIVATE 
    ${CMAKE_SOURCE_DIR}/src/structure.h
    ${CMAKE_SOURCE_DIR}/src/delegate.h
)

target_link_libraries(todone PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets Qt6::Sql)