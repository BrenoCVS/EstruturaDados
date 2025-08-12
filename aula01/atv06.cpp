//Programa que recebe 10 números e os armazena em um vetor, exiba as
//informações contidas no vetor. Utilize função para armazenar e outra para exibir
//as informações. O vetor deverá ser passado para as funções usando ponteiro.

#include <iostream>
using namespace std;

void pegaNum(int *vetor);
void mostraNum(int *vetor);

int main(){
  int num[10];
  int *vetor;

  pegaNum(&num[0]);
  mostraNum(&num[0]);

  return 0;
  
}

void pegaNum(int *vetor){
  for(int i = 0; i < 10; i++){
    cout << "Informe o " << i +1<< " numero: ";
    cin >> vetor[i];
  }
}

void mostraNum(int *vetor){
  cout << "Os numeros inseridos foram: " << endl;

  for(int i= 0; i < 10; i++){
    cout << vetor[i] << " - ";
  }
}
