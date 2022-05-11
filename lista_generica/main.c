#include <stdio.h>
#include <stdlib.h>
#include "lista_generica.c"

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

void imprime_aluno(void *info){
    struct aluno *al = info;
    printf("Matricula: %d\n",al->matricula);
    printf("Nome: %s\n",al->nome);
    printf("Notas: %f %f %f\n",al->n1,al->n2,al->n3);
    printf("-------------------------------\n");
}

int main(){
    struct aluno a[4] = {{2,"Andre",9.5,7.8,8.5},
                         {4,"Ricardo",7.5,8.7,6.8},
                         {1,"Zuleide",9.7,6.7,8.4},
                         {3,"Ana",5.7,6.1,7.4}};

    Lista* li = criaLista(sizeof(struct aluno));


    struct aluno al;
    buscaLista(li,2,&al);
    printf("Busca:\n");
    printf("------------------\n");


    liberaLista(li);

    return 0;
}