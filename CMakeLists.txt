cmake_minimum_required(VERSION 3.7)
project(TareaHerenciaLib2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Paquete.cpp Paquete.h PaqueteDosDias.cpp PaqueteDosDias.h PaqueteNocturno.cpp PaqueteNocturno.h)
add_executable(TareaHerenciaLib2 ${SOURCE_FILES})