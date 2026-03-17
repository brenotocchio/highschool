#include <iostream>
#include <locale.h>
#include <string>

using namespace std; 

int main(){

    setlocale(LC_ALL, "Portuguese");

    int idade;
    char carta;

    cout<<"Informe sua idade\n";
    cin>>idade;

    cout<<"Possui carteira de habilitação? S ou N\n";
    cin>>carta;

    if (idade >= 18 && carta == 'S' or carta == 's'){
        cout<<"Pode dirigir\n";
        cout<<"Idade: " <<idade << endl;
        cout<<"Possui carta de habilitação: " << carta << endl;
    }

    else{
        cout<<"Não pode dirigir\n";
        cout<<"Idade: "<<idade<<endl;
        cout<<"Possui carta de habilitação: " << carta << endl;
    }

}