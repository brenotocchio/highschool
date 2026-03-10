#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    string cpf;
    float sbase, rendam, ir, salario;
    ir = 0;

    cout<<"Digite seu CPF: "<<endl;
    cin>>cpf;

    cout<<"Digite sua renda mensal: "<<endl;
    cin>>rendam;

    sbase = rendam/2100;

    if (sbase < 2){
        cout<<"Isento";
    }
    else if(sbase >= 2 and sbase < 3){
        ir = rendam * 0.05;
    }
    else if(sbase >= 3 or sbase < 5){
        ir = rendam * 0.10;
    }
    else if(sbase >= 5 or sbase < 7){
        ir = rendam * 0.15;
    }
    else if(sbase >= 7){
        ir = rendam * 0.20;
        
    }

    cout<<"\nO Imposto de renda é de: "<<ir<<endl;

    return 0;
}