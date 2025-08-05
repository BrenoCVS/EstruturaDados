//Escreva um programa em C++ que receba do usuário informações a respeito de
//um aluno (nome do aluno, ano de nascimento válido, prontuário) – utilize struct.
//Exiba as informações desse aluno. Calcule e exiba a idade do aluno em 2025

#include <iostream>
#include <string>
using namespace std;

struct Aluno {
  string nome;
  int anoNascimento;
  string prontuario;
};

int main() {
  Aluno aluno;

  cout << "Digite o nome do aluno: ";
  getline(cin, aluno.nome);

  do {
    cout << "Digite o ano de nascimento do aluno (entre 1900 e 2025): ";
    cin >> aluno.anoNascimento;

    if (aluno.anoNascimento < 1900 || aluno.anoNascimento > 2025) {
      cout << "Ano inválido. Tente novamente." << endl;
    }
  } while (aluno.anoNascimento < 1900 || aluno.anoNascimento > 2025);

  cin.ignore(); 
  cout << "Digite o prontuário do aluno: ";
  getline(cin, aluno.prontuario);

  int idade = 2025 - aluno.anoNascimento;

  cout << "\n--- Informações do Aluno ---" << endl;
  cout << "Nome: " << aluno.nome << endl;
  cout << "Ano de Nascimento: " << aluno.anoNascimento << endl;
  cout << "Prontuário: " << aluno.prontuario << endl;
  cout << "Idade em 2025: " << idade << " anos" << endl;

  return 0;
}

