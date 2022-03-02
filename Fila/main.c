#include <stdio.h>
#include <stdlib.h>

#include "fila_estatica.c"

int main()
{

    Fila* fi = cria_fila();

    printf("Tamanho: %d\n",tamanho_fila(fi));

    printf("Fila vazia: %d\n",fila_vazia(fi));
  
    libera_fila(fi);
    system("pause");
    return 0;
}