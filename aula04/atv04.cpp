//Utilize vetor e alocação dinâmica. Receba 10 números e os armazene em um
//vetor alocado dinamicamente. Exiba as informações e também exiba os números 
//contidos no vetor que são maiores que 13.

#include <iostream>
using namespace std;

int main(){
  int *vetor;
  int qnt = 10;
  vetor = new int[qnt];

  for(int i =0; i < qnt; i++){
    cout << "Informe o " << i + 1 << " numero: ";
    cin >> vetor[i];
  }
  cout << endl;

  cout << "Os numeros que digitamaiores que 13 são: ";
  for(int i = 0; i < qnt; i++){
    if(vetor[i] > 13){
      cout << vetor[i] << " - ";
    }
  }

  delete vetor;
}

