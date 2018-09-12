#include "Entero.h"

Entero::Entero() {
	this->i = 0;
}

Entero::Entero(const int i) {
	this->i = i;
}

Entero operator+(const Entero &a, const Entero &b) {
	//chequear
	return Entero(a.i + b.i);
}

Entero operator-(const Entero &a, const Entero &b) {
	return Entero(a.i - b.i);
}

Entero operator/(const Entero &a, const Entero &b) {
	return Entero(a.i / b.i);
}

Entero operator*(const Entero &a, const Entero &b) {
	return Entero(a.i * b.i);
}

bool operator==(const Entero &a, const Entero &b) { 
	return a.i == b.i;
}

std::ostream& operator<<(std::ostream &os, const Entero &a) {
	os << a.i;
}
