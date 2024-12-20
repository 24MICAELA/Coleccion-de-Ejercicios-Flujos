//
// Created by Micae on 20/12/2024.
//

#ifndef CIENCIA_H
#define CIENCIA_H

namespace Ciencia {
    namespace Fisica {
        extern const float VELOCIDAD_DE_LA_LUZ;

        float calcularEnergia(float masa);
    }

    namespace Matematicas {
        bool resolverEcuacionCuadratica(float a, float b, float c, float &x1, float &x2);
    }
}

namespace Programa {
    void ejecutar(float masa, float a, float b, float c);
}

#endif //CIENCIA_H
