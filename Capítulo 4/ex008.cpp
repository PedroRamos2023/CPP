#include <iostream>
using namespace std;

int main()
{
    int num;

    for(;;)
    {
        cout << "\nNumero: ";
        cin >> num;
        if(num <= 0) break;
        cout << "\n" << num * 2;
    }
    cout << "\n";
    system("pause");
}