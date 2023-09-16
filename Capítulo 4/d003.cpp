#include <iostream>
using namespace std;

int main() {
    int numero, numerosPares = 0;

    cout << "Digite 20 números:" << endl;

    for (int i = 0; i < 20; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numero;

        if (numero % 2 == 0) {
            numerosPares++;
        }
    }

    cout << "Quantidade de números pares digitados: " << numerosPares << endl;

    return 0;
}