#include <stdio.h>
#include <stdlib.h>


struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
    
};

typedef struct Deque Deque;

Deque* cria_Deque();

void libera_Deque(Deque* dq);

int tamanho_Deque(Deque* dq);

int Deque_vazio(Deque* dq);

int Deque_cheia(Deque* dq);

int consultaInicio_Deque(Deque *dq, struct aluno *al);

int consultaFinal_Deque(Deque *dq, struct aluno *al);