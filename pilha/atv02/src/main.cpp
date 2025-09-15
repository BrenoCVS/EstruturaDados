#include <iostream>
using namespace std; 
#include "../include/header.h"

int main() {

  int opc;
  Pilha pilha;
  criarPilha(&pilha);

  do{
    cout << "\n====================================";
    cout << "\nInforme a opcao desejada \n"
      "1 - para inserir um registro \n"
      "2 - para exibir o ultimo registro \n"
      "3 - para remover um registro \n"
      "0 - para sair do menu \n"
      "->";
      cin >> opc;
    switch (opc) {
      case 1:
        inserirPilha(&pilha);
        break;
      case 2:
        exibirElemento(&pilha);
        break;
      case 3:
        removerElemento(&pilha);
        break;
      case 0:
        cout << "Encerrando o sistema";
        break;
      default:
        cout << "Opcao invalida";
        break;
    }
  }while (opc != 0);
   
  return 0;
}
