#include <iostream>

using namespace std;

int main() {
	int segundosE, horas, minutos, segundosR;
    cout << "Ejercicio 00/04\n" << endl;

	cout << "Entrae segundos: ";
	cin >> segundosE;

	horas = segundosE / 3600;
	minutos = (segundosE % 3600) / 60;
	segundosR = segundosE % 60;

	cout << segundosE << " segundos equivalen a: " << horas << " horas, " << minutos << " minutos y " << segundosR << " segundos.";

    return 0;
}
