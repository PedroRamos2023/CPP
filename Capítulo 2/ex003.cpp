#include <iostream>
using namespace std;

int main() {
    float conta, juros, valorJuros, novoValor;

    cin >> conta;
    cin >> juros;

    valorJuros = conta * juros;
    novoValor = valorJuros + conta;
    cout << novoValor;
}