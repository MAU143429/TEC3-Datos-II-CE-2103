cmake_minimum_required(VERSION 3.17)
project(TEC3_Datos_II)

set(CMAKE_CXX_STANDARD 14)

add_executable(TEC3_Datos_II main.cpp src/CorrectionAlgorithms/CRC.h src/CorrectionAlgorithms/HammingCode.h src/CorrectionAlgorithms/ParityChecking.h)