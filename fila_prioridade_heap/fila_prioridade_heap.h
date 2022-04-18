//Arquivo fila_prioridade_heap.h
#define MAX 100

typedef struct fila_prioridade FilaPrioHeap;

FilaPrioHeap* cria_FilaPrioHeap();

void libera_FilaPrioHeap(FilaPrioHeap* fp);

int consulta_FilaPrioHeap(FilaPrioHeap* fp, char* nome);

int insere_FilaPrioHeap(FilaPrioHeap* fp, char *nome, int  prioridade);

int remove_FilaPrioHeap(FilaPrioHeap* fp);

int tamanho_FilaPrioHeap(FilaPrioHeap* fp);

int estaCheia_FilaPrioHeap(FilaPrioHeap* fp);

int estaVazia_FilaPrioHeap(FilaPrioHeap* fp);

void imprime_FilaPrioHeap(FilaPrioHeap* fp);