#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"

int main() {
    std::cout << "Ejercicio 02/01\n" << std::endl;

	std::cout << "Original:" << std::endl;
	Lista<int> *lista = new Lista<int>();
	for(int i = 10; i < 20; i++) {
		lista->insertarUltimo(i);
		std::cout << i;
		if(i != 19)
			std::cout << "->";
	}
	std::cout << '\n';
	fnInvierte(lista);

	std::cout << "Invertido:" << std::endl;
	for(int i = 0; i < lista->getTamanio(); i++) {
		std::cout << lista->getDato(i);
		if(i != lista->getTamanio() - 1)
			std::cout << "->";
	}
 	std::cout << '\n';

    return 0;
}
