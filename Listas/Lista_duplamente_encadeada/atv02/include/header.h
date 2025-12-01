#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

struct No {
  int dado;
  No *ant;
  No *prox;
};

struct Lista {
  No *inicio;
};
Lista* cria_lista();
bool verificar_lista(Lista *lista);
void inserir_elemento(Lista *lista, int info);
void remover_elemento(Lista *lista, int info);
void mostra_lista(Lista *lista);
void pesquisar_elemento(Lista *lista, int info);
void verificar_pares(Lista *lista);
void liberar_lista(Lista *lista);
#endif
