//Escreva um programa em C++ que receba números e armazene-os em uma
//matriz 4X4. Exiba os números contidos na matriz. Exiba a diagonal principal.
//Depoispois exiba a última linha.

#include <iostream>
using namespace std;

int main(){

  int m[4][4];

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      cout << "Digite um valor para a posicao " << i + 1 << "x" << j + 1 << ": ";
      cin >> m[i][j];
    }
    cout << endl;
  }

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      if(i == j){
        cout << m[i][j] << " - ";
      } 
    }
    cout << endl;
  }

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      if(i == 3){
        cout << m[i][j] << " - ";
      } 
    }
    cout << endl;
  }


  return 0;
}
