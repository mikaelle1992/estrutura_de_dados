#include <stdio.h>
#include <stdlib.h>

#include "lista_encadeada.c"

int main(){

    Lista* li;
    
    li = cria_lista();
    libera_lista(li);

}