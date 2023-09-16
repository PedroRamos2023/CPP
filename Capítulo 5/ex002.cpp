#include <iostream>
using namespace std;

int main()
{
    int n;
    int vetor[7];

    for(n = 0; n < 7; n++)
    {
        cout << "\nDigite " << n + 1 << "o elemento: ";
        cin >> vetor[n];
    }
}