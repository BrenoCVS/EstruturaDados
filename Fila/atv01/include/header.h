#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#define MAX 5

struct FILA{
    int dados[MAX];
    int qt, inicio, fim;
};

void criarFila(FILA *Fila);
bool filaVazia(FILA *Fila);
bool filaCheia(FILA *Fila);
void inserirElemento(FILA *Fila);
void removerElemento(FILA *Fila);
void exibirElemento(int elemento);
void exibirFila(FILA *Fila);
void exibirContrario(FILA *Fila);
void maiorZero(FILA *Fila);
#endif
