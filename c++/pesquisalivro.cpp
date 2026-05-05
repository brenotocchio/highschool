#include <iostream>
#include <locale.h>
#include <string>

using namespace std; 

int main(){

    setlocale(LC_ALL, "Portuguese");

    int idade;
    char sexo;
    double percentual;
    float media;

    int qtdLivro = 0;
    int qtdLivrosMenor10 = 0;
    int qtdMulheres = 0;
    int somaidadehomens = 0, qtdhomens = 0;
    int qtdpessoassemler = 0;
    int pessoastotal = 0;

    do
    {
     
        cout<<"Digite sua idade: "<<endl;
        cin>>idade;

        if (idade < 0)
        {
            break;
        }

        cout<<"Digite seu sexo: (F ou M) "<<endl;
        cin>>sexo;

        cout<<"Escreva a quantidade de livro que você leu em 2025: "<<endl;
        cin>>qtdLivro;

        pessoastotal = pessoastotal + 1;

        if (idade < 10)
        {
            qtdLivrosMenor10 = qtdLivrosMenor10 + qtdLivro;
        }

        if (sexo == 'F' and qtdLivro >= 5){
            qtdMulheres = qtdMulheres + 1;
        }

        if (sexo == 'M' and qtdLivro < 5)
        {
            somaidadehomens = somaidadehomens + idade;
            qtdhomens = qtdhomens + 1;
            
        }

        if (qtdLivro == 0)
        {
            qtdpessoassemler = qtdpessoassemler + 1;
            
        }
    

    } while (idade >= 0);

    if (qtdhomens > 0)
        {
            media = somaidadehomens / qtdhomens;
        }
    else
    {
        media = 0;
    }
    

    if (pessoastotal > 0)
        {
            percentual = (qtdpessoassemler * 100.0) / pessoastotal;
        }
    else
    {
        percentual = 0;
    }
    

    cout<<"Quantidade total de livros lidos por menores de 10 anos: "<< qtdLivrosMenor10<<endl;
    cout<<"Quantidade total de mulheres que leram 5 ou mais livros: "<< qtdMulheres<<endl;
    cout<<"Média da idade dos homens que leram menos de 5 livros: "<< media<<endl;
    cout<<"Percentual de pessoas que não leram livros em relação à quantidade de pessoas total da pesquisa: "<< percentual<<"%"<<endl;
    

}