#include <stdio.h>

int calcula_fatorial(int numero);

int main(){
    int numero, res;

    printf("Digite o valor que deseja calcular o fatorial: ");
    scanf("%d", &numero);
    printf("%d", calcula_fatorial(numero));
    return 0;

}

int calcula_fatorial(int numero){
    if (numero == 0){
        return 1;
    }
    else{
        return numero * calcula_fatorial(numero-1);
    }
}