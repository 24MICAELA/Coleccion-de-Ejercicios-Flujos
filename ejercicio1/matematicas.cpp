//
// Created by Micae on 20/12/2024.
//

#include "matematicas.h"
#include <iostream>

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }
}

void suma_numeros(int num1, int num2) {
    std::cout<<"La suma de "<<num1<<" y "<<num2<<" es: "<< Matematicas::suma(num1, num2) << std::endl;
}

void resta_numeros(int num1, int num2) {
    std::cout<<"La resta de "<<num1<<" y "<<num2<<" es: "<< Matematicas::resta(num1, num2) << std::endl;
}
