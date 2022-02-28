#include <stdio.h>
#include <stdlib.h>


struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
    
};
typedef struct descritor Lista;

Lista* cria_lista();

void libera_lista(Lista* li);

int tamanho_lista(Lista* li);
