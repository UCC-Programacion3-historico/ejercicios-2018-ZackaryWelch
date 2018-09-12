#include <iostream>
#include "ackerman.h"

int main() {
	//No puede funcionar si m > 3
    std::cout << "Ejercicio 01/03\n" << std::endl;
	std::cout << "A(1, 3): " << ackerman(1, 3) << std::endl;
	std::cout << "A(2, 5): " << ackerman(2, 5) << std::endl;
	std::cout << "A(0, 8): " << ackerman(0, 8) << std::endl;
	std::cout << "A(3, 10): " << ackerman(3, 10) << std::endl;
	//No va a retornar
	//std::cout << "A(4, 3): " << ackerman(4, 3) << std::endl;
    return 0;
}
