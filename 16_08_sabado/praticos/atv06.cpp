//Elabore um programa que receba 15 números (valores entre 0.0 e 10.0)
//e os armazene em um vetor. Crie uma função para armazenar esses números
//no vetor e outra função para exibir as informações contidas nele. 
//O vetor deverá ser passado para as funções utilizando ponteiros.

#include <iostream>
using namespace std;

void cadVetor(double *v, int tam);
void exibirVetor(double *v, int tam);

int main(){
  int tam = 15;
  double num[tam];

  cadVetor(num, tam);
  cout << "----------------------------" << endl;
  exibirVetor(num, tam);
}

void cadVetor(double *v, int tam){
  cout << "Povoando o vetor: " << endl;
  for(int i = 0; i < tam; i++){
    do{
      cout << "Digite o valor do " << i + 1 << " numero: ";
      cin >> v[i];
    } while ((v[i] < 0) || (v[i] > 10)); 

  }
}

void exibirVetor(double *v, int tam){
  cout << "valores do vetor:" << endl;
  for(int i = 0; i < tam; i++){
    cout << v[i] << " - ";
  }
}
