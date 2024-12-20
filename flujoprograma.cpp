//
// Created by Micae on 20/12/2024.
//

#include "flujoprograma.h"
#include <fstream>
#include "flujoprograma.h"

static std::streambuf* cout_bufferr = nullptr;
static std::ofstream archivo_salida_terminal;

void iniciarCaptura() {

    archivo_salida_terminal.open("../resultado_terminal.txt", std::ios::trunc);
    if(!archivo_salida_terminal) {
        std::cerr<<"No se pudo abrir archivo.txt para escritura."<<std::endl;
    }

    cout_bufferr = std::cout.rdbuf();

    std::cout.rdbuf(archivo_salida_terminal.rdbuf());
}

void finalizarCaptura() {
    if (cout_bufferr) {
        std::cout.rdbuf(cout_bufferr);
        cout_bufferr = nullptr;
    }
    if (archivo_salida_terminal.is_open()) {
        archivo_salida_terminal.close();
    }

    std::cout<<"Los datos han sido enviados al archivo txt"<<std::endl;
}