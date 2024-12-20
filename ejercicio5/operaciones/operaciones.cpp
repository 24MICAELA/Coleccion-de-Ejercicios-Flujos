//
// Created by Micae on 20/12/2024.
//

#include "operaciones.h"
#include "../stl_set/stl_set.h"
#include "../stl_map/stl_map.h"
#include "../stl_vector/stl_vector.h"
#include <iostream>

void ejecutarOperacion(int opcion) {
    switch (opcion) {
        case 1:
            operarVector();
        break;
        case 2:
            operarMap();
        break;
        case 3:
            operarSet();
        break;
        default:
            std::cout << "Opcion invalida. Por favor, selecciona una opcion entre 1 y 3." << std::endl;
    }
}
