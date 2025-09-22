#include "../include/header.h"
#include <iostream>
using namespace std; 

Pilha* criarPilha(){
  
  Pilha *topo = new (std::nothrow) Pilha;
  if(topo==nullptr){
    cout << "Erro na alocacao"; 
  }

  *topo = nullptr;
  
  cout << "Pilha criada com sucesso!\n";

  return topo;
}

bool pilhaVazia(Pilha *topo){
  if(*topo==nullptr){
    //Pilha vazia;
    return true;
  } else{
    return false;
  }
}

void inserirElemento(Pilha *topo){
  No *novoNo = new (std::nothrow) No;

  if(novoNo==nullptr){
    cout << "Nao foi possivel alocar memoria para o novo elemento";
  } else{
    cout << "Informe o valo a ser inserido: ";
    cin >> novoNo->valor;
    novoNo->prox = nullptr;

    if(*topo == nullptr){
    //se a pilha estiver vazia o topo aponta para nullptr

      *topo = novoNo;
    } else{
      novoNo->prox = *topo;
      *topo = novoNo;

      cout << "Elemento inserido com sucesso\n";
    }
  }
}

void exibirElemento(Pilha *topo){
  if(pilhaVazia(topo)){
    cout << "A pilha esta vazia\n";
  } else{
    cout << "O valor do topo e: " << (*topo)->valor << "\n";
  }
}

void removerElemento(Pilha *topo){
  if(pilhaVazia(topo)){
    cout << "A pilha esta vazia\n";
  } else{
    No *noAux = *topo;
    
    *topo = noAux->prox; 
  
    delete noAux;
    cout <<"Elemento deletado com sucesso!\n";
  }
}

void deletaPilha(Pilha *topo){
  if(topo != nullptr){
    No *noAux;
    
    while((*topo) != nullptr){
      //noAux = *topo;
      //*topo = noAux-->prox;
      //delete noAux;
      removerElemento(topo);
    }
    delete topo;
  } 
  cout << "Pilha deletada!\n";
}
