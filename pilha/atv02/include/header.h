#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <string>
using namespace std;


struct Pessoa{
  string nome;
  int identidade;
};

struct Pilha {
  Pessoa pessoa[5];
  int topo;
};
void criarPilha(Pilha *pilha);
void inserirPilha(Pilha *pilha);
void exibirElemento(Pilha *pilha);
void removerElemento(Pilha *pilha);

#endif


