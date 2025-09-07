//Elabore um programa que peça para o usuário um valor inteiro (N) 
//referente ao tamanho dos vetores que devem ser alocados dinamicamente. 
//Peça ao usuário que informe os valores para cada um (valores válidos 
//entre -10 e 0). Crie e construa um terceiro vetor (também alocado 
//dinamicamente) que seja o resultado da multiplicação dos dois anteriores. 
//Exiba os números contidos em cada um dos vetores.

#include <iostream>
using namespace std;

int main(){
  int tam;

  cout << "Insira o tamanho dos vetores: ";
  cin >> tam;

  double* v1 = new double[tam];
  double* v2 = new double[tam];
  double* v3 = new double[tam];


  for(int i = 0; i < tam; i++){
    do{
      cout << "Insira o " << i + 1 <<" numero do prineiro vetor: ";
      cin >> v1[i];
    }while((v1[i] < -10) || (v1[i] > 0) );
  }

  for(int i = 0; i < tam; i++){
    do{
      cout << "Insira o " << i + 1 <<" numero do segundo vetor: ";
      cin >> v2[i];
    }while((v2[i] < -10) || (v2[i] > 0));
  }

  for(int i = 0; i < tam; i++){
    v3[i] = v1[i] * v2[i];
  }

  cout << endl;

  cout << "Os valor do terceiro vetor sao:" << endl; 
  for(int i = 0; i < tam; i++){
    cout << v3[i] << " - ";
  }
}
