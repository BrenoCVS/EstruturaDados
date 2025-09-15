#include <iostream>
#include <cstring>
using namespace std;

struct Cliente{
    double renda;
    string cpf;
    string categoria;
};

int main()
{
    int tam = 4;
    double maiorRenda;
    string cpfMaior;
    Cliente *cli = new Cliente[tam];

    for(int i = 0; i <tam; i++){

        do{
            cout<<"Informe a renda do cliente " << i + 1 << ": ";
            cin >> cli[i].renda;
        } while(cli[i].renda < 0);
        cin.ignore();

        cout << "Informe o CPF do cliente " << i + 1 << ": ";
        getline(cin, cli[i].cpf);

        do{
            cout << "Informe a categoria do cliente " << i + 1 <<": ";
            getline(cin, cli[i].categoria);
        } while((cli[i].categoria != "o") && (cli[i].categoria != "p"));
        cout << endl;

    }

    for(int i = 0; i < tam; i++){
        cout<< "Dados do cliente " << i + 1 << ":" << endl;
        cout<< "Renda:" << cli[i].renda<<endl;
        cout<< "CPF: "<< cli[i].cpf << endl;
        cout<< "Categoria: "<<cli[i].categoria<<endl;
        cout<<endl;
    }

    for(int i = 0; i < tam; i++){
        if(i==0){
            maiorRenda = cli[i].renda;
            cpfMaior = cli[i].cpf;

        } else{
            if(cli[i].renda > maiorRenda){
                maiorRenda = cli[i].renda;
                cpfMaior = cli[i].cpf;
            }
        }
    }

    cout << "O CPF com a maior renda e: " << cpfMaior<<endl;


    return 0;
}
