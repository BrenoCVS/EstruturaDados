//Idem ao anterior, usando 4 procedimentos (um para pegar o raio, 
//outro para calcular o diâmetro, outro para calcular a área e outro para 
//exibir as informações.

#include <iostream>
#include <cmath>
using namespace std;

struct Circulo {
  double raio;
  double circun;
  double area;
};

void pega(Circulo *c);
void calcdim(Circulo *c);
void calcarea(Circulo *c);
void exib(Circulo *c);

int main(){
  int qnt = 10;
  Circulo *c = new Circulo[qnt];

  pega(&c[0]);
  cout << endl;
  calcdim(&c[0]);
  cout << endl;
  calcarea(&c[0]);
  cout << endl;
  exib(&c[0]);

  delete c;
}

void pega(Circulo *c){
  for(int i = 0; i < 10; i++){
    cout << "Informe o " << i + 1 <<" raio: ";
    cin >> c[i].raio;
  }
}

void calcdim(Circulo *c){
  for(int i = 0; i < 10; i++){
    c[i].circun = M_PI * 2 * c[i].raio;
  }
}

void calcarea(Circulo *c){
  for(int i = 0; i < 10; i++){
    c[i].area = M_PI * pow(c[i].raio, 2);
  }
}

void exib(Circulo *c){
  for(int i = 0; i < 10; i++){
    cout << "Informecoes do circulo "<< i + 1 <<":" << endl;
    cout << "Raio: " << c[i].raio << endl;
    cout << "Circunferencia: " << c[i].circun << endl;
    cout << "Area: " << c[i].area << endl;
    cout << endl;
  }
}
