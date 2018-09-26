#include <iostream>
#include <string>
#include "../Pila/Pila.h"

using namespace std;

int main() {
    string funcion;
    Pila<char> p;
    
    cout << "Ejercicio 03/04\n" << endl;
    cout << "Entre una función: ";
    getline(cin, funcion);
    
    for(int i = 0; i < funcion.length(); i++)
        p.push(funcion[i]);
    
    int open=0, close=0;
    while(!p.esVacia()) {
        char c = p.pop();
        open+=(c == '{' or c == '(' or c == '[');
        close+=(c == '}' or c == ')' or c == ']');
    }
    
    if(open == close)
        cout << "MISMO" << endl;
    else
        cout << ((open > close) ? "Más abierto" : "Más cerrado") << endl;
    
    return 0;
}
