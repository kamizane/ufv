#ifndef LISTA_H
#define LISTA_H
#include "Item.h"
#define MaxTam 1000

typedef struct {
    TItem Item[MaxTam];
    int ultimo,primeiro;
}TLista;

void faz_lista_vazia(TLista* lista);
int lista_eh_vazia(TLista* lista);
int insere_lista(TLista* lista, TItem x);
int remove_item_lista(TLista* lista, int p, TItem* PX);
void imprime_lista(TLista* lista);

#endif