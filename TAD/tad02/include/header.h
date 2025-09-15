#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

struct Jogador{
  string nome;
  string posicao;
  int jogos;
  int gols;
};

void pegaDados(Jogador *jog);
void exibDados(Jogafor *jog);
void exibGols(Jogafor *jog);

#endif


