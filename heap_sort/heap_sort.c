#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void criaHeap(int *V, int i, int f){
    int aux = V[i];
    int j = i * 2 + 1;
    while (j <= f){
        if(j < f){
            if(V[j] < V[j + 1]){
                j = j + 1;
            }
        }
        if(aux < V[j]){
            V[i] = V[j];
            i = j;
            j = 2 * i + 1;
        }else{
            j = f + 1;
        }
    }
    V[i] = aux;

}

void heapSort(int *V, int N){
    int i, aux;
    for(i=(N - 1)/2; i >= 0; i--){
        criaHeap(V, i , N-1);
    }
    for (i = N-1; i >= 1; i--){
        aux = V[0];
        V[0] = V[i];
        V[i] = aux;
        criaHeap(V, 0, i - 1);
    }
}


int main(){

    int vet[10] = {2,-5,1,99,9,17,33,0,21,15};
    int N = 10;

    heapSort(vet, N);
    for(int i=0; i<10; i++){
        printf("%d° posição: %d\n", i+1, vet[i]);
    }

}