#include <iostream>
#include "../Arbol/ArbolBinario.h"

using namespace std;

int main() {
    ArbolBinario<int> *a = new ArbolBinario<int>();
    ArbolBinario<int> *b = new ArbolBinario<int>();
    int at[9] = {9, 3, 7, 5, 1, 2, 6, 8, 4};
    int bt[13] = {5, 6, 12, 10, 1, 9, 13, 4, 8, 2, 7, 3, 11};
    for(int i = 0; i < 9; i++)
        a->put(at[i]);
    for(int i = 0; i < 13; i++)
        b->put(bt[i]);
    cout << "A preorden: ";
    a->preorder();
    cout << endl;

    cout << "A inorden: ";
    a->inorder();
    cout << endl;

    cout << "B inorden: ";
    b->inorder();
    cout << endl;

    cout << "B postorden: ";
    b->postorder();
    cout << endl;

    cout << "Ejercicio 05/02\n" << endl;
    return 0;
}
