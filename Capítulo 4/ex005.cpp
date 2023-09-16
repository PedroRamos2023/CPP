#include <iostream>
using namespace std;

int main()
{
    int cont = 1;

    while(cont <= 10)
    {
        if(cont % 2 == 0)
            cout << "\n" << cont;
        cont++;
    }
}