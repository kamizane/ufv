#include <stdio.h>
#include <stdlib.h>

void calcula_data(int num, int *ptr_dia,int *ptr_mes);

int main(){
    int num,dia,mes; 
    dia = 0;
    mes = 0;
    scanf("%d",&num);
    calcula_data(num,&dia,&mes);
    return 0;
}

void calcula_data(int num,int *ptr_dia,int *ptr_mes){
    char *vetor[12]= {"janeiro\0","fevereiro\0","marco\0","abril\0","maio\0","junho\0","julho\0","agosto\0","setembro\0","outubro\0","novembro\0","dezembro\0"};
    int count;
    count = 0;
    while (num >= 30){
        num -= 30;
        count +=1;
    }
    *ptr_dia = num;
    *ptr_mes = count;
    printf("%d/%s",*ptr_dia,vetor[*ptr_mes]);

}