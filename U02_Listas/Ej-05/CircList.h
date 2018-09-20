#include "nodo.h"
#include <ostream>

#ifndef CIRCLIST_H
#define CIRCLIST_H

/**
 * Clase que implementa una CircList Enlasada generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class CircList {
private:
    nodo<T> *inicio;
public:
    CircList();

    CircList(const CircList<T> &li);

    ~CircList();

    bool esVacia();

    int getTamanio();

    void insertar(unsigned int pos, T dato);

    void insertarPrimero(T dato);

    void insertarUltimo(T dato);

    void remover(unsigned int pos);

    T getDato(int pos);

    void reemplazar(int pos, T dato);

    void vaciar();
};


/**
 * Constructor de la clase CircList
 * @tparam T
 */
template<class T>
CircList<T>::CircList() {
    inicio = nullptr;
}


/**
 * Constructor por copia de la clase CircList
 * @tparam T
 * @param li
 */
template<class T>
CircList<T>::CircList(const CircList<T> &li) {}


/**
 * Destructor de la clase CircList, se encarga de liberar la memoria de todos los nodos
 * utilizados en la CircList
 * @tparam T
 */
template<class T>
CircList<T>::~CircList() {}


/**
 * Metodo para saber si la CircList esta vacia
 * @tparam T
 * @return true si la CircList esta vacia, sino false
 */
template<class T>
bool CircList<T>::esVacia() {
    return inicio == nullptr;
}


/**
 * Metodo para obtener la cantidad de nodos de la CircList
 * @tparam T
 * @return la cantidad de nodos de la CircList
 */
template<class T>
int CircList<T>::getTamanio() {
    int cant = 0;
    nodo<T> *aux = inicio;

    while(aux != nullptr) {
        cant++;
        aux = aux->getNext();
    }

    return cant;
}


/**
 * Inserta un nodo con el dato en la posicion pos
 * @tparam T
 * @param pos lugar donde será insertado el dato
 * @param dato  dato a insertar
 */
template<class T>
void CircList<T>::insertar(unsigned int pos, T dato) {
    auto *nuevo = new nodo<T>();
    nuevo->setDato(dato);
    nodo<T> *aux = inicio;
    unsigned int pos_actual = 0;

    if(pos == 0) {
        nuevo->setNext(inicio);
        inicio = nuevo;
        return;
    }

    while(pos_actual < pos - 1 and aux != nullptr) {
        pos_actual++;
        aux = aux->getNext();
    }

    if(aux == nullptr)
        throw 1;

    nuevo->setNext(aux->getNext());
    aux->setNext(nuevo);
}


/**
 * Inserta un nodo con el dato en la primera posicion
 * @tparam T
 * @param dato dato a insertar
 */
template<class T>
void CircList<T>::insertarPrimero(T dato) {
    insertar(0, dato);
}


/**
 * Inserta un nodo con el dato en la ultima posicion
 * @tparam T
 * @param dato dato a insertar
 */
template<class T>
void CircList<T>::insertarUltimo(T dato) {
    insertar(getTamanio(), dato);
}


/**
 * Elimina el nodo en la posicion 'pos' de la CircList enlasada
 * @tparam T
 * @param pos posicion del nodo a eliminar
 */
template<class T>
void CircList<T>::remover(unsigned int pos) {
    auto *aux = inicio;

    while(pos > 1 && aux != nullptr) {
        pos--;
        aux = aux->getNext();
    }

    if(aux == nullptr) {
        throw 1;
    }

    if(pos == 0){
        inicio = inicio->getNext();
        delete aux;
    }else {
        auto *siguiente = aux->getNext();
		if(siguiente == nullptr)
			throw 2;
        aux->setNext(siguiente->getNext());
        delete siguiente;
    }
}


/**
 * Obtener el dato del nodo en la posicion pos
 * @tparam T
 * @param pos posicion del dato
 * @return dato almacenado en el nodo
 */
template<class T>
T CircList<T>::getDato(int pos) {
    auto *aux = inicio;

    while(pos > 0 && aux != nullptr) {
        pos--;
        aux = aux->getNext();
    }

    if(aux == nullptr) {
        throw 1;
    }

    return aux->getDato();
}


/**
 * Reemplaza el dato almacenado en un nodo por este otro
 * @tparam T
 * @param pos posicion donde se desea reemplazar
 * @param dato nuevo dato a almacenar
 */
template<class T>
void CircList<T>::reemplazar(int pos, T dato) {
    auto *aux = inicio;

    while(pos > 0 && aux != nullptr) {
        pos--;
        aux = aux->getNext();
    }

    if(aux == nullptr) {
        throw 1;
    }

    aux->setDato(dato);
}


/**
 * Función que vacia la CircList enlazada
 * @tparam T
 */
template<class T>
void CircList<T>::vaciar() {}

template<class T>
std::ostream& operator<<(std::ostream& os, CircList<T>& l) {
  	for(int i = 0; i < l.getTamanio(); i++) {
        os << l.getDato(i);
        if(i != l.getTamanio()-1)
            os << "->";
    }  
    return os;
}

#endif //CIRCLIST_H1