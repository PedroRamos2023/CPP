#include <iostream>
using namespace std;

int main() {
    bool a, b;

    cout << "--------EXPRESSOES LOGICAS--------\n";
    cout << "Entre com o valor logico de a: ";
    cin >> a;
    cout << "Entre com o valor logico de b: ";
    cin >> b;

    cout << "\nOperacao logica entre os valores " << a << " e " << b;
    cout << "\nNegacao a: " << (!a);
    cout << "\nNegacao b: " << (!b);
    cout << "\nConjuncao (E): " << (a && b);
    cout << "\nDisjuncao (OU): " << (a || b);
    cout << "\nDisjuncao exclusiva (XOR): " << (a ^ b);
    cout << "\n";
    system("pause");
}