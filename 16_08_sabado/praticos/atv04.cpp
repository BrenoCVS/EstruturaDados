//Escreva um programa em C++ que declare uma struct Pessoa 
//(com nome, cpf e idade). Crie uma instância dessa struct e 
//um ponteiro para ela. Utilize o ponteiro para preencher os 
//dados da pessoa e exiba-os de ambas as formas de acesso 
//(com * e  . , e com ->). Modifique a idade via ponteiro e 
//verifique a alteração na struct original.

#include <iostream>
#include <string>
using namespace std;

struct Pessoa{
  string nome;
  string cpf;
  int idade;
};

int main(){
  Pessoa p1;
  Pessoa *ptr = &p1;

  cout << "Informe o nome: ";
  getline (cin, (*ptr).nome);

  cout << "Informe o cpf: ";
  getline (cin, (*ptr).cpf);

  cout << "Infome a idade: ";
  cin >> (*ptr).idade;

  cout << "--------------------" << endl;

  cout << "Mostrando valores com *:" << endl;
  cout << "nome: " << (*ptr).nome << endl;
  cout << "cpf: " << (*ptr).cpf << endl;
  cout << "idade: " << (*ptr).idade << endl;

  cout << "--------------------" << endl;

  cout << "Mostrando valores com ->:" << endl;
  cout << "nome: " << ptr->nome << endl;
  cout << "cpf: " << ptr->cpf << endl;
  cout << "idade: " << ptr->idade << endl;

  (*ptr).idade = 20;

  cout << "--------------------" << endl;
  cout << "Idade modificada via ponteiro: " << endl;
  cout << "Nova idade: " << (p1).idade;


}
