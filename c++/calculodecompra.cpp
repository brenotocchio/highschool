#include <iostream>
#include <locale.h>
#include <string>

using namespace std; 

int main(){

    setlocale(LC_ALL, "Portuguese");

    float vt;
    int fp;

    cout<<"Digite o valor total da compra: "<<endl;
    cin>>vt;

    if (vt >= 100 && vt <= 300)
    {

        cout<<"Você recebeu um desconto de 5% devido ao valor da sua compra!"<<endl;

        vt = vt * 0.95;

    }

    else if (vt > 300){

        cout<<"Você recebeu um desconto de 10% devido ao valor da sua compra!"<<endl;

        vt = vt * 0.90;

    }
    

    cout<<"Digite a forma de pagamento: 1- Dinheiro / 2- PIX / 3- Cartão de Débito / 4- Cartão de crédito"<<endl;
    cin>>fp;

    switch (fp)
    {
    case 1 or 2:

        cout<<"Você recebeu um desconto de 3% devido ao método de pagamento!"<<endl;

        vt = vt * 0.97;

        cout<<vt;

        break;
    
    case 4:
        cout<<"Você recebeu um acréscimo de 3% devido ao método de pagamento!"<<endl;

        vt = vt * 1.03;

        break;
    
    default:
        cout<<"Opção inválida! Selecione um número correto."<<endl;
        break;
    }



}