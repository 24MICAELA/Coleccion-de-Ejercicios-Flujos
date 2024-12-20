//
// Created by Micae on 20/12/2024.
//

#include "stl_vector.h"
#include <vector>
#include <iostream>

void operarVector() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    numeros.push_back(6);
    numeros.erase(numeros.begin() + 2);
    std::cout << "Elementos en el vector: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
