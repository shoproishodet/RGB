cmake_minimum_required(VERSION 3.23)
project(36_5_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

set(HEADERS ${CMAKE_SOURCE_DIR}/headers)

add_subdirectory(src)

target_link_libraries(36_5_1
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

