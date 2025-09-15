#include "../include/header.h"
#include <string>
#include <iostream>
using namespace std;

void pegaDados(Jogador *jog, int tam){
  for(int i = 0; i < tam; i++){
    cout << "Informe o nome do " << i + 1 << " jogador: ";
    getline(cin, jog[i]->nome);

    cout << "Informe a posicao do " << i + 1 << " jogador: ";
    getline(cin, jog[i]->posicao);
    
    do{
      cout << "Informe o numero de jogos do " i +1 << " jogador: ";
      cin >> jog[i]->jogos;
    } while(jog[i]->jogos<0);

    do{
      cout << "Informe o numeros de gols do " << i + 1 << " jogador: ";
      cin >> jog[i]->gols;
    }while(jog[i]->gols < 0);

    cin.ignore();
  }
}
void exibDados(Jogador *jog, int tam){

  for(int i = 0; i < tam; i++){
    cout << endl;
    cout << "Dados do jogador " << i + 1<<endl;
    cout << "Nome: " << jog[i]->nome<<endl;
    cout << "Posicao: " << jog[i]->posicao<<endl;
    cout << "Jogos: " << jog[i]->jogos<<endl;
    cout << "Gols: " << jog[i]->
    
  }
}
void exibGols(Jogador *jog, int tam){
  cout<<endl;
  
  int total
  for{int i = 0; i < tam; i++}{
    total += jog[i]->gols
  }

  cout << "A soma dos gols de todos os jogadores e: " << total;

}
// implementações aqui
