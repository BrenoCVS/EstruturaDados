//Idem do exercício 2, porém usando strutc e função. Programa que recebe nome,
//nota válida (0.0 e 100.0) e nome da disciplina. Faça a verificação se o aluno
//passou ou não. Sabe-se que nota >=60 ele está aprovado e caso contrário está
//reprovado.

#include <iostream>
#include <cstring>
using namespace std;

struct Aluno{

  string nome;
  double nota;
  string disc;
  string sit;
};

void situacao(Aluno *aluno);
void pegaDados(Aluno *aluno);
void mostraDados(Aluno *aluno);

int main(){
  Aluno aluno;
    
  pegaDados(&aluno);
  situacao(&aluno);
  mostraDados(&aluno);
  return 0;
}

void pegaDados(Aluno *aluno){
  cout << "Informe o nome do aluno: ";
  getline(cin, (*aluno).nome);

  cout << "Informe a disciplina: ";
  getline(cin, (*aluno).disc);

  do{
    cout << "Informe a nota do aluno: ";
    cin >> (*aluno).nota;
  } while(((*aluno).nota < 0.0) || ((*aluno).nota > 100.0));
}

void situacao(Aluno *aluno){
  if((*aluno).nota >= 60.0){
    (*aluno).sit = "APROVADO";
  } else{
    (*aluno).sit = "REPROVADO";
  }
}

void mostraDados(Aluno *aluno){
  cout << "O aluno " << (*aluno).nome << " foi " << (*aluno).sit << " na materia " << (*aluno).disc << " com nota: " << (*aluno).nota;
}


