#include <iostream>
#include <string>
#include "../Pila/Pila.h"

using namespace std;

int main() {
    string palabra;
    Pila<char> p;
    cout << "Ejercicio 03/01\n" << endl;
    cout << "Entre una palabra: ";
    getline(cin, palabra);
    for(int i = 0; i < palabra.length(); i++)
        p.push(palabra[i]);
    while(!p.esVacia()) {
        char c = p.pop();
        cout << c;
    }
    cout << endl;
    
    return 0;
}