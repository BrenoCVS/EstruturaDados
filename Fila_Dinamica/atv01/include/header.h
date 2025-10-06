#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

struct No{
  int dados;
  No *prox;
};

struct Fila{
  No *inicio;
  No *fim;
};

Fila* criarFila();
bool filaVazia(Fila *fila);
void inserirElemento(Fila *fila);
void removerELemento(Fila *fila);
void exibirPrimeiro(Fila *fila, int x);
void exibirFila(Fila *fila);
void excluirFila(Fila *fila);
void exibirQuantidade(Fila *fila);
void exibirInverso(Fila *fila);


#endif
