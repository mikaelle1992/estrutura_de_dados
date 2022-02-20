#include <stdio.h>
#include <stdlib.h>

#include "lista_din_ancad_dupla.c"

int main(){

    struct aluno al, a[4] = {{1,"Santos",9.5,7.4,6.3},
                         {4,"Andre",7.5,4.9,5.8},
                         {3,"Ana Maria",8.1,7.5,6.5},
                         {5,"Bianca",9.5,7.1,6.9}};

    struct aluno  b = {2,"higor",5.4,9.5,7.0};
    struct aluno  c = {7,"Thiago",6.5,7.5,8.0};

    Lista* li = cria_lista();


    libera_lista(li);
    system("pause");
    return 0;

}