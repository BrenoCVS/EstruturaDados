//Programa que receba valores referentes a 10 círculos. Crie uma struct
//com as informações do círculo (raio, circunferência e área). 
//Use alocação dinâmica para criar o vetor de struct CÍRCULO.  
//Receba as informações, faça os cálculos e exiba as informações na main()

#include <iostream>
#include <cmath>
using namespace std;

struct Circulo{
  double raio;
  double circunferencia;
  double area;
};

int main(){
  int qnt = 10;
  Circulo *v = new Circulo[qnt];

  for(int i = 0; i < qnt; i++){
    cout << "Informe o raio da " << i + 1 << " circunferencia:";
    cin >> v[i].raio;

    v[i].circunferencia = M_PI * v[i].raio * 2;

    v[i].area = M_PI * pow(v[i].raio, 2);
  }

  for(int i = 0; i < qnt; i++){
    cout << "Informecoes do circulo " << i +1 <<":" << endl;
    cout << "Raio: " << v[i].raio << endl;
    cout << "Circunferencia: " << v[i].circunferencia << endl;
    cout << "Area: " << v[i].area << endl;
    cout << endl;
  }

  delete v;
}
