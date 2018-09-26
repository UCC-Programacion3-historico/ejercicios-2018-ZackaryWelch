#include <iostream>
#include "../Cola/Cola.h"
#include "../../U03_Pilas/Pila/Pila.h"

using namespace std;

bool palindrome(string p) {
    Cola<char> cola;
    Pila<char> pila;

    
}

int main() {
    string p;

    cout << "Ejercicio 04/02\n" << endl;
    cout << "Entre una frase: ";
    getline(cin, p);

    cout << (palindrome(p) ? "Sí, es un palidromo" : "No, no es un palidromo") << endl;
    
    return 0;
}
