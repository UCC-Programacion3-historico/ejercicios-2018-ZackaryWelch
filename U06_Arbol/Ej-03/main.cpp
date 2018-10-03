#include <iostream>
#include "../Arbol/ArbolBinario.h"

using namespace std;

int contarPorNivel(ArbolBinario<int> &a, int nivel) {

}

int main() {
    ArbolBinario a<int>;
    for(int i = 0; i < 25; i++)
        a.put(i);

    cout << "Ejercicio 05/03\n" << endl;

    for(int i = 0; i < 10; i++) {
        cout << "Nivel " << i << ": " << contarPorNivel(a, i) << endl;
    } 
    return 0;
}
