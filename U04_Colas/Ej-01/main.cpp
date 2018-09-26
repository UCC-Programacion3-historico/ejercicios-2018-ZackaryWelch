#include <iostream>
#include <string>
#include "../Cola/Cola.h"

using namespace std;

template<class T>
bool igualesColas(Cola<T> a, Cola<T> b) {
    while(!a.esVacia() and !b.esVacia()) {
        T ad = a.desencolar();
        T bd = b.desencolar();
        if(ad != bd)
            return false;
    }
    
    return (a.esVacia() and b.esVacia());
}

int main() {
    Cola<char> a, b;
    string f = "Misma frase";

    cout << "Ejercicio 04/01\n" << endl;

    for(int i = 0; i < f.length(); i++) {
        a.encolar(f[i]);
        b.encolar(f[i]);
    }
    
    cout << (igualesColas(a, b) ? "IGUAL" : "INIGUAL") << endl;
    return 0;
}
