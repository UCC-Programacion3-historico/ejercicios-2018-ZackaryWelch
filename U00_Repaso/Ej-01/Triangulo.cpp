#include "Triangulo.h"

double Triangulo::getAngulo() {
   return angulo;
}

double Triangulo::setAngulo(double angulo) {
    Triangulo::angulo = angulo;
}

float Triangulo::getPerimetro() {
    return 2 * sqrt(alto * alto + ancho * ancho) + ancho;
}

float Triangulo::getSuperficie() {
    return 0.5 * alto * ancho;
}