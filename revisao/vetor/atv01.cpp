//Escreva um programa em C++ para armazenar 5 números positivos em um
//vetor. Exiba todos os números.

#include <iostream>
using namespace std;

int main(){
  int numero[5];

  for(int i = 0; i < 5; i++){
    cout << "Digite um numero para a posicao " << i + 1 << ": " << endl;
    cin >> numero[i];
  }

  cout << "Os numeros digitados foram: " << endl;
  for(int  i = 0; i < 5; i++){
    cout << numero[i] << " - ";
  }

  return 0;
}
