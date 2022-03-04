#include <stdio.h>
#include <stdlib.h>

#include "fila_estatica.c"

int main()
{
    struct aluno al,a[4] = {{3,"Andre",9.5,7.8,8.5},
                        {4,"Ricardo",7.5,8.7,6.8},
                        {5,"Bianca",9.7,6.7,8.4},
                        {6,"Ana",5.7,6.1,7.4}};

    Fila* fi = cria_fila();
    int i;

    for(i=0; i < 4; i++){
        insere_fila(fi,a[i]);
    }
    imprime_fila(fi);
    printf("Tamanho: %d\n",tamanho_fila(fi));

    printf("Fila vazia: %d\n",fila_vazia(fi));

    printf("====================================\n");

    remove_fila(fi);

    imprime_fila(fi);
    printf("Tamanho: %d\n",tamanho_fila(fi));

    libera_fila(fi);
    system("pause");
    return 0;
}