#include <iostream>
#include <locale.h>
#include <string>

using namespace std; 

int main(){

    setlocale(LC_ALL, "Portuguese");

    float n1, n2, media;
    int cont = 0, aprov = 0, reprov = 0;
    char opc;

    cout<<"Deseja digitar notas e calcular média s/n\n";
    cin>>opc;

    while (opc == 's')
    {

        cout<<"Digite a nota 1: \n";
        cin>>n1;

        cout<<"Digite a nota 2: \n";
        cin>>n2;

        media = (n1 + n2)/2;

        if (media >= 7.0)
        {
            cout<<"Aluno aprovado! Média: " << media <<endl;

            aprov++;
        }

        else
        {
            cout<<"Aluno reprovado! Média: " << media <<endl;

            reprov++;
        }

        cont++;

        cout<<"Deseja continuar? s/n \n";
        cin>>opc;

        system("clear");

    }
    
    cout<<"De " << cont << " alunos, foram " << aprov << " aprovados e " << reprov << " reprovados. \n";

    cout<<"Programa finalizado. \n";

    return 0;

}