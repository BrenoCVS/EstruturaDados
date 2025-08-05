//Escreva um programa em C++ que receba do usuário dados de um animal e
//armazene em struct (nome do animal, raça, idade, nome do dono, telefone do
//dono). Deverão ser cadastrados 5 animais. Exiba os dados dos 5 animais
//cadastrados. Verifique qual pet é mais velho e exiba o nome dele e de seu dono.

#include <iostream>
#include <string>
using namespace std;

struct Animal {
  string nomeAnimal;
  string raca;
  int idade;
  string nomeDono;
  string telefoneDono;
};

int main() {
  const int TAM = 5;
  Animal pets[TAM];

  for (int i = 0; i < TAM; i++) {
    cout << "\nCadastro do animal " << i + 1 << endl;

    cout << "Nome do animal: ";
    getline(cin, pets[i].nomeAnimal);

    cout << "Raça: ";
    getline(cin, pets[i].raca);

    cout << "Idade: ";
    cin >> pets[i].idade;
    cin.ignore(); 

    cout << "Nome do dono: ";
    getline(cin, pets[i].nomeDono);

    cout << "Telefone do dono: ";
    getline(cin, pets[i].telefoneDono);
  }

  cout << "\n--- Dados dos Animais Cadastrados ---" << endl;
  for (int i = 0; i < TAM; i++) {
    cout << "\nAnimal " << i + 1 << ":" << endl;
    cout << "Nome: " << pets[i].nomeAnimal << endl;
    cout << "Raça: " << pets[i].raca << endl;
    cout << "Idade: " << pets[i].idade << " anos" << endl;
    cout << "Dono: " << pets[i].nomeDono << endl;
    cout << "Telefone do dono: " << pets[i].telefoneDono << endl;
  }

  int indiceMaisVelho = 0;
  for (int i = 1; i < TAM; i++) {
    if (pets[i].idade > pets[indiceMaisVelho].idade) {
      indiceMaisVelho = i;
    }
  }

  cout << "\n--- Animal Mais Velho ---" << endl;
  cout << "Nome do animal: " << pets[indiceMaisVelho].nomeAnimal << endl;
  cout << "Idade: " << pets[indiceMaisVelho].idade << " anos" << endl;
  cout << "Nome do dono: " << pets[indiceMaisVelho].nomeDono << endl;

  return 0;
}

