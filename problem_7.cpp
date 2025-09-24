#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    int limit = static_cast<int>(sqrt(n));
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number to check it is prime or not: ";
    cin >> n;
    if ( isPrime(n)) {
        cout << "Number is prime";
    }else {
        cout << "Number is not prime";
    }
    return 0;
}