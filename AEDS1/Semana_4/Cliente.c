#include <stdio.h>
#include "Cliente.h"
#include <string.h>



void Inicializa_cliente(Cliente* cliente, char *nome, char* CPF, ContaBancaria* conta, Endereco* endereco){
    set_nome_cliente(cliente,nome);
    set_CPF_cliente(cliente,CPF);
    set_endereco_cliente(cliente, endereco);
    set_conta_cliente(cliente, conta);

}

void preenche_cliente(Cliente* cliente){
    char nome[255];
    char CPF[14];
    char CEP[11];
    int numero;
    ContaBancaria conta;
    Endereco endereco;


    printf("Digite o nome do titular da conta: ");
    scanf("%[^\n]",nome);

    printf("Digite o CPF do titular da conta: ");
    scanf("%s",CPF);



    
    preenche(&conta);
    preenche_endereco(&endereco);
    Inicializa_cliente(cliente, nome, CPF, &conta, &endereco);
}




void set_nome_cliente(Cliente* cliente, char* nome){
    strcpy(cliente->nome_cliente,nome);
}

void set_CPF_cliente(Cliente* cliente, char* CPF){
    strcpy(cliente->CPF_cliente, CPF);
}

void set_endereco_cliente(Cliente* cliente, Endereco* endereco){
    strcpy(cliente->endereco.CEP_endereco, endereco->CEP_endereco);
    cliente->endereco.numero_endereco = endereco->numero_endereco;
}

void set_conta_cliente(Cliente* cliente, ContaBancaria* conta){
    cliente->conta.ano_de_abertura = conta->ano_de_abertura;
    cliente->conta.numero = conta->numero;
    cliente->conta.saldo = conta->saldo;
    cliente->conta.tipo_da_conta = conta->tipo_da_conta;
}
