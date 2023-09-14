#include <iostream>
using namespace std;

int main() {
    float valor1, valor2;

    char operacao;
    cout << "\n--------CALCULADORA SIMPLES--------";
    cout << "\nDigite a operacao (+, -, *, /): ";
    cin >> operacao;

    cout << "Digite valor 1: ";
    cin >> valor1;
    cout << "Digite valor 2: ";
    cin >> valor2;

    switch(operacao)
    {
        case '+': cout << "\nSoma: " << valor1 + valor2;   
            break;
        case '-': cout << "\nSubtracao: " << valor1 - valor2;   
            break;
        case '*': cout << "\nMultiplicacao: " << valor1 * valor2;   
            break;
        case '/': cout << "\nDivisao: " << valor1 / valor2;   
            break;
        default: cout << "\nNumero inavalido.\n";
    }
    cout << "\n";
    system("pause");
}