#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

struct Pilha {
  int dados[5];
  int topo;
};
void criarPilha(Pilha *pilha);
void inserirPilha(Pilha *pilha);
void exibirElemento(Pilha *pilha);
void removerElemento(Pilha *pilha);

#endif


