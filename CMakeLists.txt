cmake_minimum_required(VERSION 3.19)
project(oskar)

set(CMAKE_CXX_STANDARD 14)

add_executable(oskar main.cpp zad1/ScaleOfFines.h zad1/CarScaleOfFines.cpp zad1/CarScaleOfFines.h zad1/TruckScaleOfFines.cpp zad1/TruckScaleOfFines.h zad1/Constant.h zad1/TariffApplication.cpp zad1/TariffApplication.h zad2/ClassicSum.cpp zad2/ClassicSum.h zad2/GaussSum.cpp zad2/GaussSum.h zad3/Fibonacci.cpp zad3/Fibonacci.h zad3/Factorial.cpp zad3/Factorial.h zad4/Matrix.cpp zad4/Matrix.h zad5/FileReader.cpp zad5/FileReader.h)