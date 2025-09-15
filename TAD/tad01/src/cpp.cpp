#include "../include/header.h"
#include <iostream>
#include <cmath>

using namespace std;

void receberRaio(float *ptrRaio){
  
  do{
    cout << "Informe o raio: ";
    cin >> *ptrRaio;
  } while(*ptrRaio <= 0);

}

void calculaArea(float *ptrRaio, float *ptrArea){

  *ptrArea = 4 * M_PI * pow(*ptrRaio,2);
}

void calculaVolume(float *ptrRaio, float *ptrVolume){
  *ptrVolume = 4*M_PI*pow(*ptrRaio,3)/3;
}

void exibeResultados(float *ptrResult){
  
  cout << "O resultado e: " << *ptrResult << endl;
}



