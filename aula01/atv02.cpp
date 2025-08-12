//Programa que recebe nome, nota válida (0.0 e 100.0) e nome da disciplina. Faça a
//verificação se o aluno passou ou não. Sabe-se que nota >=60 ele está aprovado e
//caso contrário está reprovado. Utilize a seguinte estrutura:
//double nota, *ptrNota;
//string nome, disc, *ptrNome;
//prtNota = &nota;
//ptrNome = &nome;

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

  double nota, *ptrNota;
  string nome, disc, *ptrNome, *ptrDisc;
  ptrNota = &nota;
  ptrNome = &nome;
  ptrDisc = &disc;

  cout << "Informe o nome do aluno: ";
  getline(cin, *ptrNome);
  
  do{
    cout << "Informe a nota do aluno (de 0.0 a 100.0): ";
    cin >> *ptrNota;
  }while((*ptrNota < 0.0) || (*ptrNota > 100.0));

  cin.ignore();

  cout << "Informe o nome da disciplina: ";
  getline(cin, *ptrDisc);

  if(*ptrNota >= 60.0){
    cout << "O aluno " << *ptrNome << " e ele foi APROVADO com nota: " << *ptrNota << " na discipline " << *ptrDisc;
  } else {
    cout << "O aluno " << *ptrNome << " e ele foi REPROVADO com nota: " << *ptrNota << " na discipline " << *ptrDisc;
  }
  return 0;
}

