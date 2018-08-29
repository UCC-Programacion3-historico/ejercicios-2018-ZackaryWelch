#ifndef PROGRAMACION3_NODO_H
#define PROGRAMACION3_NODO_H

template<class T>
class nodo {
private:
    T dato;
    nodo<T> *next;
public:
    T setDato(T dato) {
        this->dato = dato;
    }

    T getDato() {
        return dato;
    }

    void setNext(nodo<T> *next) {
        this->next = next;
    }

    nodo<T>* getNext() {
        return next;
    }
};
#endif