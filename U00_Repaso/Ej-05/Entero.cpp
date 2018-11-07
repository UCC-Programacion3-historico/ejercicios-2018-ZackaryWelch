#include "Entero.h"

Entero::Entero() {
	this->i = 0;
	this->j = 0;
	this->k = 0;
}

Entero::Entero(const int i) {
	this->i = i;
	this->j = i;
	this->k = i;
}

Entero operator+(const Entero &a, const Entero &b) {
	if(a.i + b.i != a.j + b.j)
		throw 1;
	if(a.i + b.i != a.k + b.k)
		throw 1;
	if(a.j + b.j != a.k + b.k)
		throw 1;
	return Entero(a.i + b.i);
}

Entero operator-(const Entero &a, const Entero &b) {
	if(a.i - b.i != a.j - b.j)
		throw 1;
	if(a.i - b.i != a.k - b.k)
		throw 1;
	if(a.j - b.j != a.k - b.k)
		throw 1;
	return Entero(a.i - b.i);
}

Entero operator/(const Entero &a, const Entero &b) {
	if(a.i / b.i != a.j / b.j)
		throw 1;
	if(a.i / b.i != a.k / b.k)
		throw 1;
	if(a.j / b.j != a.k / b.k)
		throw 1;
	return Entero(a.i / b.i);
}

Entero operator*(const Entero &a, const Entero &b) {
	if(a.i * b.i != a.j * b.j)
		throw 1;
	if(a.i * b.i != a.k * b.k)
		throw 1;
	if(a.j * b.j != a.k * b.k)
		throw 1;
	return Entero(a.i * b.i);
}

bool operator==(const Entero &a, const Entero &b) { 
	return a.i == b.i and a.j == b.j and a.k == b.k;
}

std::ostream& operator<<(std::ostream &os, const Entero &a) {
	os << a.i;
}
