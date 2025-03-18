#include <stdio.h>
#include <stdlib.h>

int main(){
    int qnt_carros[30];
    float media=0;
    for (int i=0;i<30;i++){
        printf("digite a quantidade de carros do dia %d:",i);
        scanf("%d",&qnt_carros[i]);
        media += qnt_carros[i];
    }
    media = media / 30;
    int aux;
    for (int i =0;i<30;i++){
        for (int j=0;j<30;j++){
            if (qnt_carros[i]<qnt_carros[j]){
                aux = qnt_carros[j];
                qnt_carros[j] = qnt_carros[i];
                qnt_carros[i] = aux;
            }
        }
    }
    for (int i=0;i<30;i++){
        printf("Dia %d:%d carros\n",i,qnt_carros[i]);
    }
    printf("A média de carros nos 30 dias foi de: %.2f",media);
    return 0;
}
