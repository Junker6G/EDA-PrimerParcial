#include <iostream>
using namespace std;

struct nodoLista {
int info;
nodoLista * sig;
};
typedef nodoLista * Lista;

// Implementar iterativamente la operación insLuego, que dados dos enteros e1 y e2, y dada una lista
// L, inserta a e2 en la posición inmediatamente posterior a la de la primera ocurrencia del elemento
// e1 en L, si e1 pertenece a L. Si e1 no pertenece a L, la operación no tendrá efecto.

void insLuego (Lista & L, int e1, int e2){
    if(L == NULL) return;
    Lista aux = L;
    while (aux->sig != NULL)
    {
        if (aux->info  == e1)
        {
            Lista res = new nodoLista;
            res->info = e2;
            res->sig = aux->sig;
            aux->sig = res;
            return;
        }
        aux = aux->sig;
    }
    return;
}

int main()
{
    
    return 0;
}
