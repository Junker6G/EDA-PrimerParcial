#include <iostream>
using namespace std;

struct nodoAB {
int info;
nodoAB * izq, * der;
};
typedef nodoAB * AB;

AB cortarArbol (AB &a, int x){
    if(a == NULL) return NULL;
    if (a->info == x){
        AB recorte = a;
        a = NULL;
        return recorte;
    }
    AB izq = cortarArbol (a->izq, x);
    if(izq != NULL) return izq;
    AB der = cortarArbol (a->der, x); 
    if(der != NULL) return der;
}

// Un árbol perfecto es un árbol en el cual todos los nodos interiores tienen dos hijos y todos las hojas
// están en el mismo nivel. Un árbol vacío y un árbol con un sólo nodo son árboles perfectos.
// Implemente una función recursiva maxAlturaPerfecto que, dado un árbol a devuelve la altura del
// subárbol máximo perfecto con la misma raíz que a. Notar que la altura del subárbol máximo perfecto
// está determinada por el nodo más cercano a la raíz que no tenga alguno de los hijos, ver nodo 6 de la
// Figura. Recordar que la altura del árbol vacío es 0 y la de un árbol con un sólo nodo es 1.

int maxAlturaPerfecto (AB a) {
    if (a == NULL)
        return 0;
    if (a->izq == NULL || a->der == NULL)
        return 1;
    else 
        return 1 + minimo (maxAlturaPerfecto (a->izq), maxAlturaPerfecto (a->der));
}