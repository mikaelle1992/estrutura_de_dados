#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void bubbleSort(int *V, int N){
    int i, continua, aux, fim = N;
    do{
        continua = 0;
        for(i = 0; i < fim -1; i++){
            if(V[i] > V[i+1]){
                aux =  V[i];
                V[i] =  V[i+1];
                V[i+1] = aux;
                continua = i;
            }
        }
        fim --;
    }while(continua != 0);
    
}

int main(){
    int vet[10] = {-8,-5,1,91,10,7,23,54,67,9};
    
    bubbleSort(vet, 10);
    for(int i=0; i<10; i++){
        printf("%d° posição: %d\n", i+1, vet[i]);
    }

}