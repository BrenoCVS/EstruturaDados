//Elabore um programa em C++ que receba do usuário 10 números e armazene-
//os em um vetor. Exiba os valores armazenados no vetor. Exiba também os
//números em ordem inversa de armazenamento

#include <iostream>
using namespace std;

int main(){
  int num[10];

  for(int i = 0; i < 10; i++){
    cout << "Digite um valor para o numero " << i + 1<< ": ";
    cin >> num[i];
  }

  cout << "Os valores do vetor sao: " <<endl;
  for(int i = 0; i < 10; i++){
    cout << num[i] << " -";
  }
  
  cout << endl;
  cout << "Os valores inversos do vetor sao: " << endl;
  for(int i = 9; i >= 0; i--){
    cout << num[i] << " -";
  }
  return 0;
}
