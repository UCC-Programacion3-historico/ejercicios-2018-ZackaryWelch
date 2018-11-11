#ifndef REPASO_ENTERO_H
#define REPASO_ENTERO_H

#include <exception>
#include <ostream>

class Entero {
public:
	Entero();
	Entero(int i);
	int i, j, k;
};

Entero operator+(const Entero &a, const Entero &b);
Entero operator-(const Entero &a, const Entero &b);
Entero operator/(const Entero &a, const Entero &b);
Entero operator*(const Entero &a, const Entero &b);
bool operator==(const Entero &a, const Entero &b);
std::ostream& operator<<(std::ostream &os, const Entero &a);

#endif //REPASO_ENTERO_H
