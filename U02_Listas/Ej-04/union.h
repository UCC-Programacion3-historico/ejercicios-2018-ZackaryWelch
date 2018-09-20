#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H

template<class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB) {
    Lista<T> *c = new Lista<T>();
    
    for(int i = 0; i < lisA.getTamanio(); i++)
        c->insertarUltimo(lisA.getDato(i));
    for(int i = 0; i < lisB.getTamanio(); i++)
        c->insertarUltimo(lisB.getDato(i));

    return c;
}

#endif //UNION_H