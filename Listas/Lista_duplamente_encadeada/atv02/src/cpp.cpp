#include "../include/header.h"
#include <iostream>
using namespace std;

Lista* cria_lista(){
  
  Lista *lista = new (std::nothrow) Lista;

  if(lista == nullptr){
    
    cout << "Erro ao alocar memoria para a lista";
  } else{
    
    cout << "\nLista alocada com sucesso!\n";
    lista->inicio = nullptr;
  }
  return lista;
}

bool verificar_lista(Lista *lista){
  if(lista->inicio == nullptr){
    cout << "\nA lista está vazia\n";
    return true;
  } else{
    return false;
  }
}

void inserir_elemento(Lista *lista, int info){

  No *novoNo = new (std::nothrow) No; 

  if(novoNo == nullptr){
    cout << "\nErro ao criar novoNo\n"; 
  } else{
    novoNo->dado = info;
    novoNo->prox = nullptr;
    novoNo->ant = nullptr;
    
    if(verificar_lista(lista)){
      lista->inicio = novoNo;
    } else{
      No *noAux = lista->inicio;

      while(noAux->prox != nullptr && noAux->dado < novoNo->dado){
        noAux = noAux->prox;
      }

      if(noAux == lista->inicio && novoNo->dado < lista->inicio->dado){
        lista->inicio->ant = novoNo;
        novoNo->prox = lista->inicio;
        lista->inicio = novoNo;
        
      } else{
        if(noAux->dado > novoNo->dado){
          noAux->ant->prox = novoNo;
          novoNo->ant = noAux->ant;
          novoNo->prox = noAux;
          noAux->ant = novoNo;
        } else{
          noAux->prox = novoNo;
          novoNo->ant = noAux;
        }
      }
    }
    cout << "\nElemento inserico com sucesso\n";
  }
}

void remover_elemento(Lista *lista, int info){
  if (verificar_lista(lista)) {
    cout << "\nImpossivel remover\n";
  } else{
    No *noAux = lista->inicio;

    while(noAux != nullptr && noAux->dado != info){
      noAux = noAux->prox;
    }

    if(noAux == nullptr){
      cout << "\nO elemento nao faz parte da lista\n";
    } else{
      if(noAux == lista->inicio){
        lista->inicio = noAux->prox;
      } else{
        noAux->ant->prox= noAux->prox;
      }

      delete noAux;
    }
  }
}

void mostra_lista(Lista *lista){
  if(verificar_lista(lista)){
    cout << "\nImpossivel exibir a lista\n";
  } else{

    No *noAux = lista->inicio;

    cout<< "\nValores da lista:\n";
    while (noAux != nullptr){
      cout << noAux->dado << " - ";
      noAux = noAux->prox;
    }
  }
}

void pesquisar_elemento(Lista *lista, int info){
  if(verificar_lista(lista)){
    cout << "\nImpossivel verificar elemento\n";
  } else{

    No *noAux = lista-> inicio;

    while(noAux != nullptr && noAux->dado != info){
      noAux = noAux->prox;
    }

    if(noAux == nullptr){
      cout << "\nO elemento nao esta na lista\n";
    } else{
      cout << "\nElemento encontrado na lista\n";
    }
  }
}

void verificar_pares(Lista *lista){
  if(verificar_lista(lista)){
    cout << "\nImpossivel ver os pares\n";
  } else{
    int pares;
    No *noAux = lista->inicio;

    cout << "\nOs pares da lista sao:\n";
    while(noAux != nullptr){
      if(noAux->dado % 2 == 0){
        cout << noAux->dado << " - ";
        pares++;
      }

      noAux = noAux->prox;
    }

    cout << "\nA lista possui " << pares << " numeros pares\n";
  }
}

void liberar_lista(Lista *lista){
  No *noAux = lista->inicio;

  while(noAux != nullptr){
    lista->inicio = noAux->prox;

    delete noAux;

    noAux = lista->inicio;
  }

  delete lista;
}
