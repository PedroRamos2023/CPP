#include <iostream>
using namespace std;

int main()
{
    int cont;

    for(cont = 10; cont > 1; cont--)
    {
        if((cont % 2) == 0)
            cout << "\n" << cont;
    }
}