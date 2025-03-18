#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Contabancaria.h"

int main (int argc, char **argv){
    setlocale(LC_ALL, "Portuguese");


    ContaBancaria *clientes = (ContaBancaria *) malloc(5 * sizeof (ContaBancaria));
    
    ContaBancaria conta1;
    preenche(&clientes[0]);
    preenche(&clientes[1]);
    preenche(&clientes[2]);
    preenche(&clientes[3]);
    preenche(&clientes[4]);

    ContaBancaria *newclientes = (ContaBancaria *) realloc(clientes, 10);
    printf("\nAntes da movimentacao:\n ");
    Imprime(&conta1);
    Deposito(&conta1, 50.00);
    Saque(&conta1, 70.00);
    printf("\nDepois da movimentacao:\n ");
    Imprime (&conta1);
    Emprestimo(&conta1);
}
