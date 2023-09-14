#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "\nNúmero 1: ";
    cin >> num1;
    cout << "\nNúmero 2: ";
    cin >> num2;
    cout << "\nNúmero 3: ";
    cin >> num3;
    cout << "\nNúmeros em ordem: ";

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            if(num2 > num3)
                cout << num3 << " - " << num2 << " - " << num1;
            else
                cout << num2 << " - " << num3 << " - " << num1;
        }
        else
        {
            cout << num2 << " - " << num1 << " - " << num3;
        }
    }
    else
    {
        if(num2 > num3)
        {
            if(num1 > num3)
                cout << num3 << " - " << num1 << " - " << num2;
            else
                cout << num1 << " - " << num3 << " - " << num2;
        }
        else
        {
            cout << num1 << " - " << num2 << " - " << num3;
        }
    }
    cout << "\n";
}