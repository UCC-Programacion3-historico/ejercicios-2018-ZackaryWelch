//
// Created by martin on 29/08/18.
//

#ifndef PROGRAMACION3_NODO_H
#define PROGRAMACION3_NODO_H

template<class T>
class nodo {
private:
    T dato;
    nodo *next;
public:
    T getDato() {
        return dato;
    }

    /**
     *
     * @param d
     */
    void setDato(T d) {
        dato = d;
    }

    nodo *getNext() {
        return next;
    }

    void setNext(nodo *n) {
        next = n;
    }
};


#endif //PROGRAMACION3_NODO_H
