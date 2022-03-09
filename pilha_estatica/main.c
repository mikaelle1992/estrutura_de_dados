#include <stdio.h>
#include <stdlib.h>

#include "pilha_estatica.c"

int main()
{

    struct aluno a[4] = {{2,"Andre",9.5,7.8,8.5},
                         {4,"Ricardo",7.5,8.7,6.8},
                         {1,"Bianca",9.7,6.7,8.4},
                         {3,"Ana",5.7,6.1,7.4}};

    Pilha* pi = cria_pilha();

    int i;
    for(i=0; i < 4; i++)
        insere_pilha(pi,a[i]);
    printf("====================================\n");

    printf("Tamanho: %d\n\n",tamanho_pilha(pi));
    remove_pilha(pi);
    imprime_pilha(pi);
    printf("Tamanho: %d\n\n",tamanho_pilha(pi));

    libera_pilha(pi);
    system("pause");
    return 0;
}