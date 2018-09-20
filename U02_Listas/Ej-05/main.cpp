#include <iostream>
#include "CircList.h"

int main() {
    std::cout << "Ejercicio 01/05\n" << std::endl;
    CircList<int> *CircList = new CircList<int>();
	for(int i = 10; i < 20; i++)
		CircList->insertarUltimo(i);
    
    return 0;
}