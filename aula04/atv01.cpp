//Programa para ler (na main) dois valores inteiros (A e B) e calcular a 
//soma do triplo de cada variável (deverá ser feito um procedimento para
//esse cálculo. Exiba o valor resultante na main

#include <iostream>
using namespace std;

int calc(int a, int b){
  return (a*3) + (b*3);
}

int main(){
  int a, b;

  cout << "Informe o primeiro valor: ";
  cin >> a;

  cout << "Informe o segundo valor: ";
  cin >> b;

  cout << "O valor final e: " << calc(a,b);
}
