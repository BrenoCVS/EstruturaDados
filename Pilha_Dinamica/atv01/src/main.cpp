#include <iostream>
using namespace std; 
#include "../include/header.h"

int main() {

  int opc;
  
  Pilha *topo = criarPilha();

  do{
    cout << "\n====================================";
    cout << "\nInforme a opcao desejada \n"
      "1 - para inserir um elemento na pilha \n"
      "2 - para exibir o topo \n"
      "3 - para remover um elemento da pilha \n"
      "0 - para sair do menu \n"
      "->";
    cin >> opc;
    
    switch (opc) {
      case 1:
        inserirElemento(topo);
        break;
      case 2:
        exibirElemento(topo);
        break;
      case 3:
        removerElemento(topo);
        break;
      case 0:
        cout << "Encerrando o sistema\n";
        break;
      default:
        cout << "Opcao invalida\n";
        break;
    }
    
  }while (opc != 0);
  
  deletaPilha(topo);
  return 0;
}
