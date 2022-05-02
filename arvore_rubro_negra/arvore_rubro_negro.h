#include <stdio.h>
#include <stdlib.h>


typedef struct NO* ArvLLRB;

ArvLLRB* cria_ArvLLRB();
void libera_ArvLLRB(ArvLLRB* raiz);
int insere_ArvLLRB(ArvLLRB* raiz,int valor);
int remove_ArvLLRB(ArvLLRB *raiz, int valor);
int estaVazia_ArvLLRB(ArvLLRB *raiz);
int totalNO_ArvLLRB(ArvLLRB *raiz);
int altura_ArvLLRB(ArvLLRB *raiz);
int consulta_ArvLLRB(ArvLLRB *raiz, int valor);
void preOrdem_ArvLLRB(ArvLLRB *raiz, int H);
void emOrdem_ArvLLRB(ArvLLRB *raiz, int H);
void posOrdem_ArvLLRB(ArvLLRB *raiz, int H);