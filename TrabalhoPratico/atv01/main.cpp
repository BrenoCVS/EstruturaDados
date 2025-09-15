#include <iostream>

using namespace std;

void preencheVetor(int *ptrTamanho, int *ptrVetor);
void exibeVetorInverso(int *ptrTamanho, int *ptrVetor);
void calculaTotalDvisivel(int *ptrTamanho, int *ptrVetor, int *ptrTotal);

int main()
{
    int tam, total = 0;

    cout << "Informe o tamanho do vetor: ";
    cin >> tam;

    int vetor[tam];

    preencheVetor(&tam, &vetor[0]);
    cout << endl;
    exibeVetorInverso(&tam, &vetor[0]);
    cout << endl;
    calculaTotalDvisivel(&tam, &vetor[0], &total);

    cout<< "Quantidade de numeros divisiveis por 7: " << total;
    return 0;
}

void preencheVetor(int *ptrTamanho, int *ptrVetor){

    for(int i = 0; i < *ptrTamanho; i++){
        cout<<"Informe o valor para a posicao " << i + 1 << " do vetor: ";
        cin >> ptrVetor[i];
    }
}

void exibeVetorInverso(int *ptrTamanho, int *ptrVetor){
    cout << "Ordem inversa: " << endl;
   for(int i = *ptrTamanho; i > 0; i--){
        cout << ptrVetor[i - 1] << " - ";
    }

}

void calculaTotalDvisivel(int *ptrTamanho, int *ptrVetor, int *ptrTotal){
    for(int i = 0; i < *ptrTamanho; i++){
        if(ptrVetor[i]%7 == 0){
            *ptrTotal += 1;
        }
    }
}


