#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

struct No {
  No *prox;
  No *ant;
  int info;
};

struct Lista {
  No *inicio;
  int qtd;
};

Lista* criaLista();
bool lista_vazia(Lista *lista);
void inserir_lista(Lista *lista, int dado);
void remover_elemento(Lista *lista, int dado);
void mostra_lista(Lista *lista);
void pesquisar_elemento(Lista *lista, int dado);
void deletar_lista(Lista *lista);
#endif
