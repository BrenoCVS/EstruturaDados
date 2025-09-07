//Elabore um programa que receba informações do exercício anterior 
//(nome, idade e cpf) e armazene em uma struct chamada Pessoa. Crie 
//uma função cadastrarPessoa(Pessoa *cadPessoa) para receber os dados 
//e uma função exibirCadastro(Pessoa *cadPessoa) para exibir os dados. 
//O programa deve cadastrar 4 pessoas.

#include <iostream>
#include <string>
using namespace std;

struct Pessoa{
  string nome;
  string cpf;
  int idade;
};

void cadastrarPessoa(Pessoa *cadPessoa);
void exibirCadastro(Pessoa *cadPessoa);

int main(){
  Pessoa p1[4];

  cadastrarPessoa(p1);
  cout <<"--------------------------------" << endl;
  exibirCadastro(p1);
}

void cadastrarPessoa(Pessoa *cadPessoa){
  for(int i = 0; i < 4; i++){
    cout << "Informe o nome da " << i + 1 <<" pessoa: ";
    getline(cin, cadPessoa[i].nome);

    cout << "Informe o cpf da " << i + 1 <<" pessoa: ";
    getline(cin, cadPessoa[i].cpf);

    cout <<"Informe a idade da " << i + 1 <<" pessoa: ";
    cin >> cadPessoa[i].idade;
    
    cout << endl;
    cin.ignore();
   
  }
}
void exibirCadastro(Pessoa *cadPessoa){
  for(int i = 0; i<4; i++){
    cout << "Dados da "<< i + 1 << " pessoa:" << endl;
    cout << "Nome: " << cadPessoa[i].nome << endl;
    cout << "Cpf: " << cadPessoa[i].cpf << endl;
    cout << "Idade: " << cadPessoa[i].idade << endl;
    cout << endl;
  }
}


