#ifndef ARBOLBINARIO_H 
#define ARBOLBINARIO_H

#include "NodoArbol.h"

template<class T>
class ArbolBinario {
private:

public:
    ArbolBinario();

    void put(T dato);

    void put(T dato, NodoArbol<T> *r);

    T search(T dato);

    T search(T dato, NodoArbol<T> *r);

    void remove(T dato);

    void remove(T dato, NodoArbol<T> *r);

    void preorder();

    void inorder();

    void postorder();

    ~ArbolBinario();

    bool esVacio();

    void print();

};


/**
 * Constructor del Arbol
 * @tparam K Clave por la cual va a ordenar el árbol
 * @tparam T Valor guardado por el árbol
 */
template<class T>
ArbolBinario<T>::ArbolBinario() {

}


/**
 * Destructor del Arbol
 */
template<class T>
ArbolBinario<T>::~ArbolBinario() {

}


/**
 * Busca un dato en el árbol. Si no esta el dato en el árbol
 * tira una excepción
 * @param clave Valor a buscar
 * @return el valor buscado
 */
template<class T>
T ArbolBinario<T>::search(T dato) {
    return search(dato, raiz);
}

template<class T>
T ArbolBinario<T>::search(T dato, NodoArbol<T> *r) {
}

/**
 * Agrega un dato al árbol
 * @param clave Clave para agregar el dato
 * @param dato Dato a agregar
 */
template<class T>
void ArbolBinario<T>::put(T dato) {
    if(raiz != nullptr)
        put(dato, raiz)
    else
        raiz = NodoArbol<T>(dato);
}

template<class T>
void ArbolBinario<T>::put(T dato, NodoArbol<T> *r) {
    T miDato = r->getDato();

    if(miDato == dato)
        throw 200;

    auto nuevo = NodoArbol<T>(dato);
   
    if(dato > miDato) {
        if(dato > r->getDato()) {
            put(dato, r->getDer());
        }else{
            r->setDer(nuevo);
        }
    }else{
        if (dato < r->getDato()) {
            put(dato, r->getIzq());
        }else{
            r->setIzq(nuevo);
        }
    } 
}

/**
 * Elimina un dato del árbol
 * @param clave Clave para identificar el nodo a borrar
 */
template<class T>
NodoArbol<T> *ArbolBinario<T>::remove(T dato) {
    raiz = remove(dato, raiz);
    return raiz;
}

template<class T>
NodoArbol<T> *ArbolBinario<T>::remove(T dato, NodoArbol<T> *r) {
    if(r == nullptr)
        throw 404;
    if(dato > r->getDato()) {
        r->setDer(remove(dato, r->getDer()));
        return r;
    }
    if(dato < r->getDato()) {
        r->setIzq(remove(dato, r->getIzq()));
        return r;
    }

    if(r->getIzq() != nullptr)
        put(r->getIzq(), r->getDer());

    NodoArbol<T> *aux = r->getDer();
    delete r;

    return aux;
}

/**
 * Informa si un árbol esta vacío
 * @return
 */
template<class T>
bool ArbolBinario<T>::esVacio() {
    return false;
}


/**
 * Recorre un árbol en preorden
 */
template<class T>
void ArbolBinario<T>::preorder() {

}


/**
 * Recorre un árbol en orden
 */
template<class T>
void ArbolBinario<T>::inorder() {

}


/**
 * Recorre un árbol en postorden
 */
template<class T>
void ArbolBinario<T>::postorder() {

}


/**
 * Muestra un árbol por consola
 */
template<class T>
void ArbolBinario<T>::print() {

}


#endif //ARBOLBINARIO_H
