#include <stdio.h>
#include "Endereco.h"
#include <string.h>

void Inicializa_endereco(Endereco* endereco, char* CEP, int numero){
    set_CEP_cliente(endereco, CEP);
    set_numero_endereco_cliente(endereco,numero);
}

void preenche_endereco(Endereco* endereco){
    char CEP[14];
    int numero;

    printf("Digite o CEP do titular: ");
    scanf("%[^\n]",CEP);

    printf("Digite o numero da residencia do titular: ");
    scanf("%[^\n]", numero);

    Inicializa_endereco(endereco, CEP, numero);
}

void set_CEP_cliente(Endereco* endereco, char* CEP){
    strcpy(endereco->CEP_endereco, CEP);
}

void set_numero_endereco_cliente(Endereco* endereco, int numero){
    endereco->numero_endereco = numero;
}


int get_numero_endereco_cliente(Endereco* endereco, int numero){
    return(endereco->numero_endereco);
}