#include <iostream>
using namespace std;

int main() {
    double litros;
    double quilometros;
    double toneladas;

    cout << "Digite a quantidade em litros: ";
    cin >> litros;

    cout << "Digite a quantidade em quilômetros: ";
    cin >> quilometros;

    cout << "Digite a quantidade em toneladas: ";
    cin >> toneladas;

    double mililitros = litros * 1000;
    double metros = quilometros * 1000;
    double gramas = toneladas * 1000000;

    cout << litros << " litros equivalem a " << mililitros << " mililitros." << endl;
    cout << quilometros << " quilômetros equivalem a " << metros << " metros." << endl;
    cout << toneladas << " toneladas equivalem a " << gramas << " gramas." << endl;

    return 0;
}