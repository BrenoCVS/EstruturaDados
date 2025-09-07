//Faça um programa que leia do usuário o tamanho de um vetor a ser lido e 
//faça a alocação dinâmica. Em seguida, leia do usuário seus valores,
//exiba os valores armazenados no vetor. Depois mostre quantos dos
//números são pares e quantos são ímpares.

#include <iostream>
using namespace std;

int main(){
  int qnt, im = 0, pr = 0;

  cout << "Quantos numeros deseja inserir? ";
  cin >> qnt;

  int *num = new int[qnt];
  
  for(int i = 0; i < qnt; i++){
    cout << "Informe o " << i + 1 << " numero: ";
    cin >> num[i];

    if((num[i]%2) == 0){
      pr++;
    } else {
      im++;
    }
  }

  cout<<"Os numeros digitados foram: " << endl;
  for(int i = 0; i < qnt; i++){
    cout << num[i] << " - ";
  }
  cout<< endl;
  cout<< "Foram digitados " << im << " impares e " << pr << " pares";
}
