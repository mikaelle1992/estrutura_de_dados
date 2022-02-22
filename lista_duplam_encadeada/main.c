#include <stdio.h>
#include <stdlib.h>

#include "lista_din_encad_dupla.c"

int main(){

    struct aluno al, a[4] = {{1,"Santos",9.5,7.4,6.3},
                         {4,"Andre",7.5,4.9,5.8},
                         {3,"Ana Maria",8.1,7.5,6.5},
                         {5,"Bianca",9.5,7.1,6.9}};

    struct aluno  b = {2,"higor",5.4,9.5,7.0};
    struct aluno  c = {7,"Thiago",6.5,7.5,8.0};

    Lista* li = cria_lista();
    int i;

    for(i=0; i < 4; i++)
        insere_lista_ordenada(li,a[i]);

    insere_lista_inicio(li, b);

    insere_lista_final(li, c);


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

    imprime_lista(li);
    printf("\n\n");

    int pos = 4;
    int x2 =consulta_lista_pos(li, pos, a);
    if (x2){
        printf("Posição %d encontrada na lista.\n\n ",pos);
    }
    else{
        printf("Posição %d não foi encontrada na lista.\n\n",pos);
    }


    int mat = 7;
    int x3 =consulta_lista_mat(li, mat, a);
    if (x3){
        printf("Matricula %d encontrada na lista.\n\n ",mat);
    }
    else{
        printf("Matricula %d não foi encontrada na lista.\n\n ",mat);
    }

    remove_lista_inicio(li);

    remove_lista_final(li);

    remove_lista(li, 3);
   
    imprime_lista(li);
    printf("\n\n");

    libera_lista(li);
    system("pause");
    return 0;

}