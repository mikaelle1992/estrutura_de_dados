#include <stdio.h>
#include <stdlib.h>

#include "pilha_estatica.c"

int main()
{

    Pilha* pi = cria_lista();



    libera_fila(pi);
    system("pause");
    return 0;
}