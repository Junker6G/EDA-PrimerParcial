#include <iostream>
using namespace std;

struct nodo_lista
{
    int info;
    nodo_lista *sig;
};
typedef nodo_lista *Lista;

struct nodo_ocurrencias
{
    int info;
    unsigned cant;
    nodo_ocurrencias *sig;
};
typedef nodo_ocurrencias *ListaOcurrencias;

ListaOcurrencias crear_lista_ocurrencias(Lista L)
{
    ListaOcurrencias res = new nodo_ocurrencias;
    ListaOcurrencias aux = NULL;

    if (L->sig == NULL)
        return res;
    while (L != NULL)
    {
        L = L->sig;

        if (aux == NULL || res->info != L->info)
        {
            if (aux == NULL)
            {
                res->sig = new nodo_ocurrencias;
                aux = res->sig;
            }
            else
            {
                aux->sig = new nodo_ocurrencias;
                aux = aux->sig;
            }
            aux->info = L->info;
            aux->cant = 1;
        }
        else
            aux->cant++;
    }
    aux->sig = NULL;
    return res;
}