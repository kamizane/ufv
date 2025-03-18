#include <stdio.h>
#include <stdlib.h>



int main(){
    int op,num1,num2;
    float res;
    printf("Pressione 1 para soma\n");
    printf("Pressione 2 para subtração\n");
    printf("Pressione 3 para multiplicação\n");
    printf("Pressione 4 para divisão\n");
    scanf("%d",&op);
    printf("Digite o primeiro número: ");
    scanf("%d",&num1);
    printf("Digite o segundo número: ");
    scanf("%d",&num1);


    return 0;

    switch (op){
        case 1:
            res = calcula_soma(num1,num2);
            printf("%.2f",res);
            break;

        case 2:
            res = calcula_sub(num1,num2);
            printf("%.2f",res);
            break;
        case 3:
            res = calcula_mult(num1,num2);
            printf("%.2f",res);
            break;
        case 1:
            res = calcula_div(num1,num2);
            printf("%.2f",res);
            break;
    }
}

