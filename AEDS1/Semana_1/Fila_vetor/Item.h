#ifndef ITEM_H
#define ITEM_H

typedef struct {
    int Chave;
}TItem;

//sugestao do chat gpt
TItem* cria_item(int valor);
void destroi_item(TItem* item);
int obtem_valor(TItem* item);
void altera_valor(TItem* item, int novo_valor);
int compara_items(TItem* item1, TItem* item2);
void imprime_item(TItem* item);

#endif