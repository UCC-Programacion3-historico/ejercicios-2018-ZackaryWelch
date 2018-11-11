#include <iostream>
#include "ColaPrioridades.h"
#include <fstream>
#include <string>

using namespace std;

struct Producto {
    //0 == si
    bool embarazada;
    int cantidad;
    int precio;
};

int main() {
    cout << "Ejercicio 04/04\n" << endl;
    ColaPrioridades<struct Producto> caja;
    ifstream file("productos.txt");
    int cantidades=0, precios=0, embarazadas=0;
    string line;

    if(file.is_open()) {
        while(getline(file, line)) {
            struct Producto producto;
            file >> producto.embarazada >> producto.cantidad >> producto.precio;
            caja.encolar(producto, producto.embarazada);
        }
    }
    
    while(!caja.esVacia()) {
        struct Producto producto = caja.desencolar();
        cantidades += producto.cantidad;
        precios += producto.precio;
        embarazadas += producto.embarazada;
    }

    cout << "Cantidad de productos: " << cantidades << endl;
    cout << "Gasto total: " << precios << endl;
    cout << "Embarazadas servidas: " << embarazadas << endl;
    return 0;
}
