#ifndef LISTA_DE_TRANSACOES_H
#define LISTA_DE_TRANSACOES_H

#include "TransacaoBancaria.h"
#define MaxTam 1000


typedef struct {
    TransacaoBancaria Item[MaxTam];
    int primeiro, ultimo;
}lista_de_transacoes;



void Faz_lista_vazia(lista_de_transacoes* lista);
int verifica_lista_vazia(lista_de_transacoes* lista);
int Insere_item_final_lista(lista_de_transacoes* lista, TransacaoBancaria item);
int remove_item_pos_lista(lista_de_transacoes* lista, int p, TransacaoBancaria* paux);
int remove_item_final_lista(lista_de_transacoes* lista, TransacaoBancaria* paux);
void imprime_lista(lista_de_transacoes* lista);
void intercala_listas(lista_de_transacoes* lista1, lista_de_transacoes* lista2, lista_de_transacoes* lista_concat);
#endif