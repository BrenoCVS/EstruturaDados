//Escreva um programa em C++ que declare uma variável inteira i e um 
//ponteiro ptr para i. Altere o valor de i utilizando o ponteiro e exiba 
//o valor de i em diferentes etapas. Após pegar o valor de i através do 
//usuário. Após a manipulação através de ptr.

#include <iostream>
using namespace std;

int main(){
  int i = 10;
  int *ptr = &i;

  cout << "O valor inicial de I e: " << *ptr << endl;

  *ptr = 5;

  cout << "Usndo ponteiro o valor foi alterado para: " << *ptr << endl;

  cout << "Digite um valor para I:";
  cin >> *ptr;

  cout << "Atribuimos o valor digitado usando ponteiro, o valor agora e: " << *ptr << endl;
}
