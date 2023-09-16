#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;
    
    for (int i = 1; i <= 1000; i++) {
        if (isPrime(i)) {
            count++;
        }
    }

    cout << "Total de números primos entre 1 e 1000: " << count << endl;

    return 0;
}