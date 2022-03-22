#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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
}