#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

template<class T>
bool igualesPilas(Pila<T> a, Pila<T> b) {
    while(!a.esVacia() and !b.esVacia()) {
        T ad = a.pop();
        T bd = b.pop();
        if(ad != bd)
            return false;
    }
    
    return (a.esVacia() and b.esVacia());
}

int main() {
    Pila<int> a, b;
    cout << "Ejercicio 03/02\n" << endl;
    for(int i = 0; i < 5; i++) {
        a.push(i);
        b.push(i);
    }
    
    cout << (igualesPilas(a, b) ? "IGUAL" : "INIGUAL") << endl;
    return 0;
}
