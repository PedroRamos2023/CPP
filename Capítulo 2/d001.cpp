#include <iostream>
using namespace std;

int main() {
    double quilometros;
    double litros;

    cout << "Informe a quantidade de quilômetros percorridos: ";
    cin >> quilometros;

    cout << "Informe o total de litros usados: ";
    cin >> litros;

    double consumoMedio = quilometros / litros;

    cout << "O consumo médio de combustível é: " << consumoMedio << " km/l" << endl;

    return 0;
}