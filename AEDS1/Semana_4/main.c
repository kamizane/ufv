#include <stdio.h>
#include "Cliente.h"

int main(){
    Cliente cliente1;
    preenche_cliente(&cliente1);
    printf("\nAntes da movimentacao:\n ");
    Imprime_contaBancaria(&cliente1.conta);
    Deposito(&cliente1.conta, 2000);
    Saque(&cliente1.conta, 100);
    printf("\nDepois da movimentacao:\n ");
    Imprime_contaBancaria(&cliente1.conta);
    Emprestimo(&cliente1.conta);
}