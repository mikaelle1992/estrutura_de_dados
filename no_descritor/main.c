#include <stdio.h>
#include <stdlib.h>

#include "no_descritor.c"

int main(){
    struct aluno a1,a[4] = {{2,"Andre",9.5,7.8,8.5},
                         {4,"Ricardo",7.5,8.7,6.8},
                         {1,"Bianca",9.7,6.7,8.4},
                         {3,"Ana",5.7,6.1,7.4}};

    Lista* li = cria_lista();

    int i;
    for(i=0; i < 4; i++)
        insere_lista_final(li,a[i]);

    printf("Tamanho: %d\n",tamanho_lista(li));
    
    remove_lista_inicio(li);
    remove_lista_final(li);

    imprime_lista(li);
    libera_lista(li);
    system("pause");
    return 0;

}