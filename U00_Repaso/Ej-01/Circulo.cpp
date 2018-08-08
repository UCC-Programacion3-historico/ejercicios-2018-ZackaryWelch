#include "Circulo.h"

#define PI 3.14159

float Circulo::getRadio() const {
    return radio;
}

void Circulo::setRadio(float radio) {
    Circulo::radio = radio;
}

float Circulo::getPerimetro() {
    return PI * 2 * radio;
}

float Circulo::getSuperficie() {
    return PI * radio * radio;
}