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
ListaOcurrencias crear_lista_ocurrencias (Lista L){
    ListaOcurrencias res = new nodo_ocurrencias;
    ListaOcurrencias aux = NULL;
    while (L->sig != NULL)
    {
        L = L->sig;
        if (L == NULL || L->info != aux ->info)
        {
            if (aux == NULL)
            {
                res->sig = new nodo_ocurrencias;
                aux = res->sig;
            }
            
        }
        else
        {
            /* code */
        }
        
    }
    
}



int main()
{
    
    return 0;
}
