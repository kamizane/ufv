#ifndef TRANSACAOBANCARIA_H
#define TRANSACAOBANCARIA_H

typedef enum {
    SAQUE = 1,
    DEPOSITO = 2
}tipo_operacao;

typedef struct {
    unsigned short dia;
    unsigned short mes;
    unsigned short ano;
}Data;

typedef struct {
    unsigned short horas;
    unsigned short minutos;
}Horas;


typedef struct {
    char identificador[14];
    Data data;
    Horas hora;
    tipo_operacao operacao;
    float valor;
}TransacaoBancaria;



void Inicializa_TransacaoBancaria(TransacaoBancaria* conta, char* id,unsigned short dia, unsigned short mes,unsigned short ano,unsigned short horas,unsigned short minutos, tipo_operacao tipo_op, float valor);
void Preenche_TransacaoBancaria(TransacaoBancaria* conta);
void Imprime_TransacaoBancaria(TransacaoBancaria *conta);
void set_identificador(TransacaoBancaria* conta, char* id);
void set_data(TransacaoBancaria* conta,unsigned short dia, unsigned short mes,unsigned short ano);
void set_horas(TransacaoBancaria* conta, short horas,unsigned short minutos);
void set_tipo_operacao(TransacaoBancaria* conta, tipo_operacao tipo_op);
void set_valor(TransacaoBancaria* conta, float valor);
Data get_data(TransacaoBancaria* conta);

#endif