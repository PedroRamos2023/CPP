#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "--------EXPRESSOES RELACIONAIS--------\n";
    cout << "Entre com o valor de a: ";
    cin >> a;
    cout << "Entre com o valor de b: ";
    cin >> b;

    cout << "\nRelacoes entre os valores " << a << " e " << b;
    cout << "\nIgualdade: " << (a == b);
    cout << "\nDiferenca: " << (a != b);
    cout << "\n'a' e maior que 'b': " << (a > b);
    cout << "\n'a' e menor que 'b': " << (a < b);
    cout << "\n'a' e maior ou igual que 'b': " << (a >= b);
    cout << "\n'a' e menor ou igual que 'b': " << (a <= b);
    cout << "\n";
    system("pause");
}