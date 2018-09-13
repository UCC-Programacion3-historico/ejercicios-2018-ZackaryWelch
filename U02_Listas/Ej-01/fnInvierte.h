#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H

template <class T>
void fnInvierte (Lista<T> *lis);

template <class T>
void fnInvierte (Lista<T> *lis){
	int tamanio = lis->getTamanio() - 1;

	for(int i = 0; i < lis->getTamanio() / 2; i++) {
		T pri = lis->getDato(i);
		lis->reemplazar(i, lis->getDato(tamanio - i));
		lis->reemplazar(tamanio - i, pri);
	}
}

#endif //FNINVIERTE_H
