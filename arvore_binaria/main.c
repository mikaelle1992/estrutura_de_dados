#include <stdio.h>
#include <stdlib.h>

#include "arvore_binaria.c"

int main()
{
    ArvBin* raiz = cria_ArvBin();

    // int x = estaVazia_ArvBin(raiz);
    if(estaVazia_ArvBin(raiz)){
        printf("esta vazia\n");
    }
    else{
        printf("\n não esta vazia");
    }

    int y = altura_ArvBin(raiz);
        printf("\n altura da árvore é: %d", y);

    int k = totalNO_ArvBin(raiz);
        printf("\n total de nó da árvore: %d", k);

        
}