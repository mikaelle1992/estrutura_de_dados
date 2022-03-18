#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void selectionSort(int *V, int N)
{
    int i, j, menor, troca;
    for (i = 0; i < N - 1; i++){
        menor = i;
        for (j = i+1; j < N; j++){
            if (V[j] < V[menor]){
                menor = j;
            }
        }
        if(i != menor){
            troca = V[i]; 
            V[i] = V[menor];
            V[menor] =  troca;
        }
    }
    
}

int main(){
    int vet[10] = {2,-5,1,91,64,7,3,0,67,9};
    
    selectionSort(vet, 10);
    for(int i=0; i<10; i++){
        printf("%d° posição: %d\n", i+1, vet[i]);
    }

}