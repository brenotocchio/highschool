#include <iostream>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");

    float n1, n2;
    int qtdaprovado = 0, qtdreprovado = 0, qtdtotal = 0;
    float somatotal = 0, mediageral = 0;
    char opcao;

    do {
        cout << "Digite a primeira nota do aluno: " << endl;
        cin >> n1;

        cout << "Digite a segunda nota: " << endl;
        cin >> n2;

        float media = (n1 + n2) / 2.0;

        somatotal += media;

        if (media >= 7) {
            cout << "O aluno está aprovado!\n";
            qtdaprovado++;
        } else {
            cout << "O aluno está reprovado!\n";
            qtdreprovado++;
        }

        qtdtotal++;

        cout << "\nDeseja continuar? (s/n): ";
        cin >> opcao;

    } while (opcao == 's' || opcao == 'S');

    mediageral = somatotal / qtdtotal;

    cout << "\nQuantidade de alunos aprovados: " << qtdaprovado << endl;
    cout << "Quantidade de alunos reprovados: " << qtdreprovado << endl;
    cout << "Média geral da turma: " << mediageral << endl;

    return 0;
}