cmake_minimum_required(VERSION 3.17)
project(TEC3_Datos_II)

set(CMAKE_CXX_STANDARD 14)

add_executable(TEC3_Datos_II main.cpp "src/CorrectionAlgorithms/LRC.cpp" "src/CorrectionAlgorithms/HammingCode.cpp" src/CorrectionAlgorithms/CRC.h)