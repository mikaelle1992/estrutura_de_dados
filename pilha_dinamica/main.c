#include <stdio.h>
#include <stdlib.h>

#include "pilha_dinamica.c"

int main()
{
    struct aluno al,a[4] = {{3,"Andre",9.5,7.8,8.5},
                        {4,"Ricardo",7.5,8.7,6.8},
                        {5,"Bianca",9.7,6.7,8.4},
                        {6,"Ana",5.7,6.1,7.4}};

    Pilha* pi =  cria_pilha();
    int i;
    for(i=0; i < 4; i++)
        insere_pilha(pi,a[i]);

    printf("Tamanho: %d\n\n",tamanho_pilha(pi));
    printf("====================================\n");

    printf("Tamanho: %d\n\n",tamanho_pilha(pi));
    remove_pilha(pi);

    imprime_pilha(pi);
    printf("Tamanho: %d\n\n",tamanho_pilha(pi));

  
    consulta_pilha(pi, &al);
    printf("Consulta do topo:  \n matricula: %d \t \n nome: %s\n",al.matricula,al.nome);

    libera_pilha(pi);
    system("pause");

    return 0;
}