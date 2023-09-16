#include <iostream>
using namespace std;

int main() {
    int numero;
    int totalNumeros = 0;
    long long soma = 0;
    int numerosNegativos = 0;

    cout << "Digite um número (ou -999999999 para sair): ";
    cin >> numero;

    while(numero != -999999999) {
        totalNumeros++;
        soma += numero;

        if(numero < 0) {
            numerosNegativos++;
        }

        cout << "Digite um número (ou -999999999 para sair): ";
        cin >> numero;
    }

    if(totalNumeros == 0) {
        cout << "Nenhum número foi digitado." << endl;
    } else {
        double media = static_cast<double>(soma) / totalNumeros;
        double percentualNegativos = static_cast<double>(numerosNegativos) / totalNumeros * 100;

        cout << "Quantidade de números digitados: " << totalNumeros << endl;
        cout << "Média de todos os números: " << media << endl;
        cout << "Percentual de números negativos: " << percentualNegativos << "%" << endl;
    }

    return 0;
}