//Crie uma função trocaValor() que receba dois ponteiros para inteiros 
//como parâmetros e troque os valores das variáveis para as quais eles 
//apontam. Na função main(), declare duas variáveis, chame a função e 
//exiba os valores antes e depois da troca. Compare o resultado com uma 
//função que recebesse os valores por cópia.

#include <iostream>
using namespace std;

void trocaValor(int *a, int *b);
void copia(int a, int b, int *copa, int *copb);

int main(){
  int a = 10, b = 20;
  int copiaA, copiaB;
  
  copia(a, b, &copiaA, &copiaB);


  cout << "Valores iniciais:" << endl;
  cout << "a = " << a << " e b = " << b << endl;

  trocaValor(&a, &b);
  cout << "----------------------------" << endl;
  cout << "Vlores após a troca: " << endl;
  cout << "a = " << a << " e b = " << b << endl;

  cout << "----------------------------" << endl;
  cout << "Valores de copia: " << endl;
  cout << "a = " << copiaA << " e b = " << copiaB << endl;

}

void trocaValor(int *a, int *b){
  *a = 30;
  *b = 50;
}

void copia(int a, int b, int *copa, int *copb){
  *copa = a;
  *copb = b;
}

