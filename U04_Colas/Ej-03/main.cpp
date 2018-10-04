#include <iostream>
#include "ColaPrioridades.h"

using namespace std;

int main() {
    cout << "Ejercicio 04/03\n" << endl << "Termas: ";

	ColaPrioridades<int> c;

	for(int i = 10; i < 20; i++) {
        int j = i % 3;
		c.encolar(i, i % 3);
        cout << i << ' ';
    }
    cout << endl << "Desencolado: ";
	while(!c.esVacia())
		cout << c.desencolar() << ' ';
    cout << endl;

    return 0;
}
