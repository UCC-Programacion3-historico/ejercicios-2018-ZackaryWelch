#include "Cuadrado.h"

double Cuadrado::getDiagonal() {
    return sqrt(alto * alto + ancho * ancho);
}

float Cuadrado::getPerimetro() {
    return 2 * ancho + 2 * alto;
}

float Cuadrado::getSuperficie() {
    return ancho * alto;
}
