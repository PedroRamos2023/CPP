#include <iostream>
using namespace std;

int main()
{
    int num, cont;

    for(cont = 1; cont <= 3; cont++)
    {
        cout << "\nNumero: ";
        cin >> num;
        cout << "\n" << num * 2;
    }
    cout << "\n";
    system("pause");
}