#include "../include/header.h"
#include <iostream>
using namespace std; 

void criarPilha(Pilha *pilha){
  pilha->topo = 0;
}

void inserirPilha(Pilha *pilha){
  if(pilha->topo < 5){
    
    cout << "Informe o elemento que deseja inserir na pilha: ";
    cin >> pilha->dados[pilha->topo];
    
    pilha->topo++;
  }else{
    cout <<"Pilha esta cheia, impossivel inserir";
  }
}

void exibirElemento(Pilha *pilha){
  if(pilha->topo > 0){
    cout << "Ultimo elemento da pilha: " << pilha->dados[pilha->topo - 1] << "\n";
  } else {
    cout << "Nao ha elemntos na pilha\n";
  }
}

void removerElemento(Pilha *pilha){
  if(pilha->topo > 0){
    
    pilha->topo--;

  } else {
    cout << "Nao ha elemntos na pilha\n";
  }
}
