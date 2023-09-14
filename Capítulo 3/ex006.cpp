#include <iostream>
using namespace std;

int main() {
    int mes;

    cout << "\nDigite um número de 1 a 12: ";
    cin >> mes;
    switch(mes)
    {
        case 1: cout << "\nJaneiro\n";
            break;
        case 2: cout << "\nFevereiro\n";
            break;
        case 3: cout << "\nMarço\n";
            break;
        case 4: cout << "\nAbril\n";
            break;
        case 5: cout << "\nMaio\n";
            break;
        case 6: cout << "\nJunho\n";
            break;
        case 7: cout << "\nJulho\n";
            break;
        case 8: cout << "\nAgosto\n";
            break;
        case 9: cout << "\nSetembro\n";
            break;
        case 10: cout << "\nOutubro\n";
            break;
        case 11: cout << "\nNovembro\n";
            break;
        case 12: cout << "\nDezembro\n";
            break;
        default: cout << "\nNúmero inválido.\n";
    }
    system("pause");
}