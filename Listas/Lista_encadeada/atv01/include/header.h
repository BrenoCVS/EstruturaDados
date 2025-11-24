#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
//Criando a estrutura No que é usada para manipular a Lista
struct No {
  int info;
  No *prox;
};

//Criando a Lista
struct Lista {
  No *inicio;
  int qtd;
};

Lista* criarLista();
bool lista_vazia(Lista *lista);
void inserir_lista(Lista *lista, int dado);
void removerElemento(Lista *lista, int dado);
void mostraLista(Lista *lista);
void pesquisaElemento(Lista *lista, int dado);
void deletarLista(Lista *lista);


#endif
