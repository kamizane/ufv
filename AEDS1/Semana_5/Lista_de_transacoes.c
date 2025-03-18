#include "Lista_de_transacoes.h"
#include <stdio.h>




void Faz_lista_vazia(lista_de_transacoes* lista){
    lista->primeiro = 0;
    lista->ultimo = 0;
}

int verifica_lista_vazia(lista_de_transacoes* lista){
    return (lista->primeiro == lista->ultimo);
}

int Insere_item_final_lista(lista_de_transacoes* lista, TransacaoBancaria item){
    if (lista->ultimo == MaxTam){
        return 0;
    }
    else{
        lista->Item[lista->ultimo] = item;
        lista->ultimo++;
        return 1;
    }
}


int remove_item_pos_lista(lista_de_transacoes* lista, int p, TransacaoBancaria* paux){
    if (verifica_lista_vazia(lista) || p >= lista->ultimo || p < 0){
        return 0;
    }
    else{
        *paux = lista->Item[p-1];
        for (int cont  = p; cont <lista->ultimo;cont++){
            lista->Item[cont-1] = lista->Item[cont];
        }
        lista->ultimo--;
        return 1;
    }
}

int remove_item_final_lista(lista_de_transacoes* lista, TransacaoBancaria* paux){
    if (verifica_lista_vazia(lista)){
        return 0;
    }
    else{
        *paux = lista->Item[lista->ultimo-1];
        lista->ultimo--;
        return 1;
    }
}

void imprime_lista(lista_de_transacoes* lista){
    if(verifica_lista_vazia(lista)){
        printf("A listá está vazia");
    }
    else{
        printf("-------------------------------\n");
        printf("Itens da lista:\n");
        for(int cont = 0; cont<lista->ultimo; cont++){
            printf("%s\n",lista->Item[cont].identificador);
        }
    }
}

void 
































intercala_listas(lista_de_transacoes* lista1, lista_de_transacoes* lista2, lista_de_transacoes* lista_concat){
    if (lista1->ultimo >= lista2->ultimo){
        for (int cont = 0; cont < lista2->ultimo; cont++){
            Insere_item_final_lista(lista_concat,lista1->Item[cont]);
            Insere_item_final_lista(lista_concat,lista2->Item[cont]);
        }
        for (int cont = lista2->ultimo; cont < lista1->ultimo; cont++){
            Insere_item_final_lista(lista_concat,lista1->Item[cont]);
        }
    }
    else{
        for (int cont = 0; cont< lista1->ultimo; cont++){
            Insere_item_final_lista(lista_concat,lista1->Item[cont]);
            Insere_item_final_lista(lista_concat,lista2->Item[cont]);  
        }
        for (int cont = lista2->ultimo; cont < lista2->ultimo; cont++){
            Insere_item_final_lista(lista_concat,lista2->Item[cont]);
        }
    }
}