#include <stdio.h>
#include <stdlib.h>

#include "no_descritor.c"

int main(){

    Lista* li = cria_lista();

    printf("Tamanho: %d\n",tamanho_lista(li));

    libera_lista(li);
    system("pause");
    return 0;

}