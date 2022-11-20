cmake_minimum_required(VERSION 3.23)

add_executable(36_5_1
        main.cpp
        Circle.cpp
        ${HEADERS}/Circle.h)


target_include_directories(36_5_1 PUBLIC ${HEADERS})