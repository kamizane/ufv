#include <stdio.h>

void rotaciona_valores(int *pta, int *ptb, int *ptc);

int main(){
    int a,b,c;
    printf("Digite a,b,c: ");
    scanf("%d,%d,%d", &a,&b,&c);

    rotaciona_valores(&a,&b,&c);
    printf("%d %d %d", a,b,c);
    return 0;
}

void rotaciona_valores(int *pta, int *ptb, int *ptc){
    int aux;
    aux = *ptb;
    *ptb = *pta;
    *pta = aux;
    aux = *ptc;
    *ptc = *pta;
    *pta = aux;

}