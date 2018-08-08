#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"

using namespace std;

int main() {
    Circulo circulo;
    circulo.setRadio(5);
    cout << "Ejercicio 00/01\n" << endl;
    cout << "Superficie: " << circulo.getSuperficie() << endl;
    return 0;
}