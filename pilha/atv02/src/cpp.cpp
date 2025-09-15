#include "../include/header.h"
#include <iostream>
using namespace std; 

void criarPilha(Pilha *pilha){
  pilha->topo = 0;
}

void inserirPilha(Pilha *pilha){
  if(pilha->topo < 5){
    cin.ignore();
    cout << "Informe o nome: ";
    getline(cin, pilha->pessoa[pilha->topo].nome);

    cout << "Informe a identidade: ";
    cin >> pilha->pessoa[pilha->topo].identidade;
    
    pilha->topo++;
  }else{
    cout <<"Pilha esta cheia, impossivel inserir";
  }
}

void exibirElemento(Pilha *pilha){
  if(pilha->topo > 0){
    cout << "Ultimo elemento da pilha: \n"
      "Nome: "<< pilha->pessoa[pilha->topo - 1].nome << 
      "\nIdentidade: " <<  pilha->pessoa[pilha->topo - 1].identidade <<"\n";
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
