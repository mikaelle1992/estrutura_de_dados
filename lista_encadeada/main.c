#include <stdio.h>
#include <stdlib.h>

#include "lista_encadeada.c"

int main(){

    struct aluno al, a[4] = {{2,"Ana",5.5,9.5,7.0},
                         {3,"João",6.2,9.2,8.8},
                         {4,"Pedro",6.1,9.5,7.2},
                         {5,"Bia",8.5,9.1,5.9}};

    Lista* li = cria_lista();

    int x = tamanho_lista(li);
    printf("tamanho: %d\n", x);

    
    int x0 =lista_cheia(li);
    printf("lista cheia: %d\n", x0);

    int x1 =lista_vazia(li);
    printf("lista vazia: %d\n", x1);

    
    libera_lista(li);
    system("pause");
    return 0;
}