#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Informe um número: ";
    cin >> numero;

    if(numero >= 0)
        cout << "Este número é positivo\n";
        
    if(numero < 0)
        cout << "Este número é negativo\n";
    system("pause");
}