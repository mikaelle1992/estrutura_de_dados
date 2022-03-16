#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void insertionSort(int *V, int N){
    int i, j, aux;
    for (i = 1; i< N; i++){
        aux = V[i];
        for (j = i; (j > 0) && (aux < V[j-1]); j--){
            V[j] = V[j-1];
        }
        V[j] = aux;
    }
}


int main(){
    int vet[10] = {2,-5,1,91,64,7,3,14,67,9};
    
    insertionSort(vet, 10);
    for(int i=0; i<10; i++){
        printf("%d° posição: %d\n", i+1, vet[i]);
    }

}