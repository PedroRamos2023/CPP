#include <iostream>
using namespace std;

int main()
{
    int numero = 1;
    int pos, neg;

    pos = neg = 0;

    while(numero != 0)
    {
        cout << "\nEscreva o número";
        cin >> numero;
        if(numero > 0)
            pos++;
        else
        {
            if(numero < 0)
                neg++;
        }
    }
    cout << "\nTotal de números positivos: " << pos;
    cout << "\nTotal de números negativos: " << neg;
}