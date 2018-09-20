#include <iostream>
#include "../Lista/Lista.h"

using namespace std;

int main() {
	Lista<int> *lista = new Lista<int>();
    int n, v, counter = 0;
    
    cout << "Ejercicio 01/03\n" << endl;
	cout << "Cuántos elementos? ";
    cin >> n;
    
    if(n < 1)
        return 1;
    
    do {
        cout << counter << ": ";
        cin >> v;
		lista->insertarUltimo(v);
		counter++;
    }while(counter != n);
	cout << "Lista: " << *lista << endl;
    
    do {
        n = lista->getTamanio();
        cout << "Cuál elemento quiere borrar (un número entre 1 y " << n << ", 0 para salir)? ";
        
        cin >> v;
        if(v > 0 and v <= n) {
            lista->remover(v-1);
            cout << "Lista: " << *lista << endl;
        }
    }while(v > 0 and v <= n);
    
    return 0;
}