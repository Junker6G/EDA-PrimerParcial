#include <iostream>
using namespace std;

struct nodoListaPal
{
    string info;
    nodoListaPal *sig;
};
typedef nodoListaPal *ListaPal;

bool comparar(string, string);

int ocurrenciasPal(ListaPal L, string pal)
{
    if (L = NULL)
        return NULL;
    if (comparar(L->info, pal))
        return 1 + ocurrenciasPal(L->sig, pal);
    else
        ocurrenciasPal(L->sig, pal);
}

void insertar(ListaPal L, int k, string pal){
    if (L->sig == NULL && k != 1) return;
    
}



int main()
{
    return 0;
}
