#include <stdio.h>
#include <stdlib.h>

#include "lista_din_enca_circ.c"

int main(){

    
    Lista* li = cria_lista();

    int x = tamanho_lista(li);
    printf("Tamanho da lista: %d\n", x);

    int x0 =lista_cheia(li);
    printf("Lista cheia: %d\n", x0);

    int x1 =lista_vazia(li);
    if (lista_vazia(li)){
        printf("Lista vazia: %d\n", x1);
    }
    else{
        printf("Lista não está vazia: %d\n", x1);
    }

    libera_lista(li);
    system("pause");
    return 0;
}