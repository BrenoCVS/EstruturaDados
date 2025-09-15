#include <iostream>
#include "../include/header.h"
using namespace std;

int main() {
  int tam = 7;
  Jogador *jog = new Jogador[tam];

  pegaDados(jog, tam);
  exibirDados(jog, tam);
  exibirGols(jog, tam);
   
  delete[] jog;
}
