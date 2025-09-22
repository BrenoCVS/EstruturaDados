#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

struct PILHA {
  int valor;
  PILHA *prox;
};

typedef struct PILHA *Pilha;
typedef struct PILHA No;

Pilha* criarPilha();
void inserirElemento(Pilha *topo);
void exibirElemento(Pilha *topo);
void removerElemento(Pilha *topo);
void deletaPilha(Pilha *topo);

#endif


