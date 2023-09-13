#include <iostream>
using namespace std;

int main() {
    double largura;
    double altura;

    cout << "Informe a largura do retângulo (em metros): ";
    cin >> largura;

    cout << "Informe a altura do retângulo (em metros): ";
    cin >> altura;

    double area = largura * altura;

    cout << "A área do retângulo é: " << area << " metros quadrados" << endl;

    return 0;
}