#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;

    cout << "Digite o primeiro valor inteiro: ";
    cin >> num1;
    cout << "Digite o segundo valor inteiro: ";
    cin >> num2;
    cout << "Digite o terceiro valor inteiro: ";
    cin >> num3;
    cout << "Digite o quarto valor inteiro: ";
    cin >> num4;

    int menor = num1;

    if(num2 < menor) {
        menor = num2;
    }
    if(num3 < menor) {
        menor = num3;
    }
    if(num4 < menor) {
        menor = num4;
    }

    cout << "O menor elemento entre " << num1 << ", " << num2 << ", " << num3 << " e " << num4 << " é " << menor << endl;

    return 0;
}