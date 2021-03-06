#include <stdio.h>
#include <stdlib.h>

#include "lista_din_enca_circ.c"

int main()
{
    struct aluno al, a[4] = {{1, "Antonio", 9.5, 7.4, 6.3},
                             {4, "Julia", 7.5, 4.9, 5.8},
                             {3, "Maria", 8.1, 7.5, 6.5},
                             {5, "Pedro", 9.5, 7.1, 6.9}};

    struct aluno b = {2, "Santos", 5.4, 9.5, 7.0};
    struct aluno c = {7, "Ricardo", 6.5, 7.5, 8.0};

    Lista *li = cria_lista();
    int i;

    for(i=0; i < 4; i++)
        insere_lista_ordenada(li,a[i]);

    insere_lista_inicio(li, c);

    insere_lista_final(li, b);

    int x = tamanho_lista(li);
    printf("Tamanho da lista: %d\n", x);

    int x0 = lista_cheia(li);
    printf("Lista cheia: %d\n", x0);

    int x1 = lista_vazia(li);
   
    printf("Lista vazia: %d\n", x1);
    imprime_lista(li);

    remove_lista_inicio(li);

    remove_lista_final(li);

    remove_lista(li, 3);


    printf("------------Lista após remoções:------------\n");

    imprime_lista(li);

    int pos = 2;
    int x2 =consulta_lista_pos(li, pos, a);
   
    if (x2){
        printf("Posição %d encontrada na lista.\n\n ",pos);
    }
    else{
        printf("Posição %d não foi encontrada na lista.\n\n",pos);
    }
   

    int mat = 3;
    int x3 =consulta_lista_mat(li, mat, a);
    if (x3){
        printf("Matricula %d encontrada na lista.\n\n ",mat);
    }
    else{
        printf("Matricula %d não foi encontrada na lista.\n\n ",mat);
    }

    libera_lista(li);
    system("pause");
    return 0;
}