#include <iostream>
using namespace std;

int main(){

  float result, num1, num2;

  do{
    cout << "Digite um valor para o primeiro numero: ";
    cin >> num1;

    cout << "Digite um valor para o segundo numero: ";
    cin >> num2;
    
    if(num2 == 0){
      cout << "O divisor nao pode ser igual a 0" << endl;
    }

  } while(num2 == 0);

    result = num1 / num2;

  
  cout << "O resultado da divisao de " << num1 << " por " << num2 << " e igual a " << result;


  return 0;
}
