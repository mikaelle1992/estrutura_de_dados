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
        printf("\n não esta vazia");
    }

    int i;
    for(i=0; i < N; i++)
        insere_ArvBin(raiz,dados[i]);
    int y = altura_ArvBin(raiz);
        printf("\n altura da árvore é: %d", y);

    int k = totalNO_ArvBin(raiz);
        printf("\n total de nó da árvore: %d\n", k);



    libera_ArvBin(raiz);

        
}