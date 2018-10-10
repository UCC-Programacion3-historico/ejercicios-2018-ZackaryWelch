#include <iostream>
#include "Lista/Lista.h"
#include "Cola/Cola.h"

using namespace std;

int main() {
    ColaPrioridades<int> c;
    Lista<int> l;

    l.insertarUltimo(3);
    l.insertarUltimo(4);
    l.insertarUltimo(7);
    l.insertarUltimo(5);

    cout << "Original lista: ";
    for(int i = 0; i < l.getTamanio(); i++)
        cout << l.getDato(i) << "->";
    cout << endl;

    l.moverUlti(2);

    cout << "Nueva lista: ";
    for(int i = 0; i < l.getTamanio(); i++)
        cout << l.getDato(i) << "->";
    cout << endl;

    l.moverUlti(0);

    cout << "Nueva lista: ";
    for(int i = 0; i < l.getTamanio(); i++)
        cout << l.getDato(i) << "->";
    cout << endl;

    cout << "Tamanio: " << l.tamanio() << endl;

    cout << "Cola: ";
    for(int i = 0; i < 5; i++) {
        cout << i << "->";
        c.encolar(i);
    }
    cout << endl;

    invertirCola(c);

    cout << "Invertida: ";
    while(!c.esVacia())
        cout << c.desencolar() << "->";
    cout << endl;

    return 0;
}
