#include <iostream>
using namespace std;

int main() {
    float valor1, valor2;

    cout << "Informe o primeiro valor: ";
    cin >> valor1;
    cout << "Informe o segundo valor: ";
    cin >> valor2;

    cout << "\nSoma.........: " << valor1 + valor2;
    cout << "\nSubtração....: " << valor1 - valor2;
    cout << "\nMultiplicação: " << valor1 * valor2;
    cout << "\nDivisão......: " << valor1 / valor2;
    cout << "\n";
    system("pause");
}