#include <iostream>
using namespace std;

int main() {
    float x, y;

    cout << "--------CÁLCULO DE POLINÔMIO--------\n";
    cout << "p(x) = 2x^3 + 7x^2 + 3x - (5/2)\n";
    cout << "Entre com o valor de x: ";
    cin >> x;

    y <- 2*(x * x * x) + 7*(x * x) + 3 * x - 5 / 2;
    cout << "Resultado p(x) = " << y << "\n";
}