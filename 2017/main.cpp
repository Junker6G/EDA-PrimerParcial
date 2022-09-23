#include <iostream>

using namespace std;

struct nodoLista {
    int info;
    nodoLista * sig;
};

typedef nodoLista * Lista;

int main()
{
    cout<<"Hello World";

    return 0;
}

//EJERCICIO 2 
// a)

void insLuego (Lista & L, int e1, int e2){
    Lista aux = L;
    while (aux != NULL && aux != e1){
        aux = aux->sig;
    }
    if (aux == NULL)
        return;
    Lista nuevo = new nodoLista;
    nuevo->info = e2;
    nuevo->sig = aux->sig;
    aux->sig = nuevo;
}

//  b)

Lista insOrd (Lista L, int x){
    Lista res = NULL;
    if (L == NULL){
        Lista aux = new nodoLista;
        aux->info = x;
        aux->sig = res;
        res = aux;
    }
    while (L != NULL){
        if (L->info > x && L->sig->info < x){
            Lista aux = new nodoLista;
            aux->info = x;
            aux->sig = res;
            res = aux;
        }
        Lista aux = new nodoLista;
        aux->info = L->info;
        aux->sig = res;
        res = aux;
        L = L->sig;
    }
    return res;
}

// EJERCICIO 3

Lista cortarPrimeros (Lista & L, int n){
    if (L == NULL || n < 1)
        return NULL;
    if (n == 1){
        Lista aux = L->sig;
        L->sig = NULL;
        return aux;
    }
    return cortarPrimeros (L->sig, n-1);
}