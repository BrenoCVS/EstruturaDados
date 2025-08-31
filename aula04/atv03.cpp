//Faça um cadastro de um usuário, sabendo que este é composto por nome,
//cpf, idade e sexo (F, M). Elabore um procedimento para receber as informações
//do usuário e outro para exibí-las. Use struct.

#include <iostream>
#include <string>
using namespace std;

struct Usuario{
  string nome;
  string cpf;
  int idade;
  string sexo;
};

void pega(Usuario *user);
void exib(Usuario *user);

int main(){
  Usuario cadUser;

  pega(&cadUser);
  cout << endl;
  exib(&cadUser);
}

void pega(Usuario *user){
  cout << "Informe o nome do usuario: ";
  getline(cin, (*user).nome);
  cout << "Informe o CPF: ";
  getline(cin, (*user).cpf);
  cout << "Informe a idade: ";
  cin >> (*user).idade;
  cin.ignore();
  cout << "Informe o sexo (F/M): ";
  getline(cin, (*user).sexo);
}

void exib(Usuario *user){
  cout << "O nome informado foi: " << (*user).nome << endl;
  cout << "O CPF informado foi: " << (*user).cpf << endl;
  cout << "A idade informada foi: " << (*user).idade << endl;
  cout << "O sexo informado foi: " << (*user).sexo;
}

