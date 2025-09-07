//Escreva um programa que receba duas notas válidas (entre 0.0 e 100.0),
//calcule a média e exiba o resultado. Utilize ponteiros para manipular
//pelo menos uma das variáveis e exiba o valor da média através do ponteiro.

#include <iostream>
using namespace std;

int main(){
  double n1, n2, *pn1, *pn2;
  pn1 = &n1;
  pn2 = &n2;

  do{
    cout << "Informe a primeira nota:" << endl;
    cin >> *pn1;
  }while((*pn1 < 0) || (*pn1 > 100));
  cout << endl;

  do{
    cout <<"Informe a segunda nota: " << endl;
    cin >> *pn2;
  } while ((*pn2 < 0) || (*pn2 > 100));

  cout << endl;
  cout << "A media das notas e: " << (*pn1 + *pn2) / 2;
}
