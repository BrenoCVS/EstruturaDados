//Programa que receba 15 números e armazene em um vetor (utilize procedimento).
//Faça outro procedimento para exibir os valores do vetor. 
//Calcule a soma dos valores contidos no vetor e exiba o resultado 
//(procedimento par isso).

#include <iostream>
using namespace std;

void pega(int *p);
void exib(int *p);
void calc(int *p);

int main(){
  int v[15];

  pega(&v[0]);
  cout << endl;
  exib(&v[0]);
  cout << endl;
  calc(&v[0]);
}


void pega(int *p){
  
  for(int i = 0; i < 15; i++){
    cout << "Informe o " << i + 1 <<" numero: ";
    cin >> p[i];
  }
}

void exib(int *p){
  cout << "Valores do vetor: " << endl;
  for(int i = 0; i < 15; i++){
    cout << p[i] << " - ";
  }
}

void calc(int *p){
  int soma = 0;

  for(int i = 0; i < 15; i++){
    soma += p[i];
  }

  cout << "A soma dos valores e: " << soma;
}

