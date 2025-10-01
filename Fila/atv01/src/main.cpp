#include <iostream>
using namespace std; 
#include "../include/header.h"

int main() {

    int op;
    FILA Fila;
    criarFila(&Fila);
    do{
      cout << "Fila Estatica\n"
              "Informe a opcao desejada:\n"
              "1 - Inserir elemento na fila\n"
              "2 - Exibir o primeiro elemento\n"
              "3 - Exibir ultimo elemento\n"
              "4 - Remover elemento da fila\n"
              "5 - Exibir elementos da fila\n"
              "6 - Exibir fila ao contraria\n"
              "7 - Maiores que zero e posicao\n"
              "0 - Sair do menu\n";
      cin >> op;

      switch (op){

        case 1:
          inserirElemento(&Fila);
          break;
        case 2:
          if(!filaVazia(&Fila))exibirElemento(Fila.dados[Fila.inicio]);
          break;
        case 3:
          if(!filaVazia(&Fila))exibirElemento(Fila.dados[Fila.fim]);
          break;
        case 4:
          removerElemento(&Fila);
          break;
        case 5:
          exibirFila(&Fila);
          break;
        case 6:
          exibirContrario(&Fila);
          break;
        case 7:
          maiorZero(&Fila);
          break;
        case 0:
            cout << "Saindo do menu\n";
          break;
        default: cout << "Opcao invalida\n";
      }
    }while(op != 0);

    return 0;
}
