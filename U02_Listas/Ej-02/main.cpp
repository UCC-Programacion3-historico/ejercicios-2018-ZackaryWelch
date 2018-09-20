#include <iostream>
#include "../Lista/Lista.h"

using namespace std;

int main() {
	Lista<int> *lista = new Lista<int>();
    int n, v, counter = 0;
    
    cout << "Ejercicio 01/02\n" << endl;
	cout << "Cuántos elementos? ";
    cin >> n;
    
    if(n < 1)
        return 0;
    
    do {
        cout << counter << ": ";
        cin >> v;
		lista->insertarUltimo(v);
		counter++;
    }while(counter != n);
	cout << "Lista: " << *lista << endl;
	int escoja = 0;
	while(escoja >= 0 and escoja <= 2) {
		cout << "Qué quiere hacer (Agregar al principo (0), al final (1), o en el medio (2), o salir (otro valor))? ";
		cin >> escoja;
		if(escoja >= 0 and escoja <= 2) {
			cout << "Cuál valor para agregar? ";
			cin >> v;
			if(escoja == 0)
				lista->insertarPrimero(v);
			if(escoja == 1)
				lista->insertarUltimo(v);
			if(escoja == 2)
				lista->insertar(lista->getTamanio() / 2, v);
			cout << *lista << endl;
		}
 	}
    return 0;
}
