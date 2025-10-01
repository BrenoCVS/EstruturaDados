#include "../include/header.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void criarFila(FILA *Fila){

  Fila->qt = 0;
  Fila->inicio = 0;
  Fila->fim = -1;
}

bool filaVazia(FILA *Fila){
  if(Fila->qt == 0){
    return true;
  }
  return false;
}

bool filaCheia(FILA *Fila){
  if(Fila->qt == MAX){
    return true;
  }
  return false;
}

void inserirElemento(FILA *Fila){

  if(!filaCheia(Fila)){

    Fila->fim++;
    if(Fila->fim == MAX){
      Fila->fim = 0;
    }
   
    cout << "Informe o valor a ser inserido: ";
    cin >> Fila->dados[Fila->fim];
    Fila->qt++;
    cout << "\nElemento inserido com sucesso!\n";
  } else{
    cout << "A fila esta cheia. Nao foi possivel inserir!\n";
  }
}

void removerElemento(FILA *Fila){
  if(!filaVazia(Fila)){
    
    Fila->inicio++;
    Fila->qt--;

    if(Fila->inicio >= MAX){
      Fila->inicio = 0;
    }

    if(Fila->qt == 0){
      Fila->inicio = 0;
      Fila->fim = -1;
    }

    cout << "Elemento removido com sucesso!\n";
  } else{
    cout << "Impossivel remover elemento. A fila esta vazia\n";
  }
}

void exibirElemento(int elemento){
    cout << "O valor e: " << elemento << "\n";
}

void exibirFila(FILA *Fila){
  if(!filaVazia(Fila)){
    
    int x;
    cout << "\n";
    for(int i = 0; i < Fila->qt; i++){
  
      x = Fila->inicio + i;
      if (x >= MAX) {
        x -= MAX;   
      }
      cout << Fila->dados[x] << " ";

    }
    cout << "\n";

  } else{
    cout << "Impossivel exibir. Fila vazia\n";
  }
}

void exibirContrario(FILA *Fila){
  int x;
  cout << "\n";
  for(int i = 0; i < Fila->qt; i++){
    x = Fila->fim -i;
    if(x < 0){
      x += MAX;
    }
    cout << Fila->dados[x] << " ";
  }
  cout << "\n";
}

void maiorZero(FILA *Fila){
  if(!filaVazia(Fila)){
    
    int x;
    cout << "\n";
    for(int i = 0; i < Fila->qt; i++){
  
      x = Fila->inicio + i;
      if (x >= MAX) {
        x -= MAX;   
      }

      if(Fila->dados[x] > 0){
        cout << "Numero:" << Fila->dados[x] << "\n";
        cout << "Posicao: " << x << "\n";
        cout << "\n";
      }

    }
    cout << "\n";

  } else{
    cout << "Impossivel exibir. Fila vazia\n";
  }

}
