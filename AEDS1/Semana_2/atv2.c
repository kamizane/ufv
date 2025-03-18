#include <stdio.h>

void calcula_peso(float caixas_total[]);

int main(){
    float caixas_total[10],a;
    for (int i = 0; i<10;i++){
        scanf("%f",&caixas_total[i]);
    }

    calcula_peso(caixas_total);
    return 0;
}

void calcula_peso(float caixas_total[]){
    float aux, caixas_leves[5], caixas_pesadas[5];
    for(int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if (caixas_total[i] > caixas_total[j]){
                aux = caixas_total[j];
                caixas_total[j] = caixas_total[i];
                caixas_total[i] = aux;
            }
        }
    }
    printf("Caixas leves: ");
    for(int i=0; i<10; i++){
        
        if (i<5){
            caixas_leves[i] = caixas_total[i];
            printf("%.2f ", caixas_leves[i]);
        }
        else{
            if (i==5){
                printf("\nCaixas pesadas: ");
            }
            caixas_pesadas[i] = caixas_total[i];
            printf("%.2f ", caixas_pesadas[i]);
        }
    }


}