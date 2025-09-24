#include <iostream>
using namespace std;

int main() {
    int i, sum;
    sum = 0;
    i = 1;
    while ( i <= 10 ) {
        cout << i << endl;
        sum = sum +i;
        i = i + 1;
    }
    cout << sum << endl;
    return 0;
}