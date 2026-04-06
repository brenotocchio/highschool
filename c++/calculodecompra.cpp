#include<iostream>
#include<locale.h>

using namespace std;
int main(){
	
setlocale(LC_ALL,"Portuguese");

	float vt,vld=0, valor_final, desconto_total;
	int fp;

	cout<<"Digite o valor total da sua compra: R$"<<endl;
	cin>>vt;
	cout<<"Selecione a forma de pagamento desejada: 1-Dinheiro / 2-Pix / 3-Cartão de débito /4-Cartão de crédito: "<<endl;
	cin>>fp;
		if (vt >500){
			cout<<"Compra de valor alto!"<<endl;
		}
		if (vt >= 100 and vt <= 300){
			vld = vt * 0.05;
			cout<<"Como o valor de sua compra está dentre R$100,00 e R$300,00 você receberá um desconto inicial de 5% "<<endl;
		}
		else if (vt > 300){
			vld = vt * 0.10;
			cout<<"Como o valor de sua compra é maior que R$300,00 você receberá um desconto inicial de 10% "<<endl;
		}
		else 
			cout<< " Como a compra não atingiu o mínimo de R$100,00, não há desconto inicial. "<<endl;
		switch (fp){
			case 1 : cout<<"Valor original da compra:R$ "<<vt<<endl;
					 cout<<"Como você selecionou a forma de pagamento via dinheiro, será aplicado mais um desconto de 3%"<<endl;
					 
            	valor_final = (vt - vld) * 0.97;
            	desconto_total = vt - valor_final;

            		 cout << "O desconto total aplicado e de:R$ " << desconto_total << endl;
            		 cout << "Portanto o valor a ser pago e: R$ " << valor_final << endl;
			break;
		  case 2:
		  		valor_final = (vt - vld) * 0.97;
            	desconto_total = vt - valor_final;
        
            cout << "Valor original ad compra : R$ " << vt << endl;
            cout << "Como voce selecionou a forma de pagamento via pix, sera aplicado mais um desconto de 3%" << endl;
            cout << "O desconto total aplicado e de: R$ " << desconto_total << endl;
            cout << "Portanto o valor a ser pago e: R$ " << valor_final << endl;
            break;

        case 3:
            valor_final = vt - vld;

            cout << "Valor original da compra: R$ " << vt << endl;
            cout << "Como voce selecionou a forma de pagamento cartao de debito, nao havera alteracao alem do desconto inicial." << endl;
            cout << "O desconto total aplicado e de: R$ " << vld << endl;
            cout << "Portanto o valor a ser pago e: R$ " << valor_final << endl;
            break;

        case 4:
            valor_final = (vt - vld) * 1.02;
            desconto_total = vt - valor_final;

            cout << "Valor original da compra: R$ " << vt << endl;
            cout << "Como voce selecionou a forma de pagamento cartao de credito, houve um acrescimo de 2%" << endl;
            
    	if (desconto_total > 0)
        	cout << "Desconto total aplicado: R$ " << desconto_total << endl;
    	else if (desconto_total < 0)
        	cout << "Acrescimo total aplicado: R$ " << -desconto_total << endl;
    	else
        	cout << "Nao houve alteracao no valor." << endl;
            cout << "Portanto o valor final a ser pago e de: R$ " << valor_final << endl;
            break;

        default:
            cout << "Forma de pagamento invalida." << endl;
    }
	return 0;
}