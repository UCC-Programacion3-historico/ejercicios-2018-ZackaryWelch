#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"

using namespace std;

int main() {
    cout << "Ejercicio 02/01\n" << endl;

	Lista<int> *lista = new Lista<int>();
	for(int i = 10; i < 20; i++)
		lista->insertarUltimo(i);

	cout << "Original:" << *lista << endl;
	fnInvierte(lista);
	cout << "Invertido:" << *lista << endl;

    return 0;
}
