#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Informe um número: ";
    cin >> numero;

    if(numero % 2 == 0)
        cout << "Este número é par\n";
    else
        cout << "Este número é ímpar\n";
    system("pause");
}