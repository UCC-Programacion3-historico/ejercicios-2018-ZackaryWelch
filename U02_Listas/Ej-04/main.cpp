#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"

using namespace std;

int main() {
    Lista<int> a, b;
    cout << "Ejercicio 01/04\n" << endl;
    
    for(int i = 0; i < 10; i++)
        a.insertarUltimo(i);  
    for(int i = 20; i < 30; i++)
        b.insertarUltimo(i);  
    
    cout << "Lista A: " << a << endl;
    cout << "Lista B: " << b << endl;
    
    Lista<int> *c = unir(a, b);
    
    cout << "Lista C (unido): " << *c;
    return 0;
}