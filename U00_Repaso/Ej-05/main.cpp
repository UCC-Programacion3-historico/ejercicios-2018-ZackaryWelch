#include <iostream>
#include "Entero.h"

using namespace std;

int main() {
    cout << "Ejercicio 00/05\n" << endl;
	Entero a(5), b(3);
	cout << "A: " << a << " B: " << b << endl;
	cout << "A + B: " << a+b << endl;
	cout << "A - B: " << a-b << endl;
	cout << "A / B: " << a/b << endl;
	cout << "A * B: " << a*b << endl;
	cout << "A = B: " << (a==b) << endl;
    return 0;
}
