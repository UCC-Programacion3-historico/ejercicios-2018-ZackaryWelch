#include <iostream>
#include "sumatoria.h"

using namespace std;

int main() {
    cout << "Ejercicio 01/02\n" << endl;
	int size;
	cout << "Tamaño del array: ";
	cin >> size;
	
	if(size > 0) {
		int a[size];
		cout << "Entre elementos: ";
		for(int i = 0; i < size; i++) {
			int num;
			cin >> num;
			a[i] =  num;
		}
		cout << "Suma del elementos del array: " << sumatoria(a, size);
	}else{
		cout << "Tamaño invalido.";
	}

    return 0;
}
