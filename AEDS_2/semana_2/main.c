#include <stdio.h>
#include <stdlib.h>

typedef struct TipoNo * TipoApontador;

typedef struct TipoNo{
    int valor;
    TipoApontador esq, dir;
}TipoNo;

void InicializaBST(TipoApontador *no);
int insereBST(TipoApontador *no, int num);
void OrdemBST(TipoApontador *no);
void Pre_ordemBST(TipoApontador *no);
void Pos_ordemBST(TipoApontador *no);

int main(){
    TipoApontador noRaiz;
    InicializaBST(&noRaiz);
    int n, num;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        insereBST(&noRaiz,num);
    }
    OrdemBST(&noRaiz);
    printf("\n");
    Pre_ordemBST(&noRaiz);
    printf("\n");
    Pos_ordemBST(&noRaiz);
    printf("\n");
    return 0;
}


void InicializaBST(TipoApontador *no){
    *no = NULL;
}

int insereBST(TipoApontador *no, int num){
    if (*no == NULL){
        (*no) = (TipoApontador) malloc (sizeof(TipoNo));
        (*no)->valor = num;
        InicializaBST(&(*no)->esq);
        InicializaBST(&(*no)->dir);
        return 1;
    }
    else{
        if (num < (*no)->valor){
            return insereBST(&(*no)->esq, num);
        }
        else{
            return insereBST(&(*no)->dir, num);
        }
    }
}

void OrdemBST(TipoApontador *no){
    if(*no != NULL){
        OrdemBST(&(*no)->esq);
        printf("%d ", (*no)->valor);
        OrdemBST(&(*no)->dir);
    }
    return 0;
}

void Pre_ordemBST(TipoApontador *no){
    if(*no != NULL){
        printf("%d ", (*no)->valor);
        OrdemBST(&(*no)->esq);
        OrdemBST(&(*no)->dir);
    }
}

void Pos_ordemBST(TipoApontador *no){
    if(*no != NULL){
        OrdemBST(&(*no)->esq);
        OrdemBST(&(*no)->dir);
        printf("%d ", (*no)->valor);
    }
    return 0;
}