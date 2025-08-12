//A partir dos dados do exemplo anterior, crie o programa completo e verifique
//qual seria a saída para os valores de y. Exibir o valor e o endereço das variáveis
//direta e também o valor e o endereço do ponteiro e o valor da variável que ele
//aponta. 

#include <iostream>
using namespace std;

int main(){
  int x=2, y=10, *ptr1, *ptr2;
  char letra = 'T', *ptrLetra;
  ptr1 = &x;
  ptr2 = nullptr;
  cout <<"Valor de ptr: "<< ptr1;
  cout <<"\nValor de x de forma indireta: "<< *ptr1 ;
  cout <<"\nEndereço de ptr1: " << &ptr1;
  cout <<"\nValor de x: "<< x ;
  cout <<"\nEndereco de x: "<< &x;

  cout << endl;
  cout << "-----------------------------------"<< endl;
  cout << endl;

  ptr2=&y;
  *ptr2=5;

  cout << "Valor de ptr2: " << ptr2;
  cout << "\nValor de y de forma indireta: " <<*ptr2;
  cout << "\nEndereco de ptr2: "<< &ptr2;
  cout <<"\nValor de y: " <<y;
  cout <<"\nEndereco de y: " << &y;

  cout << endl;
  cout << "------------------------------------"<< endl;
  cout << endl;

  ptrLetra = &letra;
  *ptrLetra = 'B';

  cout << "Valor de ptrLetra: " << static_cast<void*> (ptrLetra);
  cout << "\nValor de letra de forma indireta: " << *ptrLetra;
  cout << "\nEndereco de ptrLetra: " << &ptrLetra;
  cout << "\nValor de letra: " << letra;
  cout << "\nEndereco de letra: " << static_cast<void*>(&letra);

  return 0;
}
