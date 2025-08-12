//Programa que recebe dois números calcula a soma e exibe o resultado na
//main(). Utilize procedimento (não deverá retornar o resultado) para calcular a
//soma dos números.

#include <iostream>
using namespace std;

void calcular(int *ptr1, int *ptr2, int *ptrSoma) {
    *ptrSoma = *ptr1 + *ptr2;
}

int main() {
    int a, b, soma;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptrSoma = &soma;

    cout << "Informe o primeiro numero: ";
    cin >> *ptr1;

    cout << "Informe o segundo numero: ";
    cin >> *ptr2;

    calcular(ptr1, ptr2, ptrSoma);

    cout << "O resultado da soma: " << *ptr1 << " + " << *ptr2 << " = " << *ptrSoma << endl;

    return 0;
}

