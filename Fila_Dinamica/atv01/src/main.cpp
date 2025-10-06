#include <iostream>
#include "../include/header.h"
using namespace std;

int main() {
    Fila *fila = criarFila();
    int opc;
    
    do{
      cout << "\n";
      cout << "\nFila DIanamica\n"
              "Informe a opcao desejada:\n"
              "1 - Inserir Elemento\n"
              "2 - Remover Elemento\n"
              "3 - Exibir o Peimeiro Elemento\n"
              "4 - Exibir o Ultimo Elemento\n"
              "5 - Exibir Elementos\n"
              "6 - Exibir Elementos inversos\n"
              "7 - Exibir Quantidade de Elementos\n"
              "8 - Sair do Menu\n";
      
      cin >> opc;

      switch (opc) {

        case 1:
          inserirElemento(fila);
          break;
        case 2:
          removerELemento(fila);
          break;
        case 3:
          exibirPrimeiro(fila ,0);
          break;
        case 4:
          exibirPrimeiro(fila ,1);
          break;
        case 5:
          exibirFila(fila);
          break;
        case 6:
          exibirInverso(fila);
          break;
        case 7:
          exibirQuantidade(fila);
          break;
        case 8:
          cout << "Encerrando SIstema.\n";
          break;
        default:  
          cout <<  "Opcao Invalida\n";
          break;
      }
            
    } while(opc != 0);
    
    excluirFila(fila);
    return 0;
}
