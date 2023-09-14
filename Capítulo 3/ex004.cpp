#include <iostream>
using namespace std;

int main() {
    char resp;

    cout << "\nVocê gosta de programar (S/N)? ";
    cin >> resp;

    if(resp == 's' || resp == 'S')
        cout << "\nParabéns! Você agora faz parte dos 'apaixonados' pela programação.\n";
    else
        cout << "\nTalvez você não esteja estudando muito. Tente um pouco mais.\n";
}