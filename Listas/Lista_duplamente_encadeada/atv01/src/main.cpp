#include <iostream>
#include "../include/header.h"
using namespace std;

int main() {

    int op, num;
    Lista *lista = criaLista();
    if(lista != nullptr){
      while (op != 0) {
        cout<<"\n-------------------------------------------\n";
        cout<<"Selecione uma opcao:\n";
        cout<<"\n";
        cout<<"\n1 - Inserir elemento na lista";
        cout<<"\n2 - Remover elemento da lista";
        cout<<"\n3 - Imprimir lista";
        cout<<"\n4 - Pesquisar elemento";
        cout<<"\n0 - Sair do menu\n";
        cin >> op;

        switch (op) {

          case 1:
              cout<<"\nQual numero quer inserir: ";
              cin >> num;
              inserir_lista(lista, num);
            break;
          case 2:
              cout<<"\nQual umero quer remover: ";
              cin >> num;
              remover_elemento(lista, num);
            break;
          case 3:
              mostra_lista(lista);
            break;
          case 4:
              cout<<"\nInsira o elemento que deseja procurar: ";
              cin >> num;
              pesquisar_elemento(lista, num);
            break;
          case 0:
              cout << "Saindo do sistema";
            break;
          default:
              cout<< "opcao invalida";
            break;
        }

      }
    }

    deletar_lista(lista);
    return 0;
}

