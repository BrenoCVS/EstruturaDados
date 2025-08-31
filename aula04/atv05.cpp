//Utilize vetor alocado dinamicamente, função. Crie um procedimento para 
//preencher 6 valores e armazená-los em um vetor. Exiba as informações e 
//também a quantidade de valores armazenados que são negativos (elabore 
//outro procedimento para exibir).

#include <iostream>
using namespace std;

void pega(int *v);
void exib(int *v);

int main(){
  int *vetor;
  vetor = new int[6];

  pega(&vetor[0]);
  cout << endl;
  exib(&vetor[0]);

  delete vetor;
}

void pega(int *v){
  for(int i = 0; i < 6; i++){
    cout << "Informe o " << i + 1 << " numero: ";
    cin >> v[i];
  }
}

void exib(int *v){
  cout << "Os numeros negativos digitados são: ";
  for(int i = 0; i < 6; i++){
    if(v[i] < 0){
      cout << v[i] << " / ";
    }
  }
}
