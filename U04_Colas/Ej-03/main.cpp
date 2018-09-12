#include <iostream>
#include "ColaPrioridades.h"

int main() {
    std::cout << "Ejercicio 04/03\n" << std::endl;

	ColaPrioridades<int> c;

	for(int i = 10; i < 20; i++)
		c.encolar(i, i % 3);
	while(!c.esVacia())
		std::cout << c.desencolar() << std::endl;
    return 0;
}
