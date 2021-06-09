cmake_minimum_required(VERSION 3.17)
project(TEC3_Datos_II)

set(CMAKE_CXX_STANDARD 14)

add_executable(TEC3_Datos_II main.cpp "src/Correction Algorithms/CRC.cpp" "src/Correction Algorithms/LRC.cpp" "src/Correction Algorithms/Hamming Code.cpp")