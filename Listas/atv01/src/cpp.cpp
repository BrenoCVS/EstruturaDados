#include "../include/header.h"
#include <iostream>
using namespace std;

//Criando a lista, se não houver espaço na memoria devolve erro
Lista* criarLista(){
  Lista *lista = new (std::nothrow) Lista;

  if(lista==nullptr){
    //Caso de erro na alocação, devolvemos uma mensagem e matamos a execução
    cout << "Lista não criada";
  } else{
    //se a alocação der certo, o inicio aponta para nullptre, pois a lista ainda é vazia e qtd = 0
    lista->inicio = nullptr;
    lista->qtd = 0;
  }

  return lista;
}

//Verificando se a lista é vazia, caso seja não é possível remover
bool lista_vazia(Lista *lista){
  
  //se a lista é vazia retorna true
  if(lista->inicio == nullptr){
    cout << "Lista é vazia";
    return true;
  } else{
    //se a lsita não é vazia, retorna false
    return false;
  }
}

//Adicionando uma nova informação na lista
void inserir_lista(Lista *lista, int dado){
  //tentamos alocar memoria para um novoNo, mas caso não há espaço devolvemos mensagem
  No *novoNo = new (std::nothrow) No;
  if(novoNo==nullptr){
    cout<<"Não há espaço na memória para o novoNo";
  } else{
    //SE há espaço, info recebe o dado e prox aponta para nullptr
    novoNo->info = dado;
    novoNo->prox = nullptr;
    
    //se a lista for vazia, inicio ja apota para novoNo (Nao precisa de noAux e noAnt)
    if(lista_vazia(lista)){
      lista->inicio = novoNo;
    } else{
      //Criamos o noAux apontando para o inicio e o noAnt apontando para nullptr
      No *noAnt, *noAux = lista->inicio; 
    
      //percorremos a lista até que noAux chegue na posição onde ele é maior que o dado, 
      //ai o dado sera adicionado uma posição antes, ou noAux sera nullptr ou seja, a 
      //lista terá acabado
      while (noAux!=nullptr && novoNo->info > noAux->info) {
        noAnt = noAux;
        noAux = noAux->prox;
      }
      //se noAux for igual ao inicio, quer dizer que a informação deve ser inseriada antes do inicio
      if(noAux == lista->inicio){
        novoNo->prox = noAux;
        lista->inicio = novoNo;
      } else{
        //inseriando quando o noAux estiver no meio da lista, novoNo->prox tera qua apontar para o noAux
        //e o noAnt->prox ira apontar para o novoNo
        //Caso o noAux seja igual à nullptr, queri dizer que a lista chegou ao fim, então devemos fazer
        //o noAnt->prox apontar para o novoNo, mas não tem problema o novoNo->prox apontar para noAux, 
        //no caso nullptre
        novoNo->prox = noAux;
        noAnt->prox = novoNo;

      }
      
    }
    //como inserimos um valor na lista, o qtd deve ser atualizado
    lista->qtd++;
  }
}


//removendo um valor da lista
void removerElemento(Lista *lista, int dado){
  
  //se a lista estiver vazia não podemos remover, pois não há elemento a ser removido
  if(lista_vazia(lista)){
    cout<< "Impossivel remover";
  } else{
    //se a lista não for vazia, podemos remover. Ai faremos uma verificação de se vai ser removido algo
    //e de onde ele será removido (inicio, meio ou fim da lista)
    
    //criamos o noAnt que aponta para nullptr e o noAux que aponta para o inicio
    No *noAnt, *noAux = lista->inicio;

    //percoreemos o lista ate que noAux seja ingal ao dado, ou que a lista acabe
    while(noAux != nullptr && noAux->info != dado){
      noAnt = noAux;
      noAux = noAux->prox;
    }
    //se noAUx for diferente de nullptr, quer dizer que o valor existe na lista
    //senão devolve mensagem ao usuario
    if(noAux != nullptr){

      //se noAux for iagual ao inicio, reposicionamos o inicio antes de deletar
      if(noAux == lista->inicio){
        lista->inicio = noAux->prox;
      } else{
        //senao o noAnt->prox deve apontar para o noAux->prox, para não perdermos 
        //a ligação da lista
        noAnt->prox = noAux->prox;
      }
      //feito tudo isso, deletamos o noAux para exluir o valor
      delete noAux;
      lista->qtd--;
    } else {
      cout <<"Não é possível remover, pois o elemento não faz parte da lista";
    }
  }
}

//mostrando todas os valores da lista
void mostraLista(Lista *lista){
  
  //Se a lista estiver vazia não é possível imprimi-la
  if(lista_vazia(lista)){
    cout<<"Não é possível imprimir a lista";
  } else {
    //Caso a lista tiver dados, iremos criar o noAux, pois ele que vai "passear"
    //pela lista e ir imprimidando os valores
    No *noAux = lista->inicio;
    
    //colocamos um while que vai rodar enquando naAux for diferente de nullptr,
    //pois ele só sera nullptr qundo acabarem os valores
    //noAux recebe noAux->prox para ir ao próximo valor
    cout << "Valores da lista: \n";
    while (noAux != nullptr) {
      cout << noAux->info << " -> ";
      noAux = noAux->prox;
    }
  }
}

//deletando a lista
void deletarLista(Lista *lista){
  //Antes de dar delete na lista, devemos liberar ela, ou seja, excluit todas
  //os valores da lista, para isso precisamos de um noAux
  
  No *noAux = lista->inicio;
  
  //entramos no while que se repete enquanto noAux for diferente de nullptr, ou seja
  //a lista ainda tem elementos
  while (noAux != nullptr) {
    //fazemos o inicio ir para o próximo, para não perdermos o inicio ja que vamos 
    //precisar dele após deletar o noAux
    lista->inicio = noAux->prox;

    //Deletamos o noAux
    delete noAux;

    //noAux recebe o inicio para deletar novamente
    noAux = lista->inicio;
  }

  //após liberarmos a lista, deletamos a lista
  delete lista;
}
