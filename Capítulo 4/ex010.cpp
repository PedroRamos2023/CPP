#include <iostream>
using namespace std;

int main()
{
    int total;
    float nota, soma, maior, menor, media;
    char resposta;

    soma = 0;
    total = 0;

    do {
        total++;
        cout << "\nNota " << total << ": ";
        cin >> nota;
        soma = soma + nota;
        if(total == 1)
        {
            maior = nota;
            menor = nota;
        } else
        {
            if(nota > maior)
                maior = nota;
            if(nota < menor)
                menor = nota;
        }
        cout << "\nDeseja continuar [s] ou [n]? ";
        cin >> resposta;
    } while(resposta == 's' || resposta == 'S');
    media = soma / total;
    cout << "\nMédia das notas: " << media;
    cout << "\nMaior nota..........: " << maior;
    cout << "\nMenor nota..........: " << menor;
}