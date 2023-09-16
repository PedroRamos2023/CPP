#include <iostream>
using namespace std;

int main()
{
    double altura, maiorAltura = 0, menorAltura = 0, somaAlturas = 0;
    int pessoasMenosDe18 = 0, pessoasMaisDe60 = 0;
    int contador = 0;

    while (contador < 30) {
        cout << "Digite a altura da pessoa " << (contador + 1) << " em metros: ";
        cin >> altura;

        if (altura > maiorAltura) {
            maiorAltura = altura;
        }

        if (altura < menorAltura) {
            menorAltura = altura;
        }

        somaAlturas += altura;

        int idade;
        cout << "Digite a idade da pessoa " << (contador + 1) << ": ";
        cin >> idade;

        if (idade < 18) {
            pessoasMenosDe18++;
        } else if (idade > 60) {
            pessoasMaisDe60++;
        }

        contador++;
    }

    double mediaAlturas = somaAlturas / 30;

    cout << "Maior altura: " << maiorAltura << " metros" << endl;
    cout << "Menor altura: " << menorAltura << " metros" << endl;
    cout << "Média de altura: " << mediaAlturas << " metros" << endl;
    cout << "Número de pessoas com menos de 18 anos: " << pessoasMenosDe18 << endl;
    cout << "Número de pessoas com mais de 60 anos: " << pessoasMaisDe60 << endl;

    return 0;
}