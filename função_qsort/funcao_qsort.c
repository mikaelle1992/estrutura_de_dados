#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
    
};


int compara(const void *a, const void *b){
    if(*(int*)a == *(int*)b)
        return 0;//iguais
    else
        if(*(int*)a < *(int*)b)
            return -1; //vem antes
        else
            return 1; //vem depois
}

int comparaDecrescente(const void *a, const void *b){
    if(*(int*)a == *(int*)b)
        return 0;//iguais
    else
        if(*(int*)a < *(int*)b)
            return 1; //vem depois
        else
            return -1; //vem antes
}


int comparaMatricula(const void *a, const void *b){
    if((*(struct aluno*)a).matricula == (*(struct aluno*)b).matricula)
        return 0;//iguais
    else
        if((*(struct aluno*)a).matricula < (*(struct aluno*)b).matricula)
            return 1; //vem depois
        else
            return -1; //vem antes
}

int main(){
    int i,  N = 10;
    int vet[10] = {2,-5,1,97,29,7,3,0,67,15};
   
    printf("-------------------------\nCrescente\n");
    qsort(vet, N, sizeof(int), compara);
    for(int i=0; i<10; i++){
        printf("%d° posição: %d\n", i+1, vet[i]);
    }

    printf("-------------------------\nDescrescente\n");

    qsort(vet, N, sizeof(int), comparaDecrescente);
    for(int i=0; i<10; i++){
        printf("%d° posição: %d\n", i+1, vet[i]);
    }


    struct aluno V[4] = {{3,"Andre",9.5,7.8,8.5},
                        {2,"Ricardo",7.5,8.7,6.8},
                        {4,"Bianca",9.7,6.7,8.4},
                        {1,"Ana",5.7,6.1,7.4}};

    printf("-------------------------\nMatricula\n");

    qsort(V, 4, sizeof(struct aluno), comparaMatricula);
    for(int i=0; i<4; i++){
        printf("%d) %s\n", V[i].matricula, V[i].nome);
    }

}