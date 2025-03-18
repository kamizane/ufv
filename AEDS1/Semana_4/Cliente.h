#include "Contabancaria.h"
#include "Endereco.h"
 
 typedef struct {
    char nome_cliente[255];
    char CPF_cliente[14];
    Endereco endereco;
    ContaBancaria conta;
 }Cliente;


void Inicializa_cliente(Cliente* cliente, char *nome, char* CPF, ContaBancaria* conta, Endereco* Endereco);
void preenche_cliente(Cliente* cliente);


void set_nome_cliente(Cliente* cliente, char* nome);

void set_CPF_cliente(Cliente* cliente, char* CPF);



void set_endereco_cliente(Cliente* cliente, Endereco* endereco);
void set_conta_cliente(Cliente* cliente, ContaBancaria* conta);