#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

int buscaLinear(int *V, int N, int elem){
    int i;
    for (i=0; i<N; i ++){
        if(elem == V[i]){
            return i;
        }
    }
    return -1;
}

int buscaOrdenada(int *V, int N, int elem){
    int i;
    for (i=0; i<N; i ++){
        if(elem == V[i]){
            return i;
        }
        else {
            if(elem < V[i]){
                return -1;
            }
        }
    }
    return -1;
}

int buscaBinaria(int *V, int N, int elem){
    int i, inicio, meio, final;
    inicio = 0;
    final =  N-1;
    while(inicio <= final){
        meio = (inicio + final)/2;
        if(elem < V[meio]){
            final =  meio -1;
        }
        else {
            if(elem < V[meio]){
                inicio = meio + 1;
            }
            else{
                return meio;
            }
        }
    }
    return -1;
}

int buscaLinearMatricula(struct aluno *V, int N, int elem){
    int i;
    for (i=0; i<N; i ++){
        if(elem == V[i].matricula){
            return i;
        }
    }
    return -1;
}

int buscaLinearNome(struct aluno *V, int N, char* elem){
    int i;
    for (i=0; i<N; i ++){
        if(strcmp(elem,V[i].nome)==0){
            return i;
        }
    }
    return -1;
}


int main(){

   int vet[10] = {-8,-5,1,4,14,21,23,54,67,90};

    if(buscaBinaria(vet,10,14) != -1)
       printf("OK\n");
    else
       printf("ERRO\n");


    struct aluno V[4] = {{2,"Andre",9.5,7.8,8.5},
                        {4,"Ricardo",7.5,8.7,6.8},
                        {1,"Bianca",9.7,6.7,8.4},
                        {3,"Ana",5.7,6.1,7.4}};
    int pos;
    pos = buscaLinearNome(V,4,"MIkaelle");
    if(pos != -1)
        printf("Nome encontrado\n");
    else
        printf("Nome NAO encontrado\n");

    system("pause");
    return 0;

}