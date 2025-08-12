//Programa que recebe dois números calcula a soma e exibe o resultado. Utilize
//ponteiro para manipular pelo menos uma das variáveis e exiba o valor através do
//ponteiro.

#include <iostream>
using namespace std;

int main(){

  int a, b;
  int *ptr1, *ptr2;
  ptr1 = &a;
  ptr2 = &b;

  cout << "Informe o primeiro numero para a soma: ";
  cin >> *ptr1;

  cout << "Informe o segundo numero para a soma: ";
  cin >> *ptr2;

  cout << "O resultado da soma e: " << *ptr1 + *ptr2;

  return 0;
}
