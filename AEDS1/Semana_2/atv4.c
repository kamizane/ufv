#include <stdio.h>


typedef struct{
    char nome[100];
    int data_nascimento;
    double cpf;
} Tipoaluno;

void preenche_dados(Tipoaluno *ptr_aluno1);
void imprime_dados(Tipoaluno *ptr_aluno1);

int main(){
    Tipoaluno aluno1;
    preenche_dados(&aluno1);
    imprime_dados(&aluno1);
}


void preenche_dados(Tipoaluno *ptr_aluno1){
    scanf("%99s",ptr_aluno1->nome);
    scanf("%d",&ptr_aluno1->data_nascimento);
    scanf("%lf",&(ptr_aluno1 ->cpf));


}

void imprime_dados(Tipoaluno *ptr_aluno1){
    printf("%s\n",ptr_aluno1->nome);
    printf("%d\n",ptr_aluno1 ->data_nascimento);
    printf("%.0lf\n",ptr_aluno1->cpf);
}