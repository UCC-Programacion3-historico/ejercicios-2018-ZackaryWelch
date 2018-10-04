#include <iostream>
#include "../Cola/Cola.h"
#include "../../U03_Pilas/Pila/Pila.h"

using namespace std;

bool palindrome(string p) {
    Cola<char> cola;
    Pila<char> pila;
    for(int i = 0; i < p.length(); i++) {
        if((p[i] >= 'A' and p[i] <= 'Z') or (p[i] >= 'a' and p[i] <= 'z')) {
            pila.push(p[i]);
            cola.encolar(p[i]);
        }
    }

    while(!cola.esVacia() and !pila.esVacia()) {
        char c = pila.pop();
        char c2 = cola.desencolar();
        if(c != c2)
            return false;
    }
    return true;
}

int main() {
    string p;

    cout << "Ejercicio 04/02\n" << endl;
    cout << "Entre una frase: ";
    getline(cin, p);

    cout << (palindrome(p) ? "Sí, es un palidromo" : "No, no es un palidromo") << endl;
    
    return 0;
}
