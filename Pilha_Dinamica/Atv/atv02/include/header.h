#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <string> 

struct Funcionario {
  std::string nome, cargo;
  float salario;
};

struct PILHA{
  Funcionario dados;
  PILHA *prox;
};
typedef struct PILHA *Pilha;
typedef struct PILHA No;
Pilha* criarPilha();
void inserirElemento(Pilha *topo);
void exibirElemento(Pilha *topo);
void removerElemento(Pilha *topo);
void deletaPilha(Pilha *topo);

Pilha* criarPilha();
#endif
