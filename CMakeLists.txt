cmake_minimum_required(VERSION 3.10)  # Минимальная версия CMake

project(FirstTest) # Название проекта

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Drogon REQUIRED)

add_executable(FirstTest main.cc)

target_link_libraries(FirstTest PRIVATE Drogon::Drogon)

install(TARGETS FirstTest DESTINATION bin)