#include <stdio.h>
#include "Lista.h"

void faz_lista_vazia(TLista* lista){
    lista->primeiro = 0;
    lista->ultimo = 0;
}

int lista_eh_vazia(TLista* lista){
    return (lista->primeiro == lista->ultimo);

}

int insere_lista(TLista* lista, TItem x){
    if (lista->ultimo == MaxTam){
        return 0;
    }
    else{
        lista->Item[lista->ultimo] = x;
        lista->ultimo++;
        return 1;
    }
}

int remove_item_lista(TLista* lista, int p, TItem* PX){
    int cont;

    if(lista_eh_vazia(lista) || p >= lista->ultimo || p<0){
        return 0;
    }
    *PX = lista->Item[p-1]; //assim, o decimo item da lista corresponde ao indice 9 do vetor
    for (cont = p; cont < lista->ultimo; cont++){
        lista->Item[cont-1] = lista->Item[cont];
    }
    lista->ultimo--;
    return 1;
}

void imprime_lista(TLista* lista){
    for (int i=0; i< lista->ultimo; i++){
        printf("%d\n", lista->Item[i].Chave);
    }
}