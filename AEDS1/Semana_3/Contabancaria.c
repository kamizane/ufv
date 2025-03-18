#include <stdio.h>
#include <string.h>
#include "Contabancaria.h"

void Inicializa(ContaBancaria* conta, int numero, float saldo, char* nome, char* CPF, int ano_de_abertura, Tipobancario tipo)
{

    set_numero(conta,numero);
    set_saldo(conta, saldo);
    set_nome(conta, nome);
    set_CPF(conta, CPF);
    set_ano_de_abertura(conta, ano_de_abertura);
    set_Tipobancario(conta, tipo);
}

void preenche(ContaBancaria* conta){
    int numero;
    float saldo;
    char nome[255];
    char cpf[14];
    int ano_de_abertura;
    int tipo;

    printf("Digite o número da conta: ");
    scanf("%d",&numero);

    printf("Digite o saldo da conta: ");
    scanf("%f", &saldo); getc(stdin);

    printf("Digite o nome do cliente: ");
    scanf("%[^\n]",nome);

    printf("DIgite o CPF: ");
    scanf("%s", cpf);

    printf("Digite o ano de abertura da conta: ");
    scanf("%d",&ano_de_abertura); 

    printf("Digite o tipo da conta (1 - Corrente  2 - Poupança): ");
    scanf("%d", &tipo); getc(stdin);

    switch(tipo){
        case 1:
            tipo = CORRENTE;
            break;
        default:
            tipo = POUPANCA;
            break;
    }
    
    Inicializa(conta, numero, saldo, nome, cpf, ano_de_abertura, tipo);
}

void Deposito (ContaBancaria* conta, double valor)
{
    (*conta).saldo += valor;
}

void Saque (ContaBancaria* conta, double valor)
{
    (*conta).saldo -= valor;
}

void Imprime (ContaBancaria* conta){
    char tipo[255];

    printf("Conta de Numero: %d\n", conta->numero);
    printf("Nome do cliente: %s\n",conta->nome_do_cliente);
    printf("CPF: %s\n", conta->CPF);
    printf("Aberta em: %d\n", conta->ano_de_abertura);

    switch ((*conta).tipo_da_conta)
    {
    case CORRENTE:
        strcpy(tipo, "Corrente");
        break;
    
    default:
        strcpy(tipo, "Poupança");
        break;
    }
    printf("Tipo da conta: %s\n", tipo);
    printf("Saldo: %f\n", conta->saldo);

    
}

void Emprestimo (ContaBancaria* conta){
    int ano;
    printf("Dgite o ano atual: ");
    scanf("%d",&ano);
    if (ano - (*conta).ano_de_abertura <= 5){
        printf("Emprestimo Negado");
    }
    else {
        printf("Emprestimo Autorizado");
    }
}

void set_numero(ContaBancaria* conta, int numero){
    conta->numero = numero;
}

void set_saldo(ContaBancaria* conta, float saldo){
    conta->saldo = saldo;
}

void set_nome(ContaBancaria* conta, char* nome){
    strcpy(conta->nome_do_cliente, nome);
}

void set_CPF(ContaBancaria* conta, char* CPF){
    strcpy(conta->CPF, CPF);
}

void set_ano_de_abertura(ContaBancaria* conta, int ano_de_abertura){
    conta->ano_de_abertura = ano_de_abertura;
}

void set_Tipobancario(ContaBancaria* conta, Tipobancario tipo){
    conta->tipo_da_conta = tipo;
}

int get_numero(ContaBancaria* conta){
    return(conta->numero);
}

float get_saldo(ContaBancaria* conta){
    return(conta->saldo);
}
