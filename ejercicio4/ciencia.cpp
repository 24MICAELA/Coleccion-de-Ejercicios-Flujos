//
// Created by Micae on 20/12/2024.
//

#include "ciencia.h"
#include <iostream>
#include <cmath>

const float Ciencia::Fisica::VELOCIDAD_DE_LA_LUZ = 299792458.0;

float Ciencia::Fisica::calcularEnergia(float masa) {
    return masa * VELOCIDAD_DE_LA_LUZ * VELOCIDAD_DE_LA_LUZ;
}

bool Ciencia::Matematicas::resolverEcuacionCuadratica(float a, float b, float c, float &x1, float &x2) {
    float discriminante = b * b - 4 * a * c;

    if (discriminante < 0) {
        return false;
    }

    x1 = (-b + sqrt(discriminante)) / (2 * a);
    x2 = (-b - sqrt(discriminante)) / (2 * a);
    return true;
}

void Programa::ejecutar(float masa, float a, float b, float c) {
    if (masa < 0) {
        std::cerr << "Error: La masa no puede ser negativa." << std::endl;
        return;
    }
    float energia = Ciencia::Fisica::calcularEnergia(masa);
    std::cout << "La energia equivalente es: " << energia << " julios." << std::endl;

    float x1, x2;
    if (Ciencia::Matematicas::resolverEcuacionCuadratica(a, b, c, x1, x2)) {
        std::cout << "Las soluciones de la ecuacion de segundo grado son: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    } else {
        std::cout << "La ecuacion de segundo grado no tiene soluciones reales." << std::endl;
    }
}
