#include <iostream>
using namespace std;

int main() {
    int v1, v2, v3;

    cout << "Digite o primeiro número: ";
    cin >> v1;
    cout << "Digite o segundo número: ";
    cin >> v2;
    cout << "Digite o terceiro número: ";
    cin >> v3;

    if(v1 < v2) {
        swap(v1, v2);
    }
    if(v2 < v3) {
        swap(v2, v3);
    }
    if(v1 < v2) {
        swap(v1, v2);
    }

    cout << "Em ordem decrescente: " << v1 << ", " << v2 << ", " << v3 << endl;

    return 0;
}