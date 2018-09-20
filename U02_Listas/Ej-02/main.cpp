#include <iostream>
#include "../Lista/Lista.h"

using namespace std;

void printLista(Lista<int> *lista) {
	for(int i = 0; i < lista->getTamanio(); i++) {
		cout << lista->getDato(i);
		if(i != lista->getTamanio()-1)
			cout << "->";
	}
}

int main() {
	Lista<int> *lista = new Lista<int>();
    int n, v, counter = 0;
    
    cout << "Ejercicio 01/02\n" << endl;
	cout << "Cuántos elementos? ";
    cin >> n;
    
    cout << counter << ": ";
	while(counter != n) {
        cin >> v;
		lista->insertarUltimo(v);
		counter++;
        cout << counter << ": ";
	}
	cout << "Lista: ";
	printLista(lista);
	int escoja = 0;
	while(escoja >= 0 and escoja <= 2) {
		cout << "\nQué quiere hacer (Agregar al principo (0), al final (1), o en el medio (2), o salir (otro valor))? ";
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
			printLista(lista);
		}
 	}
    return 0;
}
