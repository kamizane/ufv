#include <stdio.h>
#include <string.h>

#define max_tam 50

typedef struct pacote{
    char nome[max_tam];
    int pos_original;
}pacote;

void Ordena_pacotes_insert(pacote *vetor, int n);
int busca_binaria(pacote * vetor, int n,char * erro);
int particao(int esq, int dir, pacote * vetor,char * erro);

int main(){
    int n;
    pacote lista[max_tam];
    char erro[max_tam];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%s",lista[i].nome);
        lista[i].pos_original = i+1;
    }
    Ordena_pacotes_insert(lista,n);
    scanf("%s",erro);
    int pos = busca_binaria(lista,n,erro);
    printf("posição: %d", lista[pos].pos_original);
    return 0;


}

void Ordena_pacotes_insert(pacote *vetor, int n){
    pacote aux;
    for(int i = 1; i < n; i++){
        aux = vetor[i];

        int j = i - 1;

        while ((j >= 0) && (strcmp(vetor[j].nome, aux.nome)>0)){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = aux;
        
    }

}

int busca_binaria(pacote * vetor, int n,char * erro){
    int pos = particao(0,n-1,vetor,erro);
    return pos;
}

int particao(int esq, int dir, pacote * vetor,char * erro){
    int pos = (dir + esq)/2;
    if (esq > dir){
        return 0;
    }
    else if(strcmp(vetor[pos].nome,erro) == 0){
        return pos;
    }
    else if(erro[0]>vetor[pos].nome[0]){

        return particao(pos+1,dir, vetor, erro);
    }
    
    else{
        return particao(esq,pos-1,vetor,erro);
    }
}
