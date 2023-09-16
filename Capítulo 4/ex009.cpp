#include <iostream>
using namespace std;

int main()
{
    int num;

    do
    {
        cout << "\nNumero: ";
        cin >> num;
        cout << "\n" << num * 2;
    }
    while(num > 0);
    cout << "\n";
    system("pause");
}