#include <iostream>
#include "potencia.h"

int main() {
    std::cout << "Ejercicio 01/01\n" << std::endl;
    std::cout << "0^0: " << "No es posible, podría retornar -1 si no es unsigned" << std::endl;
    std::cout << "0^1: " << potencia(0, 1) << std::endl;
    std::cout << "1^5: " << potencia(1, 5) << std::endl;
    std::cout << "2^0: " << potencia(2, 0) << std::endl;
    std::cout << "3^2: " << potencia(3, 2) << std::endl;
    std::cout << "2^12: " << potencia(2, 12) << std::endl;
    std::cout << "16^3: " << potencia(16, 3) << std::endl;
    return 0;
}