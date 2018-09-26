#ifndef NODOARBOL_H
#define NODOARBOL_H

template<class T>
class NodoArbol {
private:
    Nodo *raiz;
public:
    void dinsertar(T dato) {}

    T buscar(T dato) {}

    void eliminar(T dato) {}

    void preorder() {}

    void inorder() {}

    void postorder() {}

    // void actualizar(T dato) {}

//    void print(bool esDerecho, string identacion) {
//        if (der != NULL) {
//            der->print(true, identacion + (esDerecho ? "     " : "|    "));
//        }
//        cout << identacion;
//        if (esDerecho) {
//            cout << " /";
//        } else {
//            cout << " \\";
//        }
//        cout << "-- ";
//        cout << dato << endl;
//        if (izq != NULL) {
//            izq->print(false, identacion + (esDerecho ? "|    " : "     "));
//        }
//    }
};

#endif //NODOARBOL_H
