cmake_minimum_required(VERSION 3.14)

project(todone)
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets Sql)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
include_directories(
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/src/delegate
    )
set(SOURCES
    res/res.rc
    src/main.cpp 
    src/structure.cpp
    src/todotablewidget.cpp
    src/todaytreewidget.cpp
    src/recordtextedit.cpp
    src/delegate/datatimedelegate.cpp
    src/delegate/prioritydelegate.cpp
)

add_executable(todone WIN32 ${SOURCES})
target_sources(todone PRIVATE 
    ${CMAKE_SOURCE_DIR}/src/structure.h
    ${CMAKE_SOURCE_DIR}/src/todotablewidget.h
    ${CMAKE_SOURCE_DIR}/src/todaytreewidget.h
    ${CMAKE_SOURCE_DIR}/src/recordtextedit.h
    ${CMAKE_SOURCE_DIR}/src/delegate/datatimedelegate.h
    ${CMAKE_SOURCE_DIR}/src/delegate/prioritydelegate.h

)
target_link_libraries(todone PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets Qt6::Sql)