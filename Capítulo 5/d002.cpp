#include <iostream>
using namespace std;

int main()
{
    const int numAlunos = 5;
    string matricula[numAlunos];
    double nota1[numAlunos];
    double nota2[numAlunos];
    double media[numAlunos];

    for(int i = 0; i < numAlunos; i++)
    {
        cout << "Informe a matrícula do aluno " << i + 1 << ": ";
        cin >> matricula[i];
        cout << "Informe a primeira nota do aluno " << i + 1 << ": ";
        cin >> nota1[i];
        cout << "Informe a segunda nota do aluno " << i + 1 << ": ";
        cin >> nota2[i];

        media[i] = (nota1[i] + nota2[i]) / 2;
    }

    cout << "\nResultados:" << endl;
    for(int i = 0; i < numAlunos; i++)
    {
        cout << "Matrícula: " << matricula[i] << endl;
        cout << "Média: " << media[i] << endl;
        if(media[i] >= 6.0)
        {
            cout << "Situação: Aprovado" << endl;
        } else {
            cout << "Situação: Reprovado" << endl;
        }
        cout << endl;
    }

    return 0;
}