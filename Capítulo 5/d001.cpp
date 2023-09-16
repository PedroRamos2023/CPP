#include <iostream>
using namespace std;

int main()
{
    const int tamanho = 10;
    double vetor[tamanho];

    for(int i = 0; i < tamanho; i++)
    {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "Vetor com o dobro dos valores:" << endl;
    for(int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] * 2 << " ";
    }

    cout << endl;

    return 0;
}