#include "../include/header.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

Fila* criarFila(){
  
  Fila *fila = new (std::nothrow) Fila;
  if(fila==nullptr){
    cout << "Fila nao criada. Nao ha espaco na memoria\n";
    exit(0); 
  }
  fila->inicio = nullptr;
  fila->fim = nullptr;

  return fila;
}

bool filaVazia(Fila *fila){
  if(fila->inicio == nullptr){
    cout << "Fila esta vazia\n";
    return true;
  } else {
    return false;
  } 
}

void inserirElemento(Fila *fila){
  No *novoNo = new (std::nothrow) No;

  if(novoNo == nullptr){
    cout << "Nao ha espaco na memoria para o novo No\n";
  } else{
    
    cout << "Informe o valor a ser inserido: \n";
    cin >> novoNo->dados;
    
    novoNo->prox=nullptr;

    if(fila->inicio == nullptr){
      fila->inicio = novoNo;
      fila->fim = novoNo;
    } else{
      fila->fim->prox = novoNo;
      fila->fim = fila->fim->prox;
    }

    cout << "Elemento: " << novoNo->dados << " inserido com sucesso\n";
  }
}

void removerELemento(Fila *fila){
  if(!filaVazia(fila)){
    No *noAux;
    noAux = fila->inicio;
    
    fila->inicio = fila->inicio->prox;
    
    if(fila->inicio == nullptr){
      fila->fim = fila->inicio;
    }
    
    cout << "Elemento: " << noAux->dados << " removido com sucesso\n";
    delete noAux;
  }
}

void exibirPrimeiro(Fila *fila, int x){
  if(!filaVazia(fila)){
    if(x == 0){
      cout << "O primeiro elemento da fila e: " << fila->inicio->dados << "\n";
    } else{
      cout << "O ultimo elemento e: " << fila->fim->dados << "\n";
    }
  }
}

void exibirFila(Fila *fila){
  if(!filaVazia(fila)){  
    No *noAux;
    noAux = fila->inicio;
    
    cout << "Elementos da fila: \n";
    while(noAux!=nullptr) {
      cout << noAux->dados << " ";
      noAux = noAux->prox;
    }
  }
}

void exibirInverso(Fila *fila){
  if(!filaVazia(fila)){  
    No *noAux;
    noAux = fila->inicio;
      
    int *vet = new int;
    
    cout << "Elementos da fila inversa: \n";
    
    int i = 0;
    for(i = 0; noAux!=nullptr; i++){
      vet[i] = noAux->dados;
      noAux = noAux->prox;
    }
    for(int y = i - 1; y >= 0; y--){
      cout << vet[y] << " ";
    }
  }
}

void exibirQuantidade(Fila *fila){
  if(!filaVazia(fila)){  
    int qtd;
    No *noAux;
    noAux = fila->inicio;

    while(noAux!=nullptr) {
      qtd++;
      noAux = noAux->prox;
    }
    cout << "A quantidade de elementos na fila e: " << qtd << "\n";
  }
}

void excluirFila(Fila *fila){
  if(!filaVazia(fila)){
    No *noAux;
    
    while (fila->inicio!=nullptr) {
      noAux = fila->inicio;
      fila->inicio = fila->inicio->prox;
      delete noAux;
    }

  }else{
    delete fila;
  }
  cout << "Fila deletada com seucesso!";
}
