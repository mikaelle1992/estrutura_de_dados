#include <stdio.h>
#include <stdlib.h>

#include "arvore_binaria.c"

int main()
{
    int N = 8, dados[8] = {50,100,30,20,40,45,35,37};

    ArvBin* raiz = cria_ArvBin();

    // int x = estaVazia_ArvBin(raiz);
    if(estaVazia_ArvBin(raiz)){
        printf("esta vazia\n");
    }
    else{
        printf("\nnão esta vazia");
    }

    int i;
    for(i=0; i < N; i++)
        insere_ArvBin(raiz,dados[i]);
    int y = altura_ArvBin(raiz);
    printf("\naltura da árvore é: %d", y);

    int k = totalNO_ArvBin(raiz);
    printf("\ntotal de nó da árvore: %d\n", k);

    if (consulta_ArvBin(raiz, 75)){
        printf("O valor foi encontrado\n");
    }
    else{
        printf("O valor  não foi encontrado\n");
    }


    libera_ArvBin(raiz);

        
}