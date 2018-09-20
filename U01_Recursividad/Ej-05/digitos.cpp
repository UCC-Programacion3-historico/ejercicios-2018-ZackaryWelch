#include <iostream>
#include <cmath>
#include "digitos.h"

unsigned int cociente(unsigned int a, unsigned int b) {
    if(b == 0)
        throw 1;
    if(a < b)
        return 0;
    return cociente(a - b, b) + 1;
}

unsigned int resto(unsigned int a, unsigned int b) {
    if(b == 0)
        throw 1;
    if(a == b)
        return 0;
    else if(a > b)
        return resto(a - b, b);
    return a;
}

void escribir_espaciado(unsigned int num) {
    int numDigits = (num == 0) ? 0 : (int)log10(num);
    if(numDigits == 0) {
        std::cout << num << " ";
    }else{
        std::cout << cociente(num, pow(10, numDigits)) << " ";
        unsigned int newNum = resto(num, pow(10, numDigits));
        if((int)log10(newNum) != numDigits - 1){
            int num_ceros = numDigits - (int)log10(newNum);
            for(int i = 0; i < num_ceros - 1; i++)
                std::cout << 0 << " ";
        }
        escribir_espaciado(resto(num, pow(10, numDigits)));
    }
}
