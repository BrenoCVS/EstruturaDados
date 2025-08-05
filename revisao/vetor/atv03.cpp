//Escreva um programa em C++ para armazenar 7 números em um vetor. Calcule
//e exiba a soma desses números. Verifique e exiba quantos desses números são
//divisíveis por 8.

#include <iostream>
using namespace std;

int main(){

  int num[7], divisíveis = 0, soma = 0;

  for(int i = 0; i < 7; i++){
    cout << "Digite um valor para a posicao " << i + 1 << ": ";
    cin >> num[i];

    soma += num[i];
    if(num[i]%8 == 0){
      divisíveis++;
    }
  }

  cout << "A soma é: " << soma << endl;
  cout << divisíveis << " numeros sao divisíveis por 8";
  


  return 0;
}
