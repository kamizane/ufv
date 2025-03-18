#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matriz[3][3];
    int m,n;
    printf("Digite o menor valor do intervalo: ");
    scanf("%d",&m);
    printf("Digite o maior valor do intervalo: ");
    scanf("%d",&n);
    int aux = 0;
    for (int i=0;i<3;i++){
        for (int j=0; j<3; j++){
            aux = rand();
            matriz[i][j] =m+( aux % ((n-m)+1));
        }
    }

    for (int i=0;i<3;i++){
        for (int j=0; j<3; j++){
            printf("%d\n",matriz[i][j]);
        }
    }


}




    