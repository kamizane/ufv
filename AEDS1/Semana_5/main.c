#include "Lista_de_transacoes.h"
#include <stdio.h>

int main(){
    TransacaoBancaria transacao1,transacao2,transacao3,transacao4,transacao5;
    lista_de_transacoes lista1,lista2,lista_concat;
    Preenche_TransacaoBancaria(&transacao1);
    Preenche_TransacaoBancaria(&transacao2);
    Faz_lista_vazia(&lista1);
    Faz_lista_vazia(&lista2);
    Faz_lista_vazia(&lista_concat);
    Insere_item_final_lista(&lista1,transacao1);
    Insere_item_final_lista(&lista1,transacao2);
    Insere_item_final_lista(&lista1,transacao1);
    Insere_item_final_lista(&lista1,transacao2);
    Insere_item_final_lista(&lista1,transacao1);
    Insere_item_final_lista(&lista1,transacao2);
    Insere_item_final_lista(&lista1,transacao1);
    Insere_item_final_lista(&lista1,transacao1);
    Insere_item_final_lista(&lista1,transacao1);
    Insere_item_final_lista(&lista1,transacao1);
    intercala_listas(&lista1,&lista2,&lista_concat);
    imprime_lista(&lista_concat);
    return 0;
}