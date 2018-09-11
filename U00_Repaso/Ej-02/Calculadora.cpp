#include "Calculadora.h"

template<class T, class P>
T Calculadora<T,P>::sumar(T a, T b) {
	return a + b;
}

template<class T, class P>
T Calculadora<T,P>::restar(T a, T b) {
	return a - b;
}

template<class T, class P>
T Calculadora<T,P>::dividir(T a, T b) {
	return a / b;
}

template<class T, class P>
P Calculadora<T,P>::multiplicar(T a, T b) {
	return a * b;
}

template<class T, class P>
bool Calculadora<T, P>::igual(T a, T b) {
	return a == b;
}
