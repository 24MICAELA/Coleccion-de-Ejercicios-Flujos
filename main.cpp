//
// Created by Micae on 20/12/2024.
//
#include "ejercicio1/matematicas.h"
#include "ejercicio2/geometria.h"
#include "ejercicio4/ciencia.h"
#include "ejercicio5/Operaciones/operaciones.h"
#include "flujoprograma.h"

int main() {
    iniciarCaptura();
    suma_numeros(8, 5);
    resta_numeros(4, 2);
    Geometria::calcularAreaTriangulo(10, 20);
    Geometria::calcularAreaCirculo(5);
    Geometria::Circulo circulo(5.0);
    circulo.calcularArea();
    circulo.calcularPerimetro();
    Programa::ejecutar(40,2,4,1);
    finalizarCaptura();
    return 0;
}