#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
    
};

void insertionSortMatricula(struct aluno *V, int N){
    int i, j;
    struct aluno aux;
    for (i = 1; i< N; i++){
        aux = V[i];
        for (j = i; (j > 0) && (aux.matricula < V[j-1].matricula); j--){
            V[j] = V[j-1];
        }
        V[j] = aux;
    }
}

void insertionSortNome(struct aluno *V, int N){
    int i, j;
    struct aluno aux;
    for (i = 1; i< N; i++){
        aux = V[i];
        for (j = i; (j > 0) && (strcmp(aux.nome, V[j-1].nome)<0); j--){
            V[j] = V[j-1];
        }
        V[j] = aux;
    }
}



int main()
{
    int i;
    struct aluno V[4] = {{3,"Andre",9.5,7.8,8.5},
                        {2,"Ricardo",7.5,8.7,6.8},
                        {4,"Bianca",9.7,6.7,8.4},
                        {1,"Ana",5.7,6.1,7.4}};
    
    insertionSortNome(V, 4);
    for(int i=0; i<4; i++){
        printf("%d) %s\n", V[i].matricula, V[i].nome);
    }


    system("pause");
    return 0;
}