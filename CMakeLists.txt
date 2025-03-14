cmake_minimum_required(VERSION 3.10)  # Минимальная версия CMake

project(FirstTest) # Название проекта

# Устанавливаем стандарт C++ (рекомендуется C++11 или новее)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(FirstTest main.cc)

