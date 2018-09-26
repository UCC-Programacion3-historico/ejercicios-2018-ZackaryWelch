#include <iostream>
#include <string>
#include "../Pila/Pila.h"

using namespace std;

int orden(char c) {
    if(c == '*' or c == '/')
        return 3;
    else if(c == '+' or c == '-')
        return 2;
    return 1;
}

int main() {
    cout << "Ejercicio 03/05\n" << endl;
    string f = "(6+2)*5-8/4";
    Pila<char> pila;
    string fp = "";
    
    for(int i = 0; i < f.length(); i++) {
        if(f[i]-48 >= 0 and f[i]-48 <= 9){
            fp += f[i];
        }else if(f[i] == '('){
            pila.push(f[i]);
        }else if(f[i] == ')'){
            while((c = pila.pop()) != '(')
                fp += c;
        }else{
            while((!pila.esVacia()) and (orden(pila.peek()) >= orden(f[i])))
                fp += pila.pop();
            pila.push(f[i]);
        }
    }

    while(!pila.esVacia())
        fp += pila.pop();

    cout << "INFIJA: " << f << endl;
    cout << "POSFIJA: " << fp << endl;
    int rep = 0;

    Pila<int> mPila;
    for(int i = 0; i < fp.length(); i++) {
        if(fp[i]-48 >= 0 and fp[i]-48 <= 9) {
            mPila.push(fp[i]-48);
        }else{
            int op2 = mPila.pop();
            int op1 = mPila.pop();
            int resultado;
            if(fp[i] == '*')
                resultado = op1 * op2;
            else if(fp[i] == '/')
                resultado = op1 / op2;
            else if(fp[i] == '+')
                resultado = op1 + op2;
            else if(fp[i] == '-')
                resultado = op1 - op2;
            mPila.push(resultado);
            cout << op1 << '\t' << op2 << '\t' << resultado << endl;
        }
    }

    cout << "RESULTADO: " << mPila.pop() << endl;

    return 0;
}
