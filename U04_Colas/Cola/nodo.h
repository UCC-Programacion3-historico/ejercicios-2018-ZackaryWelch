#ifndef PROGRAMACION3_NODO_H
#define PROGRAMACION3_NODO_H

template<class T>
class nodo {
private:
    T dato;
    nodo *next;
public:
	nodo(T d) {
		dato = d;
		next = nullptr;
	}

	nodo(T d, nodo *n) {
		dato = d;
		next = n;
	}

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
