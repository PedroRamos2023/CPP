#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "\nNumero: ";
    cin >> num;

    while(num <= 0)
    {
        cout << "\n" << num * 2;
        cout << "\nNumero: ";
        cin >> num;
    }
    cout << "\n";
    system("pause");
}