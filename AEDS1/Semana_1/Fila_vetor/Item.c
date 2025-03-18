#include <stdlib.h>
#include "Item.h"

#include <stdio.h>
#include <stdlib.h>
#include "item.h"


TItem* cria_item(int valor) {
    TItem* item = (TItem*) malloc(sizeof(TItem));
    if (item != NULL) {
        item->Chave = valor;
    }
    return item;
}

void destroi_item(TItem* item) {
    free(item);
}

int obtem_valor(TItem* item) {
    return item->Chave;
}

void altera_valor(TItem* item, int novo_valor) {
    item->Chave = novo_valor;
}

int compara_items(TItem* item1, TItem* item2) {
    return item1->Chave - item2->Chave;
}

void imprime_item(TItem* item) {
    printf("%d\n", item->Chave);
}
