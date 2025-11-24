#include "../include/header.h"
#include <iostream>
using namespace std;  

//Criando a lista, caso nao haja espaço, será devolvido um erro
Lista* criaLista(){
  Lista *lista = new (std::nothrow) Lista;

  if(lista==nullptr){
    //Erro ao alocar a lista na memoria
    cout << "Erro ao criar lista";
  } else{
    //Lista criada com sucesso, o inicio aponta para nullpre, pois
    //a lista ainda está vazia e o qtd é igual a zero
    lista->inicio = nullptr;
    lista->qtd = 0;
  }
  
  //retorna a lista, agora ja inicializada
  return lista;
}

//Verificando se a lista esta lista 
bool lista_vazia(Lista *lista){

  //Se o inicio estiver apontando para ullptr, a lista esta vazia 
  if(lista->inicio == nullptr){
    cout << "\nA lista está vazia\n";
    //se a lista estiver vazia, retorna true 
    return true;
  } else{
    //se não estiver vazia retorna false 
    return false;
  }
}

//Cirando o metodo de inserção a lista
void inserir_lista(Lista *lista, int dado){
  //Tentamos alocar memoria para um novoNo
  No *novoNo = new (std::nothrow) No;

  if(novoNo==nullptr){
    cout<< "Erro, não há memória para alocar o novoNo";
  } else{
    //Se há esáço para o novoNo, novoNo->info vai receber dado 
    //prox e ant apontam oara nullptr
    novoNo->info = dado;
    novoNo->prox = nullptr;
    novoNo->ant = nullptr;

    if(lista_vazia(lista)){
      //Se a lista estiver vazia, o novoNo vai ser o inicio
      lista->inicio = novoNo;
    } else{
      //Caso a lista não estiver vazia, temos que ver onde o novoNo encaixa
      //respeitando a ordem 
      No *noAux = lista->inicio;
      
      //enquanto noaux for maior que info e noAux prox for diferente de 
      //nullptr, noAux vai avançando pela lista
      while (noAux->prox != nullptr && novoNo->info > noAux->info){
        noAux = noAux->prox;
      }

      //Se o noAux for igual ao inicio,o novoNo dever ser
      //inserido antes do inicio
      if(noAux == lista->inicio && noAux->info > novoNo->info){
        novoNo->prox = lista->inicio;
        lista->inicio = novoNo;
        noAux->ant = novoNo;
      } else {
        if(noAux->info > novoNo->info){
          //Quer dizer que o valor vai ser inserido no meio da lista
          noAux->ant->prox = novoNo;
          novoNo->ant = noAux->ant;
          novoNo->prox = noAux;
          noAux->ant = novoNo;
        }else{
          //Quer dizer que o elemento vai ser inserido no final da lista 
          noAux->prox = novoNo;
          novoNo->ant = noAux;
        }
      }
    }
    //Como inserimos, atualizamos o qtd 
    lista->qtd++;
  }
}

//Criando o metodo de remoção da lista 
void remover_elemento(Lista *lista, int dado){
  //Primeiro devemos ver se a lista esta vazia 
  if(lista_vazia(lista)){
    //caso seja vazia, não podemos remover
    cout << "Impossivel removera\n";
  } else{
    //Neste caso, podemos remover o elemento, para isso 
    //devemos criar um noAux que percorrerá a lista 
    No *noAux = lista->inicio;

    while(noAux != nullptr && noAux->info != dado){
      noAux = noAux->prox;
    }

    if(noAux == nullptr){
      //Quer dizer que o elemento aser removido não faz
      //parte da lista
      cout << "\nImpossivel remover, pois o elemento não está na lista\n";
    }else{
      if(noAux == lista->inicio){
        //Se noAux for iagual ao inicio, devemos reposicionar o inicio
        lista->inicio = noAux->prox;
      } else{
        //Nesse caso o elemento esta na lista
        noAux->ant->prox = noAux->prox;
      }
      //Ai liberamos o espaço da memoria e atualizamos o qtd 
      delete noAux;
      lista->qtd--;
    }
  }
}

//criamos o metodo para exibir a lista 
void mostra_lista(Lista *lista){
  
  if(lista_vazia(lista)){
    //se a lista estiver vazia, não conseguimos exibir 
    cout << "\nNão é possívle exibir a lista\n";
  } else{
    //Neste caso podemos exibir 
    No *noAux = lista->inicio;

    //o noAux vai percorrer a lista e ser exibido, para que os valores
    //da lista apareçam

    cout << "\nValores da lista:\n";
    while(noAux != nullptr){
      cout << noAux->info << " - ";
      noAux = noAux->prox;
    }
  }
}

//Criadno metodo para verificar se um elemento existe em uma lista
void pesquisar_elemento(Lista *lista, int dado){
  if(lista_vazia(lista)){
    //Se a lista é vazia, não iremos verificar 
    cout << "\nImpossivel pesquisar\n";
  } else{
    //Neste caso podemos verificar o elemento para isso ciramos
    //um noAux que ira percorrer a lista
    No *noAux = lista->inicio;
  
    while(noAux != nullptr && noAux->info != dado){
      noAux = noAux->prox;
    }

    if(noAux == nullptr){
      //Nesse caso o elemento não foi encontrado
      cout << "\nELemento não existe na lista\n";
    } else{
      //Neste caso o elemento foi encontrado na lista 
      cout << "\nElemento encontrado dentro da lista\n";
    }
  }
}

//Criadno o metodo para deletar a lista, quando o sistema 
//for encerrado 
void deletar_lista(Lista *lista){
  //Para liberar a lista, criamos um noAux 
  No *noAux = lista->inicio;

 //entramos no while que se repete enquanto noAux for diferente de nullptr, ou seja
  //a lista ainda tem elementos
  while(noAux != nullptr){
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
