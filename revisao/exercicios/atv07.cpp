//Programa que exibe o seguinte menu para o usuário: A - para receber e somar
//dois números e exibir o resultado. B – para receber três números, calcular e exibir
//a multiplicação entre eles. C – para receber dois números e calcular e exibir a
//divisão entre eles (valide o divisor). S – para sair do menu e finalizar o programa.
//O programa só deverá ser finalizado ao informar a opção S. Todos os cálculos
//(soma, multiplicação e divisão) devem ser elaborados através de
//função/procedimento. Utilize estrutura de repetição para poder voltar ao menu.

#include <iostream>
using namespace std;

float somar(float a, float b) {
  return a + b;
}

float multiplicar(float a, float b, float c) {
  return a * b * c;
}

float dividir(float a, float b) {
  return a / b;
}

int main() {
  char opcao;

  do {
    cout << "\n===== MENU =====" << endl;
    cout << "A - Somar dois numeros" << endl;
    cout << "B - Multiplicar tres numeros" << endl;
    cout << "C - Dividir dois numeros" << endl;
    cout << "S - Sair" << endl;
    cout << "Escolha uma opcao: ";
    cin >> opcao;


    opcao = toupper(opcao);

    switch (opcao) {
      case 'A': {
        float num1, num2;
        cout << "Digite o primeiro numero: ";
        cin >> num1;
        cout << "Digite o segundo numero: ";
        cin >> num2;
        cout << "Resultado da soma: " << somar(num1, num2) << endl;
        break;
      }

      case 'B': {
        float n1, n2, n3;
        cout << "Digite o primeiro numero: ";
        cin >> n1;
        cout << "Digite o segundo numero: ";
        cin >> n2;
        cout << "Digite o terceiro numero: ";
        cin >> n3;
        cout << "Resultado da multiplicacao: " << multiplicar(n1, n2, n3) << endl;
        break;
      }

      case 'C': {
        float dividendo, divisor;
        cout << "Digite o dividendo: ";
        cin >> dividendo;

        do {
          cout << "Digite o divisor (diferente de zero): ";
          cin >> divisor;
          if (divisor == 0) {
            cout << "Erro: divisor nao pode ser zero. Tente novamente." << endl;
          }
        } while (divisor == 0);

        cout << "Resultado da divisao: " << dividir(dividendo, divisor) << endl;
        break;
      }

      case 'S':
        cout << "Encerrando o programa..." << endl;
        break;

      default:
        cout << "Opcao invalida. Tente novamente." << endl;
    }

  } while (opcao != 'S');

  return 0;
}

