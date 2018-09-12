#ifndef COLA_H
#define COLA_H

#include "nodo.h"

/**
 * Clase que implementa una Cola generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Cola {
private:
	nodo<T> *entrada;
	nodo<T> *salida;
public:
    Cola();

    ~Cola();

    void encolar(T dato);

    T desencolar();

    bool esVacia();
};


/**
 * Constructor de la clase Cola
 * @tparam T
 */
template<class T>
Cola<T>::Cola() {
	entrada = nullptr;
	salida = nullptr;
}


/**
 * Destructor de la clase Cola, se encarga de liberar la memoria de todos los nodos
 * utilizados en la Cola
 * @tparam T
 */
template<class T>
Cola<T>::~Cola() {}


/**
 * Inserta un dato en la Cola
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void Cola<T>::encolar(T dato) {
	auto *nuevo = new nodo<T>(dato, nullptr);
	if(entrada != nullptr)
		entrada->setNext(nuevo);
	else
		salida = nuevo;
	entrada = nuevo;
}


/**
 * Obtener el dato de la Cola
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T Cola<T>::desencolar() {
	if (salida == nullptr)
        throw 1;

    T dato = salida->getDato();
    nodo<T> *salida_anterior = salida;
    salida = salida->getNext();

    if (salida == nullptr)
        entrada = nullptr;

    delete salida_anterior;
    return dato;
}

/**
 * Responde si la Cola se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool Cola<T>::esVacia() {
	return (salida == nullptr);
}

#endif //LISTA_H
