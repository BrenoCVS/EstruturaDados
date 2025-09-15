#include <iostream>
#include "../include/header.h"

using namespace std;

int main(){
  float raio, volume, area;

  cout << "Calcula ESFERA." << endl;
  receberRaio(&raio);
  calculaArea(&raio, &area);
  calculaVolume(&raio, &volume);

  cout << "O resultado da Area e: " << endl;
  exibeResultados(&area); 
  
  cout <<  "O resultado do volume e: " << endl;
  exibeResultados(&volume); 
}
