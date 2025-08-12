//Programa que recebe informações de um animal (nome, espécie, raça, idade) e
//armazene em uma struct (Animal). Utilize ponteiro e função/procediemento para
//receber os dados e depois para exibir os dados. Siga o seguinte padrão
//void cadastrarAnimal(Animal *cadAnimal);
//void exibirCadastro(Animal *cadAnimal)

#include <iostream>
#include <cstring>
using namespace std;

struct Animal {
  string nome;
  string especie;
  string raca;
  int idade;
};

void cadastrarAnimal(Animal *ptrAnimal);
void exibirCadastro(Animal *ptrAnimald);

int main(){

  Animal cadAnimal;

  cadastrarAnimal(&cadAnimal);
  cout << endl;
  exibirCadastro(&cadAnimal);

  return 0;
}

void cadastrarAnimal(Animal *ptrAnimal){

  cout << "Informe o nome do animal: ";
  getline(cin, (*ptrAnimal).nome);

  cout << "Informe a especie do animal: ";
  getline(cin, (*ptrAnimal).especie);

  cout << "Informe a raca do animal: ";
  getline(cin, (*ptrAnimal).raca);

  cout << "Informe a idade do animal: ";
  cin >> (*ptrAnimal).idade;
}

void exibirCadastro(Animal *ptrAnimal){
  cout << "O nome do animal e: " << (*ptrAnimal).nome << endl;
  cout << "Ele e da especie: " << (*ptrAnimal).especie << endl;
  cout << "Da raca: " << (*ptrAnimal).raca << endl;
  cout << "E ele tem " << (*ptrAnimal).idade << " anos" << endl;
}
