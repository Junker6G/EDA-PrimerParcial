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

// Recorre la lista L, crea una lista con múltiples ocurrencias y la retorna
// Pre-Condición: L está ordenada de menor a mayor, pudiendo contener elementos repetidos
// Post-Condición: la lista resultante deberá estar ordenada de menor a mayor
ListaOcurrencias crear_lista_ocurrencias(Lista L)
{
    ListaOcurrencias res = new nodo_ocurrencias;
    ListaOcurrencias aux = NULL;

    if (L->sig == NULL)
        return res;

    while (L->sig != NULL)
    {
        L = L->sig;
        if (aux == NULL || L->info != aux->info)
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

// Elimina a lo sumo 'cant' ocurrencias del nodo con información 'elem'
// Si 'cant' es mayor o igual a la cantidad de ocurrencias de ‘elem' dentro de la lista
// entonces el nodo debe ser eliminado
void eliminar_ocurrencias(ListaOcurrencias L, int elem, unsigned cant)
{
    ListaOcurrencias aux = L;
    if (aux->sig == NULL) return;
    while (aux->sig != NULL || L->sig->info < elem)
    {
        L= L->sig;
        if (elem == L->info && L)
        {
            
        }
        
    }
    
}

int main()
{

    return 0;
}
