#include <iostream>
#include "../Pila/Pila.h"

int main() {
    std::cout << "Ejercicio 03/03\n" << std::endl;
    Pila<int> p;
    p.push(1);
    std::cout << p.peek() << (p.esVacia() ? " EMPTY" : " NON-EMPTY") << std::endl;
    return 0;
}
