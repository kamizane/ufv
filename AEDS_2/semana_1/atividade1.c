#include <stdio.h>
#include <string.h>

#define nome_tam 50

typedef struct livro
{
    int E;
    char nome[nome_tam];
    int pos_original;
}livro;

int Cria_livro(int i,int E,char *nome,livro *livros);
void Ordena_livros_insert(livro *livros, int n);
int busca_binaria(livro*livros, int n,int num);
int particao(int esq, int dir, livro*livros,int num);



int main(){
    int Qnt_livros,E,num;
    char nome[nome_tam];
    scanf("%d", &Qnt_livros);
    livro livros[Qnt_livros];

    for(int i=0;i<Qnt_livros;i++){
        scanf("%d %s",&E,nome);
        Cria_livro(i,E,nome,livros);
    }
    scanf("%d",&num);
    Ordena_livros_insert(livros,Qnt_livros);

    int pos = busca_binaria(livros,Qnt_livros,num);
    printf("Posição: %d, Livro: %s",livros[pos].pos_original,livros[pos].nome);
    return 0;
}

int Cria_livro(int i,int E,char *nome,livro *livros){
    livros[i].E = E;
    strcpy(livros[i].nome,nome);
    livros[i].pos_original = i+1;
    return 0;
}

void Ordena_livros_insert(livro *livros, int n){
    livro aux;
    for(int i = 1; i < n; i++){
        aux = livros[i];

        int j = i - 1;

        while ((j >= 0) && (livros[j].E > aux.E)){
            livros[j+1] = livros[j];
            j--;
        }
        livros[j+1] = aux;
        
    }

}

int busca_binaria(livro*livros, int n,int num){
    int pos = particao(0,n-1,livros,num);
    return pos;
}

int particao(int esq, int dir, livro*livros,int num){
    int pos = (dir + esq)/2;
    if (esq > dir){
        return 0;
    }
    else if(livros[pos].E == num){
        return pos;
    }
    else if(num>livros[pos].E){

        return particao(pos+1,dir, livros, num);
    }
    
    else{
        return particao(esq,pos-1,livros,num);
    }
}
