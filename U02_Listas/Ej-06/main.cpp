#include <iostream>
#include "../Lista/Lista.h"

using namespace std;

int main() {
    cout << "Ejercicio 01/05\n" << endl;
    Lista<int> lista;
    lista.insertarUltimo(1);
    lista.insertarUltimo(2);
    lista.insertarUltimo(1);
    lista.insertarUltimo(3);
    lista.insertarUltimo(1);
    lista.insertarUltimo(8);
    lista.insertAfter2(1, 2, 15);
    cout << lista << endl;
    return 0;
}
