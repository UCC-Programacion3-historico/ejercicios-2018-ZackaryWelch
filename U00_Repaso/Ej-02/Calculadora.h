#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H

#include <iostream>

using namespace std;

template<class T, class P>
class Calculadora {
public:
    T sumar(T a, T b);
    T restar(T a, T b);
    T dividir(T a, T b);
    P multiplicar(T a, T b);
    bool igual(T a, T b);
};


#endif //REPASO_CALCULADORA_H
