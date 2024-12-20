#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace Geometria {

    class Circulo {
    private:
        float radio;

    public:
        Circulo(float r);

        void calcularArea() const;
        void calcularPerimetro() const;
    };

    float calcularAreaTriangulo(float base, float altura);
    float calcularAreaCirculo(float radio);
}

#endif //GEOMETRIA_H