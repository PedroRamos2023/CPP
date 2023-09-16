#include <iostream>
using namespace std;

int main()
{
    const int ordem = 5;
    int matriz[ordem][ordem];

    for(int i = 0; i < ordem; i++)
    {
        for(int j = 0; j < ordem; j++)
        {
            cout << "Digite o valor para a posição [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nTodos os elementos da matriz:" << endl;
    for(int i = 0; i < ordem; i++)
    {
        for(int j = 0; j < ordem; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nElementos da diagonal principal:" << endl;
    for(int i = 0; i < ordem; i++)
    {
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    return 0;
}