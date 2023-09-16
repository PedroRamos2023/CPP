#include <iostream>
using namespace std;

int main()
{
    const int tamanho = 7;
    int nomeDoVetor[7];

    cout << "\nTítulo\n";
    for(int n = 0; n < tamanho; n++)
    {
        cout << nomeDoVetor[n] << "\t:";
    }
}