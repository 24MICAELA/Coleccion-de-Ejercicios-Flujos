cmake_minimum_required(VERSION 3.29)
project(Coleccion_de_Ejercicios_Flujos)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(ejercicio1)
include_directories(ejercicio2)
include_directories(ejercicio4)

add_executable(Coleccion_de_Ejercicios_Flujos
    ejercicio1/matematicas.cpp
    ejercicio1/matematicas.h
    ejercicio2/circulo.cpp
    ejercicio2/geometria.h
    ejercicio2/triangulo.cpp
    ejercicio3/area.cpp
    ejercicio3/constructor.cpp
    ejercicio3/perimetro.cpp
    ejercicio4/ciencia.cpp
    ejercicio4/ciencia.h
    flujoprograma.cpp
    flujoprograma.h
    main.cpp
        ejercicio5/operaciones/operaciones.h
        ejercicio5/operaciones/operaciones.cpp
        ejercicio5/stl_set/stl_set.cpp
        ejercicio5/stl_vector/stl_vector.cpp)
