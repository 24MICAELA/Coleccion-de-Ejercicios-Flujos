//
// Created by Micae on 20/12/2024.
//

#include "stl_map.h"
#include <map>
#include <string>
#include <iostream>

void operarMap() {
    std::map<std::string, int> edades;
    edades["Alice"] = 30;
    edades["Bob"] = 25;
    edades["Charlie"] = 35;
    edades.erase("Bob");
    std::cout << "Edades en el map: " << std::endl;
    for (const auto &par : edades) {
        std::cout << par.first << ": " << par.second << " anios" << std::endl;
    }
}
