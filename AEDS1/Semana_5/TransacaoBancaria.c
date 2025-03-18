#include "TransacaoBancaria.h"
#include <stdio.h>
#include <string.h>


void Inicializa_TransacaoBancaria(TransacaoBancaria* conta, char* id,unsigned short dia, unsigned short mes,unsigned short ano,unsigned short horas,unsigned short minutos, tipo_operacao tipo_op, float valor){
    set_identificador(conta,id);
    set_data(conta,dia,mes,ano);
    set_horas(conta,horas,minutos);
    set_tipo_operacao(conta, tipo_op);
    set_valor(conta, valor);
}



void Preenche_TransacaoBancaria(TransacaoBancaria* conta){
    char id[14];
    unsigned short dia,mes,ano,horas,minutos;
    int tipo_op;
    float valor;

    printf("Digite o identificador da transacao bancaria: ");
    scanf("%[^\n]",id);

    printf("Digite a data da transação: ");
    scanf("%hu/%hu/%hu",&dia,&mes,&ano);

    printf("Digite o horario da transacao: ");
    scanf("%hu:%hu:",&horas,&minutos);

    printf("Digite o tipo de operacao realizada(1 - Saque  2 - Deposito): ");
    scanf("%d",&tipo_op);getc(stdin);

    switch(tipo_op){
        case 1:
            tipo_op = SAQUE;
            break;
        default:
            tipo_op = DEPOSITO;
            break;
    }

    printf("Digite o valor da transacao: ");
    scanf("%f",&valor);getc(stdin);

    Inicializa_TransacaoBancaria(conta,id,dia,mes,ano,horas,minutos,tipo_op,valor);
}


void Imprime_TransacaoBancaria(TransacaoBancaria *conta){
    printf("-------------------------------\n");
    printf("Transacao bancaria id: %s\n",conta->identificador);
    printf("Data da transacao: %hu/%hu/%hu\n",conta->data.dia,conta->data.mes, conta->data.ano);
    printf("Hora da transacao: %hu:%hu\n",conta->hora.horas,conta->hora.minutos);
}


void set_identificador(TransacaoBancaria* conta, char* id){
    strcpy(conta->identificador, id);
}

void set_data(TransacaoBancaria* conta,unsigned short dia, unsigned short mes,unsigned short ano){
    conta->data.dia = dia;
    conta->data.mes = mes;
    conta->data.ano = ano;
}

void set_horas(TransacaoBancaria* conta, short horas,unsigned short minutos){
    conta->hora.horas = horas;
    conta->hora.minutos = minutos;    
}

void set_tipo_operacao(TransacaoBancaria* conta, tipo_operacao tipo_op){
    conta->operacao = tipo_op;
}

void set_valor(TransacaoBancaria* conta, float valor){
    conta->valor = valor;
}

Data get_data(TransacaoBancaria* conta){
    return (conta->data);
}